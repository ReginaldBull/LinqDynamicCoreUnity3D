public sealed class Choice : IChoice
{
    public string Code { get; private set; }
    public string Reference { get; private set; }

    public Choice(string code, string reference)
    {
        Code = code;
        Reference = reference;
    }    
}