class Cliente
{
    public string Nome { get; private set; }
    public DateTime DataNascimento { get; private set; }
    public string CPF { get; private set; }
    public string EstadoCivil { get; private set; }
    public string Profissao { get; private set; }

    public Cliente(string nome, DateTime dataNascimento, string cpf, string estadoCivil, string profissao)
    {
        Nome = nome;
        DataNascimento = dataNascimento;
        CPF = ValidarCPF(cpf);
        EstadoCivil = estadoCivil;
        Profissao = profissao;
    }

    private string ValidarCPF(string cpf)
    {
      
        return cpf;
    }
}