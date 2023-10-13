#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std ;

class Tarefa {
public:
    Tarefa(const string& descricao, bool concluida = false)
        : descricao(descricao), concluida(concluida) {}

    std::string getDescricao() const {
        return descricao;
    }

    bool estaConcluida() const {
        return concluida;
    }

    void marcarConcluida() {
        concluida = true;
    }

    void desmarcarConcluida() {
        concluida = false;
    }

private:
    string descricao;
    bool concluida;
};

class BancoDeDados {
public:
    static void salvarTarefas(const vector<Tarefa>& tarefas, const string& nomeArquivo) {
        ofstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            for (const Tarefa& tarefa : tarefas) {
                arquivo << tarefa.getDescricao() << "," << (tarefa.estaConcluida() ? "1" : "0") << "\n";
            }
            arquivo.close();
        } else {
            cerr << "Erro ao abrir o arquivo para salvar tarefas." <<endl;
        }
    }

    static vector<Tarefa> carregarTarefas(const string& nomeArquivo) {
        vector<Tarefa> tarefas;
        ifstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            string linha;
            while (getline(arquivo, linha)) {
                size_t pos = linha.find(",");
                if (pos != string::npos) {
                    string descricao = linha.substr(0, pos);
                    bool concluida = (linha.substr(pos + 1) == "1");
                    tarefas.emplace_back(descricao, concluida);
                }
            }
            arquivo.close();
        } else {
            cerr << "Erro ao abrir o arquivo para carregar tarefas." << endl;
        }
        return tarefas;
    }
};

class GerenciadorTarefas {
public:
    void adicionarTarefa(const string& descricao) {
        tarefas.push_back(Tarefa(descricao));
    }

    void marcarTarefaComoConcluida(size_t indice) {
        if (indice < tarefas.size()) {
            tarefas[indice].marcarConcluida();
        } else {
            cerr << "Índice inválido." << endl;
        }
    }

    void listarTarefasPendentes() {
        int contador = 0;
        for (size_t i = 0; i < tarefas.size(); ++i) {
            if (!tarefas[i].estaConcluida()) {
                cout << contador << ". " << tarefas[i].getDescricao() << endl;
                contador++;
            }
        }
    }

    void salvarTarefasEmArquivo(const string& nomeArquivo) {
        BancoDeDados::salvarTarefas(tarefas, nomeArquivo);
    }

    void carregarTarefasDeArquivo(const string& nomeArquivo) {
        tarefas = BancoDeDados::carregarTarefas(nomeArquivo);
    }

private:
    vector<Tarefa> tarefas;
};

int main() {
    GerenciadorTarefas gerenciador;

    gerenciador.carregarTarefasDeArquivo("tarefas.txt");

    int opcao;
    do {
        cout << "Menu de Tarefas:" << endl;
        cout << "1. Adicionar nova tarefa" << endl;
        cout << "2. Marcar tarefa como concluída" << endl;
        cout << "3. Listar tarefas pendentes" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                cin.ignore();
                string descricao;
                cout << "Digite a descrição da nova tarefa: ";
                getline(std::cin, descricao);
                gerenciador.adicionarTarefa(descricao);
                break;
            }
            case 2: {
                int indice;
                cout << "Digite o índice da tarefa a ser marcada como concluída: ";
                cin >> indice;
                gerenciador.marcarTarefaComoConcluida(indice);
                break;
            }
            case 3:
                gerenciador.listarTarefasPendentes();
                break;
            case 4:
                gerenciador.salvarTarefasEmArquivo("tarefas.txt");
                cout << "Tarefas salvas. Saindo do aplicativo." << endl;
                break;
            default:
                cerr << "Opção inválida." << std::endl;
        }
    } while (opcao != 4);

    return 0;
}