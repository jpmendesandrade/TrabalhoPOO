#include <iostream>
using namespace std;

class Planta :public Ser
{
private:
    string bioma;
    string grupo;
    bool fruto;
    bool semente;
public:
    void exibirdados() override;
    void editar() override;
    //Contrutor
    Planta(string bioma = "Sem dados", string grupo = "Sem dados", bool fruto = 0, bool semente = 0);
    //Getter's
    string get_bioma();
    string get_grupo();
    bool get_fruto();
    bool get_semente();
    //Setter's
    void set_bioma(string bioma);
    void set_grupo(string grupo);
    void set_fruto(bool fruto);
    void set_semente(bool semente);

};

void Planta::exibirdados(){
    cout << "--------------------------------------------" << endl;
    cout << "Espécie: " << this->get_especie() << endl;
    cout << "ID: " << this->get_id() << endl;
    cout << "Idade: " << this->get_idade() << endl;
    cout << "Peso: " << this->get_peso() << endl;
    cout << "Extinção: " << this->get_extincao() << endl;
    cout << "Ambiente: " << this->get_ambiente() << endl;
    cout << "Bioma: " << this->get_bioma() << endl;
    cout << "Grupo: " << this->get_grupo() << endl;
    cout << "Fruto: " << this->get_fruto() << endl;
    cout << "Semente: " << this->get_semente() << endl;
    cout << "--------------------------------------------" << endl;
}
void Planta::editar(){
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
    cout << "Bioma:" << endl;
    cin >> bioma;
    this->set_bioma(bioma);
    cout << "Grupo:" << endl;
    cin >> grupo;
    this->set_grupo(grupo);
    cout << "Fruto: 0/Não ou 1/Sim" << endl;
    cin >> fruto;
    this->set_fruto(fruto);
    cout << "Semente: 0/Não ou 1/Sim" << endl;
    cin >> semente;
    this->set_semente(semente);
}
//Construtor
Planta::Planta(string bioma, string grupo, bool fruto, bool semente){
}
//Getter's
string Planta::get_bioma(){
    return this->bioma;
}
string Planta::get_grupo(){
    return this->grupo;
}
bool Planta::get_fruto(){
    return this->fruto;
}
bool Planta::get_semente(){
    return this->semente;
}
//Setter's
void Planta::set_bioma(string bioma){
    this->bioma = bioma;
}
void Planta::set_grupo(string grupo){
    this->grupo = grupo;
}
void Planta::set_fruto(bool fruto){
    this->fruto = fruto;
}
void Planta::set_semente(bool semente){
    this->semente = semente;
}