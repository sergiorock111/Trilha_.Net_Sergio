#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Dependente
{
public:
    string nomeDependente;

    Dependente(string nome)
    {
        nomeDependente = nome;
    }
    void setNomeDependente(string _nomedependente)
    {
        nomeDependente = _nomedependente;
    }

    string getNomeDependente()
    {
        return nomeDependente;
    }
};

class Cliente
{
    string nome, cpf;

public:
    vector<Dependente> VetDependente;

    void setNome(string _nome)
    {
        nome = _nome;
    }
    string getNome()
    {
        return nome;
    }
    void setCpf(string _cpf)
    {
        cpf = _cpf;
    }
    string getCpf()
    {
        return cpf;
    }

    void novoDependente(Dependente novodependente)
    {
        VetDependente.push_back(novodependente);
    }
    vector<Cliente> listaCliente;

    void cadastroCliente(Cliente cliente)
    {
        string nome, cpf, nomeDependente;

        char opcao;

        cout << "digite seu cpf: " << endl;
        getline(cin, cpf);
        cliente.setCpf(cpf);
        cout << "digite seu nome: " << endl;
        getline(cin, nome);
        cliente.setNome(nome);

        do
        {
            cout << "deseja cadastrar algum dependente ?" << endl;
            cout << "digite S/N" << endl;
            cin >> opcao;
            cin.ignore();

            if (opcao == 's' || opcao == 'S')
            {
                cout << "digite o nome do seu dependente: " << endl;
                getline(cin, nomeDependente);

                Dependente dependente(nomeDependente);
                cliente.novoDependente(dependente);
            }
        } while (opcao != 'n' && opcao != 'N');

        listaCliente.push_back(cliente);
    };
    void listarCliente()
    {

        for (auto &dados : listaCliente)
        {
            cout << "Dados do Cliente:" << endl
                 << endl;
            cout << "cpf: " << dados.getCpf() << endl;
            cout << "nome: " << dados.getNome() << endl;
            for (auto &dadosdependente : VetDependente)
            {
                cout << "Os dependentes são:" << endl
                     << endl;
                cout << dadosdependente.getNomeDependente() << endl;
            };
        };
    };
};

int main()
{

    Cliente cliente;
    cliente.cadastroCliente(cliente);

    cliente.listarCliente();

    return 0;
}