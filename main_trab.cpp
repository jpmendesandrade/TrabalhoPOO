//Link do vídeo: https://www.youtube.com/watch?v=Stq_kC6Nds4
/*
BRUNO GUSTAVO SOMBRA CLAUDIO

JOAO PAULO MENDES ANDRADE

JOSE REGINALDO GONCALVES LOIOLA JUNIOR

LUANA BRENNA NEGREIROS LUCAS
*/

#include <iostream>
#include "Ser.h"
#include "Animal.h"
#include "Planta.h"
#include "Banco.h"
using namespace std;

int main(){

   Banco* banco = new Banco();
   banco->incorporar(0);
   banco->incorporar(1);
   while(true){
      
      int opcao;
      
      cout << "Cadatrar              [1]" << endl;
      cout << "Buscar                [2]" << endl;
      cout << "Editar                [3]" << endl;
      cout << "Exibir                [4]" << endl;
      cout << "Salvar                [5]" << endl;
      cout << "Relatório p/ Extinção [6]" << endl;
      cout << "Relatório p/ Ambiente [7]" << endl;
      
      cin >> opcao;

      if(opcao == 1){
         int opcao2;
         cout << "Deseja cadastrar Animal[0] ou Planta[1]?" << endl;
         cin >> opcao2;
         if(opcao2 == 0){
         string especie;
         int id;
         int idade;
         float peso;
         bool extincao;
         string ambiente;
         string aereo = "Aereo";
         string aquatico = "Aquatico";
         string terrestre = "Terrestre";
         string respiracao;
         string alimentacao;
         string reproducao;
         string vida;
         
         Animal* animal = new Animal();
         cout << "Digite os dados: " << endl;
         cout << "Espécie:" <<endl;
         cin >> especie;
         animal->set_especie(especie);
         cout << "ID:" << endl;
         cin >> id;
         animal->set_id(id);
         cout << "Idade:" << endl;
         cin >> idade;
         animal->set_idade(idade);
         cout << "Peso:" << endl;
         cin >> peso;
         animal->set_peso(peso);
         cout << "Risco de Extinçao: 0/Não ou 1/Sim" << endl;
         cin >> extincao;
         animal->set_extincao(extincao);
         try{
         cout << "Ambiente:" << endl;
         cin >> ambiente;
         if(ambiente == aereo){
            animal->set_ambiente(ambiente);
         }else if(ambiente == aquatico){
            animal->set_ambiente(ambiente);
         }else if(ambiente == terrestre){
            animal->set_ambiente(ambiente);
         }else{
            throw "Ambiente inválido!";
         }
         }catch(const char* e){
            cout << "Erro: " << e << endl;
            break;
         }
         cout << "Respiração:" << endl;
         cin >> respiracao;
         animal->set_respiracao(respiracao);
         cout << "Alimentação:" << endl;
         cin >> alimentacao;
         animal->set_alimentacao(alimentacao);
         cout << "Reprodução:" << endl;
         cin >> reproducao;
         animal->set_reproducao(reproducao);
         cout << "Vida:" << endl;
         cin >> vida;
         animal->set_vida(vida);
         
         banco->adicionar(animal);
         
         cout << "Animal cadastrado com sucesso!" << endl;

         }else if (opcao2 == 1){
         string especie;
         int id;
         int idade;
         float peso;
         bool extincao;
         string ambiente;
         string aereo = "Aereo";
         string aquatico = "Aquatico";
         string terrestre = "Terrestre";
         string bioma;
         string grupo;
         bool fruto;
         bool semente;

         Planta* planta = new Planta();

         cout << "Digite os dados: " << endl;
         cout << "Espécie:" <<endl;
         cin >> especie;
         planta->set_especie(especie);
         cout << "ID:" << endl;
         cin >> id;
         planta->set_id(id);
         cout << "Idade:" << endl;
         cin >> idade;
         planta->set_idade(idade);
         cout << "Peso:" << endl;
         cin >> peso;
         planta->set_peso(peso);
         
         cout << "Risco de Extinçao: 0/Não ou 1/Sim" << endl;
         cin >> extincao;
         try{
         cout << "Ambiente:" << endl;
         cin >> ambiente;
         if(ambiente == aereo){
            planta->set_ambiente(ambiente);
         }else if(ambiente == aquatico){
            planta->set_ambiente(ambiente);
         }else if(ambiente == terrestre){
            planta->set_ambiente(ambiente);
         }else{
            throw "Ambiente inválido!";
         }
         }catch(const char* e){
            cout << "Erro: " << e << endl;
            break;
         }
         planta->set_extincao(extincao);
         cout << "Ambiente:" << endl;
         cin >> ambiente;
         planta->set_ambiente(ambiente);
         cout << "Bioma:" << endl;
         cin >> bioma;
         planta->set_bioma(bioma);
         cout << "Grupo:" << endl;
         cin >> grupo;
         planta->set_grupo(grupo);
         cout << "Fruto: 0/Não ou 1/Sim" << endl;
         cin >> fruto;
         planta->set_fruto(fruto);
         cout << "Semente: 0/Não ou 1/Sim" << endl;
         cin >> semente;
         planta->set_semente(semente);

         banco->adicionar(planta);
         
         cout << "Planta cadastrada com sucesso!" << endl;

         }
         

      }else if(opcao == 2){
         int opcao3;
         cout << "Deseja realizar a busca em Animais[0] ou em Plantas[1]" << endl;
         cin >> opcao3;
         if(opcao3 == 0){
            int opcao4;
            cout << "Deseja buscar por ID[0] ou por Espécie[1]" << endl;
            cin >> opcao4;
            
            if(opcao4 == 0){
               int id;
               cout << "Digite o ID:" << endl;
               cin >> id;
               banco->buscar(0, id);

            }else if(opcao4 == 1){
               string especie;
               cout << "Digite a Espécie:" << endl;
               cin >> especie;
               banco->buscar(0, especie);

            }else{
               cout << "Opção inválida!" << endl;
            }
         }else if (opcao3 == 1){
            int opcao4;
            cout << "Deseja buscar por ID[0] ou por Espécie[1]" << endl;
            cin >> opcao4;
            
            if(opcao4 == 0){
               int id;
               cout << "Digite o ID:" << endl;
               cin >> id;
               banco->buscar(1, id);

            }else if(opcao4 == 1){
               string especie;
               cout << "Digite a Espécie:" << endl;
               cin >> especie;
               banco->buscar(1, especie);

            }else{
               cout << "Opção inválida!" << endl;
               }
         }else{
            cout << "Opção inválida!" << endl;
         }
         
      }else if(opcao == 3){
         int opcao5;
         cout << "Deseja editar um Animal[0] ou uma Planta[1]" << endl;
         cin >> opcao5;
         if(opcao5 == 0){
            int id;
            cout << "Digite o ID do Animal:" << endl;
            cin >> id;
            banco->editar(0, id);
         }else if (opcao5 == 1){
            int id;
            cout << "Digite o ID do Animal:" << endl;
            cin >> id;
            banco->editar(1, id);
         }else{
            cout << "Opção inválida!" << endl;
         }
         

      }else if(opcao == 4){
         int opcao6;
         cout << "Deseja exibir os Animais[0] ou Plantas[1]" << endl;
         cin >> opcao6;
         if(opcao6 == 0){
            banco->exibir(0);
         }else if (opcao6 == 1){
            banco->exibir(1);
         }else{
            cout << "Opção inválida!" << endl;
         }
         
         
      }else if (opcao == 5){
         int opcao7;
         cout << "Deseja salvar Animais[0] ou Plantas[1]" << endl;
         cin >> opcao7;
         if(opcao7 == 0){
            banco->salvar(0);
         }else if (opcao7 == 1){
            banco->salvar(1);
         }else{
            cout << "Opção inválida!" << endl;
         }
      }else if(opcao == 6){
         int opcao8;
         cout << "Deseja criar relatório de extinção para Animais[0] ou Plantas[1]" << endl;
         cin >> opcao8;
         if(opcao8 == 0){
            banco->relatorio_extincao(0);
         }else if (opcao8 == 1){
            banco->relatorio_extincao(1);
         }else{
            cout << "Opção inválida!" << endl;
         }

      }else if(opcao == 7){
         int opcao9;
         string ambiente;
         cout << "Deseja criar relatório de ambiente para Animais[0] ou Plantas[1]" << endl;
         cin >> opcao9;
         cout << "Digite o ambiente:" << endl;
         cin >> ambiente;
         if(opcao9 == 0){
            banco->relatorio_ambiente(0, ambiente);
         }else if (opcao9 == 1){
            banco->relatorio_ambiente(1, ambiente);
         }else{
            cout << "Opção inválida!" << endl;
         }

      }else{
         cout << "Opção inválida!" << endl;
      }
      
      
   }




   return 0;
}
