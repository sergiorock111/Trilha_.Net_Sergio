using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        Escritorio escritorio = new Escritorio("Escritório de Advocacia XYZ");

        Advogado advogado1 = new Advogado("Helder ", new DateTime(1980, 1, 1), "12345678901", "CNA-123");
        Advogado advogado2 = new Advogado("Degas", new DateTime(1990, 5, 15), "98765432109", "CNA-456");

        escritorio.AdicionarAdvogado(advogado1);
        escritorio.AdicionarAdvogado(advogado2);

        Cliente cliente1 = new Cliente("João", new DateTime(1985, 3, 10), "98765432101", "Casado", "Engenheiro");
        Cliente cliente2 = new Cliente("Maria", new DateTime(1992, 7, 20), "12345678902", "Solteiro", "Advogado");

        escritorio.AdicionarCliente(cliente1);
        escritorio.AdicionarCliente(cliente2);

        // Exibindo informações
        Console.WriteLine($"Nome do Escritório: {escritorio.Nome}");
        Console.WriteLine("\nAdvogados:");
        foreach (Advogado advogado in escritorio.Advogados)
        {
            Console.WriteLine($"Nome: {advogado.Nome}");
            Console.WriteLine($"Data de Nascimento: {advogado.DataNascimento.ToShortDateString()}");
            Console.WriteLine($"CPF: {advogado.CPF}");
            Console.WriteLine($"CNA: {advogado.CNA}");
            Console.WriteLine("\n");
        }

        Console.WriteLine("\nClientes:");
        foreach (Cliente cliente in escritorio.Clientes)
        {
            Console.WriteLine($"Nome: {cliente.Nome}");
            Console.WriteLine($"Data de Nascimento: {cliente.DataNascimento.ToShortDateString()}");
            Console.WriteLine($"CPF: {cliente.CPF}");
            Console.WriteLine($"Estado Civil: {cliente.EstadoCivil}");
            Console.WriteLine($"Profissão: {cliente.Profissao}");
            Console.WriteLine("\n");
        }

        // Gerando relatórios
        Console.WriteLine("Relatórios:");
        Console.WriteLine("Advogados com idade entre 30 e 40 anos:");
        List<Advogado> advogadosIdade30a40 = escritorio.ObterAdvogadosComIdadeEntre(30, 40);
        ExibirAdvogados(advogadosIdade30a40);

        Console.WriteLine("Clientes com idade entre 25 e 35 anos:");
        List<Cliente> clientesIdade25a35 = escritorio.ObterClientesComIdadeEntre(25, 35);
        ExibirClientes(clientesIdade25a35);
    }

    static void ExibirAdvogados(List<Advogado> advogados)
    {
        foreach (Advogado advogado in advogados)
        {
            Console.WriteLine($"Nome: {advogado.Nome}");
            Console.WriteLine($"Data de Nascimento: {advogado.DataNascimento.ToShortDateString()}");
            Console.WriteLine($"CPF: {advogado.CPF}");
            Console.WriteLine($"CNA: {advogado.CNA}");
            Console.WriteLine("\n");
        }
    }

    static void ExibirClientes(List<Cliente> clientes)
    {
        foreach (Cliente cliente in clientes)
        {
            Console.WriteLine($"Nome: {cliente.Nome}");
            Console.WriteLine($"Data de Nascimento: {cliente.DataNascimento.ToShortDateString()}");
            Console.WriteLine($"CPF: {cliente.CPF}");
            Console.WriteLine($"Estado Civil: {cliente.EstadoCivil}");
            Console.WriteLine($"Profissão: {cliente.Profissao}");
            Console.WriteLine("\n");
        }
    }
}

class Escritorio
{
    public string Nome { get; private set; }
    public List<Advogado> Advogados { get; private set; }
    public List<Cliente> Clientes { get; private set; }

    public Escritorio(string nome)
    {
        Nome = nome;
        Advogados = new List<Advogado>();
        Clientes = new List<Cliente>();
    }

    public void AdicionarAdvogado(Advogado advogado)
    {
        // Validar CPF e CNA únicos antes de adicionar
        if (Advogados.Any(a => a.CPF == advogado.CPF) || Advogados.Any(a => a.CNA == advogado.CNA))
        {
            Console.WriteLine("Advogado com CPF ou CNA duplicado. Não adicionado.");
        }
        else
        {
            Advogados.Add(advogado);
            Console.WriteLine("Advogado adicionado com sucesso.");
        }
    }

    public void AdicionarCliente(Cliente cliente)
    {
        // Validar CPF único antes de adicionar
        if (Clientes.Any(c => c.CPF == cliente.CPF))
        {
            Console.WriteLine("Cliente com CPF duplicado. Não adicionado.");
        }
        else
        {
            Clientes.Add(cliente);
            Console.WriteLine("Cliente adicionado com sucesso.");
        }
    }

    public int ObterNumeroAdvogados()
    {
        return Advogados.Count;
    }

    public int ObterNumeroClientes()
    {
        return Clientes.Count;
    }

    public List<Advogado> ObterAdvogadosComIdadeEntre(int idadeMinima, int idadeMaxima)
    {
        DateTime dataAtual = DateTime.Now;
        return Advogados.Where(a => (dataAtual - a.DataNascimento).Days / 365 >= idadeMinima && (dataAtual - a.DataNascimento).Days / 365 <= idadeMaxima).ToList();
    }

    public List<Cliente> ObterClientesComIdadeEntre(int idadeMinima, int idadeMaxima)
    {
        DateTime dataAtual = DateTime.Now;
        return Clientes.Where(c => (dataAtual - c.DataNascimento).Days / 365 >= idadeMinima && (dataAtual - c.DataNascimento).Days / 365 <= idadeMaxima).ToList();
    }
}

class Advogado
{
    public string Nome { get; private set; }
    public DateTime DataNascimento { get; private set; }
    public string CPF { get; private set; }
    public string CNA { get; private set; }

    public Advogado(string nome, DateTime dataNascimento, string cpf, string cna)
    {
        Nome = nome;
        DataNascimento = dataNascimento;
        CPF = ValidarCPF(cpf);
        CNA = cna;
    }

    private string ValidarCPF(string cpf)
    {
        // Lógica de validação do CPF
        // Aqui você pode implementar a validação específica do CPF com 11 dígitos
        // No exemplo, apenas retorna o CPF como está
        return cpf;
    }
}

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
        // Lógica de validação do CPF
        // Aqui você pode implementar a validação específica do CPF com 11 dígitos
        // No exemplo, apenas retorna o CPF como está
        return cpf;
    }
}
