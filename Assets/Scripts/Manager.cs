using System;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Dynamic.Core;
using System.Linq.Dynamic.Core.CustomTypeProviders;
using System.Linq.Dynamic.Core.Parser;
using System.Linq.Expressions;
using UnityEngine;
using UnityEngine.Assertions;

public class CustomTypeProvider : DefaultDynamicLinqCustomTypeProvider
{
    private readonly HashSet<Type> _types;

    public CustomTypeProvider(Type[] types)
    {
        _types = new HashSet<Type>(types ?? new Type[]
        {
        })
        {
            typeof(IChoice),
            typeof(IProductConfiguration),
            typeof(IEnumerable<>)
        };
    }

    public override HashSet<Type> GetCustomTypes() => _types;
}
public sealed class Manager : MonoBehaviour
{
    private void Start()
    {
        var productConfiguration = CreateValidProductConfiguration();
        var expression = "input.Choices.FirstOrDefault(p=>p.Reference == \"Cover\")";

        ParameterExpression[] parameterExpressions = new[]
        {
            Expression.Parameter(typeof(IProductConfiguration), "input")
        };


        var config = CreateParsingConfig(null);
        
        var parser = new ExpressionParser(parameterExpressions, expression, new object[]{}, config);

        Expression exp = parser.Parse(typeof(IChoice));
        var wrappedExpression = WrapExpression<object>(
            CreateExpressionBody(exp),
            parameterExpressions,
            new ParameterExpression[]
            {
            });
        var func = wrappedExpression.Compile();
        
        var input = new object[]
        {
            productConfiguration
        };
        
        var result = func(input);
        
        Assert.IsNotNull(result, "result != null");
        
        Debug.Log(((IChoice)result).Reference);
    }
    
    private static IEnumerable<Expression> CreateExpressionBody(Expression exp) =>
        new List<Expression>
        {
            exp
        };
    
    private static Expression<Func<object[], TOut>> WrapExpression<TOut>(
        IEnumerable<Expression> expressionList,
        ParameterExpression[] parameters,
        IEnumerable<ParameterExpression> variables)
    {
        var argExp = Expression.Parameter(typeof(object[]), "args");
        var paramExps = parameters.Select((c, i) => CreateExpression(argExp, i, c));
        var blockExpSteps = paramExps.Concat(expressionList);
        var blockExp = Expression.Block(parameters.Concat(variables), blockExpSteps);
        return Expression.Lambda<Func<object[], TOut>>(blockExp, argExp);
    }
    
    private static Expression CreateExpression(Expression argExp, int i, Expression c)
    {
        var arg = Expression.ArrayAccess(argExp, Expression.Constant(i));
        return Expression.Assign(c, Expression.Convert(arg, c.Type));
    }
    
    private static ParsingConfig CreateParsingConfig(Type[] customTypes) =>
        new ParsingConfig
        {
            CustomTypeProvider = new CustomTypeProvider(customTypes),
            IsCaseSensitive = false
        };
    
    private static IProductConfiguration CreateValidProductConfiguration()
    {
        return new ProductConfiguration(
            "test", new List<IChoice>
            {
                new Choice("C1", "ProtectionGrid"),
                new Choice("C2", "Cover"),
            });
    }
}