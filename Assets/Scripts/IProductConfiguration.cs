using System.Collections.Generic;

public interface IProductConfiguration
{
    string Code { get; }
    IList<IChoice> Choices { get; }
}