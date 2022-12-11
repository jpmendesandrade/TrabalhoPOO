#include <iostream>
using namespace std;

class Animal :public Ser
{
private:
    string respiracao;
    string alimentacao;
    string reproducao;
    string vida;
public:
    void exibirdados() override;
    void editar() override;
    //Construtor
    Animal(string respiracao = "Sem dados", string alimentacao = "Sem dados", string reproducao = "Sem dados", string vida = "Sem dados");
    //Getter's
    string get_respiracao();
    string get_alimentacao();
    string get_reproducao();
    string get_vida();
    //Setter's
    void set_respiracao(string respiracao);
    void set_alimentacao(string alimentacao);
    void set_reproducao(string reproducao);
    void set_vida(string vida);
};

void Animal::exibirdados(){
    cout << "--------------------------------------------" << endl;
    cout << "Espécie: " << this->get_especie() << endl;
    cout << "ID: " << this->get_id() << endl;
    cout << "Idade: " << this->get_idade() << endl;
    cout << "Peso: " << this->get_peso() << endl;
    cout << "Extinção: " << this->get_extincao() << endl;
    cout << "Ambiente: " << this->get_ambiente() << endl;
    cout << "Respiração: " << this->get_respiracao() << endl;
    cout << "Alimentação: " << this->get_alimentacao() << endl;
    cout << "Reprodução: " << this->get_reproducao() << endl;
    cout << "Vida: " << this->get_vida() << endl;
    cout << "--------------------------------------------" << endl;
}
void Animal::editar(){
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
    cout << "Respiração:" << endl;
    cin >> respiracao;
    this->set_respiracao(respiracao);
    cout << "Alimentação:" << endl;
    cin >> alimentacao;
    this->set_alimentacao(alimentacao);
    cout << "Reprodução:" << endl;
    cin >> reproducao;
    this->set_reproducao(reproducao);
    cout << "Vida:" << endl;
    cin >> vida;
    this->set_vida(vida);
}
//Construtor
Animal::Animal(string respiracao, string alimentacao, string reproducao, string vida){
    set_respiracao(respiracao);
    set_alimentacao(alimentacao);
    set_reproducao(reproducao);
    set_vida(vida);
}
//Getter's
string Animal::get_respiracao(){
    return this->respiracao;
}
string Animal::get_alimentacao(){
    return this->alimentacao;
}
string Animal::get_reproducao(){
    return this->reproducao;
}
string Animal::get_vida(){
    return this->vida;
}
//Setter's
void Animal::set_respiracao(string respiracao){
    this->respiracao = respiracao;
}
void Animal::set_alimentacao(string alimentacao){
    this->alimentacao = alimentacao;
}
void Animal::set_reproducao(string reproducao){
    this->reproducao = reproducao;
}
void Animal::set_vida(string vida){
    this->vida = vida;
}