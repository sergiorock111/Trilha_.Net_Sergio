using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        // Criar uma lista de tuplas com nomes e alturas em centímetros
        List<(string, int)> pessoas = new List<(string, int)>
        {
            ("João", 175),
            ("Maria", 160),
            ("Carlos", 180),
            // Adicione mais tuplas conforme necessário
        };

        // Usar LINQ e expressão lambda para calcular a altura média
        double alturaMedia = pessoas.Average(pessoa => pessoa.Item2);

        // Exibir a altura média
        Console.WriteLine($"Altura média das pessoas: {alturaMedia} centímetros");
    }
}