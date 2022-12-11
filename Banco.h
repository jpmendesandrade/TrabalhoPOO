#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Banco
{
private:
    vector<Animal*> banco_animal;
    vector<Planta*> banco_planta;
public:
    void adicionar(Animal* ad_animal);
    void adicionar(Planta* ad_planta);
    void buscar(int tipo, string especie);
    void buscar(int tipo, int id);
    void editar(int tipo, int id);
    void exibir(int tipo);
    void salvar(int tipo);
    void relatorio_extincao(int tipo);
    void relatorio_ambiente(int tipo, string ambiente);
    void incorporar(int tipo);
    //Construtor
    Banco();
    

};

Banco::Banco(){
}
void Banco::adicionar(Animal* ad_animal){
    banco_animal.push_back(ad_animal);
    ofstream arquivo;
    arquivo.open("banco_dados_animal.txt", ios::app);
    arquivo << ad_animal->get_especie() << "/" << ad_animal->get_id() << "/" << ad_animal->get_idade() << "/"  << ad_animal->get_peso() << "/" << ad_animal->get_extincao() << "/" << ad_animal->get_ambiente() << "/" << ad_animal->get_respiracao() << "/" << ad_animal->get_alimentacao() << "/" << ad_animal->get_reproducao() << "/" << ad_animal->get_vida() << endl;
    arquivo.close();
}
void Banco::adicionar(Planta* ad_planta){
    banco_planta.push_back(ad_planta);
    ofstream arquivo;
    arquivo.open("banco_dados_planta.txt", ios::app);
    arquivo << ad_planta->get_especie() << "/" << ad_planta->get_id() << "/" << ad_planta->get_idade() << "/"  << ad_planta->get_peso() << "/" << ad_planta->get_extincao() << "/" << ad_planta->get_ambiente() << "/" << ad_planta->get_bioma() << "/" << ad_planta->get_grupo() << "/" << ad_planta->get_fruto() << "/" << ad_planta->get_semente() << endl;
    arquivo.close();
}
void Banco::buscar(int tipo, string especie){
    if(tipo == 0){
        int quant = 0;
        for(int i = 0 ; i < banco_animal.size(); i++){
        if(banco_animal[i]->get_especie() == especie){
            banco_animal[i]->exibirdados();
            quant = quant + 1;
        }else{
        }
        }
    if(quant > 0){
        cout << "Encontrados " << quant << " resultados" << endl;
    }else{
        cout << "Encontrados " << quant << " resultados" << endl;
    }
    }else if (tipo == 1){
        int quant = 0;
        for(int i = 0 ; i < banco_planta.size(); i++){
        if(banco_planta[i]->get_especie() == especie){
            banco_planta[i]->exibirdados();
            quant = quant + 1;
        }else{
        }
        }
        if(quant > 0){
        cout << "Encontrados " << quant << " resultados" << endl;
        }else{
        cout << "Encontrados " << quant << " resultados" << endl;
        }
    }else{
        cout << "Opçao inválida!" << endl;
    }
}
void Banco::buscar(int tipo, int id){
    if(tipo == 0){
        int quant = 0;
        for(int i = 0 ; i < banco_animal.size(); i++){
        if(banco_animal[i]->get_id() == id){
            banco_animal[i]->exibirdados();
            quant = quant + 1;
        }else{
        }
        }
        if(quant > 0){
        cout << "Encontrados " << quant << " resultados" << endl;
        }else{
        cout << "Encontrados " << quant << " resultados" << endl;
        }
    }else if (tipo == 1){
        int quant = 0;
        for(int i = 0 ; i < banco_planta.size(); i++){
        if(banco_planta[i]->get_id() == id){
            banco_planta[i]->exibirdados();
            quant = quant + 1;
        }else{
        }
        }
        if(quant > 0){
        cout << "Encontrados " << quant << " resultados" << endl;
        }else{
        cout << "Encontrados " << quant << " resultados" << endl;
        }
    }else{
        cout << "Opçao inválida!" << endl;
    }

}
void Banco::editar(int tipo, int id){
    if(tipo == 0){
        ofstream arquivo;
        for(int i = 0 ; i < banco_animal.size(); i++){
        if(banco_animal[i]->get_id() == id){
            banco_animal[i]->editar();
        }else{
        }
        }
        arquivo.open("banco_dados_animal.txt");
        for(int i = 0; i < banco_animal.size(); i++){
            arquivo << banco_animal[i]->get_especie() << "/" << banco_animal[i]->get_id() << "/" << banco_animal[i]->get_idade() << "/"  << banco_animal[i]->get_peso() << "/" << banco_animal[i]->get_extincao() << "/" << banco_animal[i]->get_ambiente() << "/" << banco_animal[i]->get_respiracao() << "/" << banco_animal[i]->get_alimentacao() << "/" << banco_animal[i]->get_reproducao() << "/" << banco_animal[i]->get_vida() << endl;
        }
        arquivo.close();
    }else if (tipo == 1){
        ofstream arquivo;
        for(int i = 0 ; i < banco_planta.size(); i++){
        if(banco_planta[i]->get_id() == id){
            banco_planta[i]->editar();
        }else{
        }
        }
        arquivo.open("banco_dados_planta.txt");
        for(int i = 0; i < banco_planta.size(); i++){
            arquivo << banco_planta[i]->get_especie() << "/" << banco_planta[i]->get_id() << "/" << banco_planta[i]->get_idade() << "/"  << banco_planta[i]->get_peso() << "/" << banco_planta[i]->get_extincao() << "/" << banco_planta[i]->get_ambiente() << "/" << banco_planta[i]->get_bioma() << "/" << banco_planta[i]->get_grupo() << "/" << banco_planta[i]->get_fruto() << "/" << banco_planta[i]->get_semente() << endl;
        }
        arquivo.close();
    }else{
        cout << "Opçao inválida!" << endl;
    }
    
}
void Banco::exibir(int tipo){
    if(tipo == 0){
        for(int i = 0; i < banco_animal.size(); i++){
            banco_animal[i]->exibirdados();
        }
    }else if (tipo == 1){
        for(int i = 0; i < banco_planta.size(); i++){
            banco_planta[i]->exibirdados();
        }
    }else{

    }
    
    
}
void Banco::salvar(int tipo){
    if(tipo == 0){
        ofstream arquivo;
        arquivo.open("Animais_cadastrados.txt", ios::app);
        for(int i = 0; i < banco_animal.size(); i++){
            arquivo << "--------------------------------------------" << endl;
            arquivo << "Especie: " << banco_animal[i]->get_especie() << endl;
            arquivo << "ID: " << banco_animal[i]->get_id() << endl;
            arquivo << "Idade: " << banco_animal[i]->get_idade() << endl;
            arquivo << "Peso: " << banco_animal[i]->get_peso() << endl;
            arquivo << "Extinção: " << banco_animal[i]->get_extincao() << endl;
            arquivo << "Ambiente: " << banco_animal[i]->get_ambiente() << endl;
            arquivo << "Respiração: " << banco_animal[i]->get_respiracao() << endl;
            arquivo << "Alimentação: " << banco_animal[i]->get_alimentacao() << endl;
            arquivo << "Reprodução: " << banco_animal[i]->get_reproducao() << endl;
            arquivo << "Vida: " << banco_animal[i]->get_vida() << endl;
            arquivo << "--------------------------------------------" << endl;
        }
        arquivo.close();
    }else if (tipo == 1){
        ofstream arquivo;
        arquivo.open("Plantas_cadastradas.txt", ios::app);
        for(int i = 0; i < banco_planta.size(); i++){
            arquivo << "--------------------------------------------" << endl;
            arquivo << "Especie: " << banco_planta[i]->get_especie() << endl;
            arquivo << "ID: " << banco_planta[i]->get_id() << endl;
            arquivo << "Idade: " << banco_planta[i]->get_idade() << endl;
            arquivo << "Peso: " << banco_planta[i]->get_peso() << endl;
            arquivo << "Extinção: " << banco_planta[i]->get_extincao() << endl;
            arquivo << "Ambiente: " << banco_planta[i]->get_ambiente() << endl;
            arquivo << "Bioma: " << banco_planta[i]->get_bioma() << endl;
            arquivo << "Grupo: " << banco_planta[i]->get_grupo() << endl;
            arquivo << "Fruto: " << banco_planta[i]->get_fruto() << endl;
            arquivo << "Semente: " << banco_planta[i]->get_semente() << endl;
            arquivo << "--------------------------------------------" << endl;
        }
        arquivo.close();
    }else{
        cout << "Opção inválida!" << endl;
    }

}
void Banco::relatorio_extincao(int tipo){
    if(tipo == 0){
        ofstream arquivo;
        arquivo.open("Animais_extinção.txt", ios::app);
        for(int i = 0 ; i < banco_animal.size(); i++){
        if(banco_animal[i]->get_extincao() == 1){
            arquivo << "Espécie em Risco: " << banco_animal[i]->get_especie();
        }else{
        }}
        arquivo.close();
    }else if (tipo == 1){
        ofstream arquivo;
        arquivo.open("Plantas_extinção.txt", ios::app);
        for(int i = 0 ; i < banco_planta.size(); i++){
        if(banco_planta[i]->get_extincao() == 1){
            arquivo << "Espécie em Risco: " << banco_planta[i]->get_especie();
        }else{
        }}
        arquivo.close();
    }else{
        cout << "Opção inválida!" << endl;
    }
}
void Banco::relatorio_ambiente(int tipo, string ambiente){
    if(tipo == 0){
        ofstream arquivo;
        arquivo.open("Animais_ambiente.txt", ios::app);
        for(int i = 0 ; i < banco_animal.size(); i++){
        if(banco_animal[i]->get_ambiente() == ambiente){
            arquivo << "Espécie: " << banco_animal[i]->get_especie() << " pertence ao ambiente: " << ambiente;
        }else{
        }}
        arquivo.close();
    }else if (tipo == 1){
        ofstream arquivo;
        arquivo.open("Plantas_ambiente.txt", ios::app);
        for(int i = 0 ; i < banco_planta.size(); i++){
        if(banco_planta[i]->get_ambiente() == ambiente){
            arquivo << "Espécie: " << banco_planta[i]->get_especie() << " pertence ao ambiente: " << ambiente;
        }else{
        }}
        arquivo.close();
    }else{
        cout << "Opção inválida!" << endl;
    }
}
void Banco::incorporar(int tipo){
    if(tipo == 0){
        ifstream arquivoanimal("banco_dados_animal.txt");
        string dados;
        string temp;
        int i;
        string especie;
        int id;
        int idade;
        float peso;
        bool extincao;
        string ambiente;
        string respiracao;
        string alimentacao;
        string reproducao;
        string vida;
        if(arquivoanimal.is_open()){
            
            while (getline(arquivoanimal, dados)){
                Animal * animal = new Animal();
                temp = "";
                for(i = 0; i < dados.size(); i++){
                    if(dados[i] != '/'){
                        temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                especie = temp;
                animal->set_especie(especie);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }

                id = atoi(temp.c_str());
                animal->set_id(id);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                idade = atoi(temp.c_str());
                animal->set_idade(idade);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                peso = (float)atof(temp.c_str());
                animal->set_peso(peso);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                extincao = atoi(temp.c_str());
                animal->set_extincao(extincao);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                ambiente = temp;
                animal->set_ambiente(ambiente);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                respiracao = temp;
                animal->set_respiracao(respiracao);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                alimentacao = temp;
                animal->set_alimentacao(alimentacao);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                reproducao = temp;
                animal->set_reproducao(reproducao);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                vida = temp;
                animal->set_vida(vida);
                temp = "";
            
                banco_animal.push_back(animal);

            }
        
        }else{
            cout << "Arquivo inválido!" << endl;
        }
    }else if (tipo == 1){
        ifstream arquivoplanta("banco_dados_planta.txt");
        string dados;
        string temp;
        int i;
        string especie;
        int id;
        int idade;
        float peso;
        bool extincao;
        string ambiente;
        string bioma;
        string grupo;
        bool fruto;
        bool semente;
        
        if(arquivoplanta.is_open()){
            
            while (getline(arquivoplanta, dados)){
                Planta * planta = new Planta();
                temp = "";
                for(i = 0; i < dados.size(); i++){
                    if(dados[i] != '/'){
                        temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                especie = temp;
                planta->set_especie(especie);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }

                id = atoi(temp.c_str());
                planta->set_id(id);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                idade = atoi(temp.c_str());
                planta->set_idade(idade);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                peso = (float)atof(temp.c_str());
                planta->set_peso(peso);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                extincao = atoi(temp.c_str());
                planta->set_extincao(extincao);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                ambiente = temp;
                planta->set_ambiente(ambiente);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                bioma = temp;
                planta->set_bioma(bioma);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                grupo = temp;
                planta->set_grupo(grupo);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                fruto = atoi(temp.c_str());
                planta->set_fruto(fruto);
                temp = "";
                for(i = i+1; i < dados.size(); i++){
                    if(dados[i] != '/'){
                    temp = temp + dados[i];
                    }else{
                        break;
                    }
                }
                semente = atoi(temp.c_str());
                planta->set_semente(semente);
                temp = "";
            
                banco_planta.push_back(planta);

            }
        
        }else{
            cout << "Arquivo inválido!" << endl;
        }
    }else{
        cout << "Opção inválida" << endl;
    }
    
}