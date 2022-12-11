#include <iostream>
using namespace std;

class Ser
{
private:
    string especie;
    int id;
    int idade;
    float peso;
    bool extincao;
    string ambiente;
public:
    virtual void exibirdados();
    virtual void editar();
    //Construtor
    Ser(string especie = "Sem dados", int id = 0, int idade = 0, float peso = 0.0, bool exticao = 0, string ambiente = "Sem dados"); 
    //Getter's
    string get_especie();
    int get_id();
    int get_idade();
    float get_peso();
    bool get_extincao();
    string get_ambiente();
    //Setter's
    void set_especie(string especie);
    void set_id(int id);
    void set_idade(int idade);
    void set_peso(float peso);
    void set_extincao(bool extincao);
    void set_ambiente(string ambiente);




};

void Ser::exibirdados(){
    cout << "--------------------------------------------" << endl;
    cout << "Espécie: " << this->get_especie() << endl;
    cout << "ID: " << this->get_id() << endl;
    cout << "Idade: " << this->get_idade() << endl;
    cout << "Peso: " << this->get_peso() << endl;
    cout << "Extinção: " << this->get_extincao() << endl;
    cout << "Ambiente: " << this->get_ambiente() << endl;
    cout << "--------------------------------------------" << endl;
}
void Ser::editar(){
    cout << "Digite os dados: " << endl;
         cout << "Espécie:" <<endl;
         cin >> especie;
         this->set_especie(especie);
         cout << "ID:" << endl;
         cin >> id;
         this->set_id(id);
         cout << "Idade:" << endl;
         cin >> idade;
         this->set_idade(idade);
         cout << "Peso:" << endl;
         cin >> peso;
         this->set_peso(peso);
         cout << "Risco de Extinçao: 0/Não ou 1/Sim" << endl;
         cin >> extincao;
         this->set_extincao(extincao);
         cout << "Ambiente:" << endl;
         cin >> ambiente;
         this->set_ambiente(ambiente);
}
//Construtor
Ser::Ser(string especie, int id, int idade, float peso, bool extincao, string ambiente){
set_especie(especie);
set_id(id);
set_idade(idade);
set_peso(peso);
set_extincao(extincao);
set_ambiente(ambiente);
}
//Getter's
string Ser::get_especie(){
    return this->especie;
}
int Ser::get_id(){
    return this->id;
}
int Ser::get_idade(){
    return this->idade;
}
float Ser::get_peso(){
    return this->peso;
}
bool Ser::get_extincao(){
    return this->extincao;
}
string Ser::get_ambiente(){
    return this->ambiente;
}
//Setter's
void Ser::set_especie(string especie){
    this->especie = especie;
}
void Ser::set_id(int id){
    this->id = id;
};
void Ser::set_idade(int idade){
    this->idade = idade;
};
void Ser::set_peso(float peso){
    this->peso = peso;
};
void Ser::set_extincao(bool extincao){
    this->extincao = extincao;
};
void Ser::set_ambiente(string ambiente){
    this->ambiente = ambiente;
};