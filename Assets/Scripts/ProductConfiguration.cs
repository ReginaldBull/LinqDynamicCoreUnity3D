using System.Collections.Generic;

public sealed class ProductConfiguration : IProductConfiguration
{
    public string Code { get; private set; }
    public IList<IChoice> Choices { get; } = new List<IChoice>();

    public ProductConfiguration(string code) => Code = code;

    public ProductConfiguration(string code, IEnumerable<IChoice> choices) : this(code)
    {
        foreach (var choice in choices)
        {
            Choices.Add(choice);
        }
    }
}