#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <string>

#include <conio.h>
using namespace std;
int escolha;

FILE *lista;

typedef struct {
	string cep;
	string numero;
	string rua;
	string bairro;
	string cidade;
	string complemento;
}tEndereco;


typedef struct {
	string nome;
	tEndereco endereco;
	string tipoDoImovel="casa";
	string valor;
	string pavimentos;
	string numQuartos;
	string areaTerreno;
	string areaConstruida;
	string tipoDeNegociacao;
	string disp="disponivel";
	string atv= "Ativo";
}tCasa;


typedef struct {
	string nome;
	tEndereco endereco;
	string tipoDoImovel="apartamento";
	string valor;
	string andar;
	string numApt;
	string posicao;
	string numDeVagas;
	string numQuartos;
	string areaTerreno;
	string tipoDeNegociacao;
	string disp="disponivel";// sem gente dentro da casa
	string atv= "Ativo";
}tApartamento;


typedef struct {
	string nome;
	tEndereco endereco;
	string tipoDoImovel="terreno";
	string valor;
	string areaTerreno;
	string tipoDeNegociacao;
	string disp="disponivel";
	string atv= "Ativo";
}tTerreno;

tCasa casa[8]= {};
tApartamento apt[8]= {};
tTerreno terreno[8]= {};

void cadastrarImovel(void){
int i;
    while(1){
        cout << "Escolha o tipo de imovel a cadastrar\n"
             << "1- casa\n"
             << "2- apartamento\n"
             << "3- terreno"
             << endl;


         escolha=getch();

		system("cls");
            if(escolha==27){           //pressiona ESC para voltar ao menu
               break;
            }

        switch(escolha){
        case 49:
            for(i=0;i<8;i++){
                if(casa[i].disp=="disponivel"){
                    break;
                }
            }
            cin.ignore();
            cout<<"Nome do imovel: "<<endl;
            getline(cin,casa[i].nome);
            cout<<"Numero de pavimentos: "<<endl;
            getline(cin,casa[i].pavimentos);
            cout<<"Numero de quartos: "<<endl;
            getline(cin,casa[i].numQuartos);
            cout<<"Area do terreno "<<endl;
            getline(cin,casa[i].areaTerreno);
            cout<<"Area Construida "<<endl;
            getline(cin,casa[i].areaConstruida);
            cout<< "Tipo de negociação"<<endl;
            getline(cin,casa[i].tipoDeNegociacao);
            cout<<"Rua"<<endl;
            getline(cin,casa[i].endereco.rua);
            cout<<"Numero"<<endl;
            getline(cin,casa[i].endereco.numero);
            cout<<"Bairro"<<endl;
            getline(cin,casa[i].endereco.bairro);
            cout<<"Cidade"<<endl;
            getline(cin,casa[i].endereco.cidade);
            cout<<"Complemento"<<endl;
            getline(cin,casa[i].endereco.complemento);
            cout<<"CEP"<<endl;
            getline(cin,casa[i].endereco.cep);
            cout << "Valor do imovel"<< endl;
            getline(cin,casa[i].valor);

            casa[i].disp = "indisponivel";


            break;
        case 50:
               for(i=0;i<8;i++){
                if(apt[i].disp=="disponivel"){
                    break;
                }
            }
            cin.ignore();
            cout<<"Nome do imovel: "<<endl;
            getline(cin,apt[i].nome);
            cout<< "Numero do apartemento"<<endl;
            getline(cin,apt[i].numApt);
            cout<<"Numero de vagas na garagem: "<<endl;
            getline(cin,apt[i].numDeVagas);
            cout<<"Numero de quartos: "<<endl;
            getline(cin,apt[i].numQuartos);
            cout<< "Tipo de negociação"<<endl;
            getline(cin,apt[i].tipoDeNegociacao);
            cout<<"Area do terreno "<<endl;
            getline(cin,apt[i].areaTerreno);
            cout<<"numero do andar do apartamento"<<endl;
            getline(cin,apt[i].andar);
            cout <<"Posiçao do apartamento"<< endl;
            getline(cin,apt[i].posicao);
            cout<<"Rua"<<endl;
            getline(cin,apt[i].endereco.rua);
            cout<<"Numero"<<endl;
            getline(cin,apt[i].endereco.numero);
            cout<<"Bairro"<<endl;
            getline(cin,apt[i].endereco.bairro);
            cout<<"Cidade"<<endl;
            getline(cin,apt[i].endereco.cidade);
            cout<<"Complemento"<<endl;
            getline(cin,apt[i].endereco.complemento);
            cout<<"CEP"<<endl;
            getline(cin,apt[i].endereco.cep);
            cout << "Valor do imovel"<< endl;
            getline(cin,apt[i].valor);

            break;
        case 51:
                   for(i=0;i<8;i++){
                if(terreno[i].disp=="disponivel"){
                    break;
                }
            }
             cin.ignore();
            cout<<"Nome do imovel: "<<endl;
            getline(cin,terreno[i].nome);
            cout<< "Tipo de negociação"<<endl;
            getline(cin,terreno[i].tipoDeNegociacao);
            cout<<"Area do terreno "<<endl;
            getline(cin,terreno[i].areaTerreno);
            cout<<"Rua"<<endl;
            getline(cin,terreno[i].endereco.rua);
            cout<<"Numero"<<endl;
            getline(cin,terreno[i].endereco.numero);
            cout<<"Bairro"<<endl;
            getline(cin,terreno[i].endereco.bairro);
            cout<<"Cidade"<<endl;
            getline(cin,terreno[i].endereco.cidade);
            cout<<"Complemento"<<endl;
            getline(cin,terreno[i].endereco.complemento);
            cout<<"CEP"<<endl;
            getline(cin,terreno[i].endereco.cep);
            cout << "Valor do imovel"<< endl;
            getline(cin,terreno[i].valor);
            break;
        default:
            cout<<"Comando nao disponivel"<<endl;
            system("pause");
            system("cls");
            continue;



        }
break;
    }

}

void exibeImoveis(void){//imoveis disponiveis
	while(1){

	  int i;
 system("cls");
	    cout <<"Escolha o tipo de imovel: \n"
	        <<"1 - casa \n"
	        <<"2 - apartamento\n"
	        <<"3 - terreno"<<endl;///

        cout << "Aperte ESC para voltar"<<endl;
	 escolha = getch();
	    if(escolha==27){           //pressiona ESC para voltar ao menu
	       break;
	    }
	        switch(escolha){
	        case 49:
	            system("cls");
	            for(i=0;i<8;i++){
	              cout << i+1 << "-" << casa[i].nome <<endl;
	            }
	            cin.ignore();

	            cin>> i;

	            i = i-1;

	            system("cls");

                cout<<"Nome do imovel: "<< casa[i].nome<<endl;

                cout<<"Numero de pavimentos: "<< casa[i].pavimentos <<endl;

                cout<<"Numero de quartos: "<< casa[i].numQuartos <<endl;

                cout<<"Area do terreno: "<< casa[i].areaTerreno <<endl;

                cout<<"Area Construida: "<< casa[i].areaConstruida <<endl;

                cout<< "Tipo de negociaçao: "<< casa[i].tipoDeNegociacao <<endl;

                cout<<"Rua: "<< casa[i].endereco.rua <<endl;

                cout<<"Numero: "<< casa[i].endereco.numero <<endl;

                cout<<"Bairro: "<< casa[i].endereco.bairro <<endl;

                cout<<"Cidade: "<< casa[i].endereco.cidade <<endl;

                cout<<"Complemento: "<< casa[i].endereco.complemento <<endl;

                cout<<"CEP: "<< casa[i].endereco.cep <<endl;

                cout << "Valor do imovel: "<< casa[i].valor << endl;

                system("PAUSE");



	            break;


	       case 50:
         	system("cls");
         	for(i=0;i<8;i++){
           	cout << apt[i].nome <<endl;
         	}
           	cin.ignore();
            	cin>> i;
            	i = i-1;
            	system("cls");

    	 cout<<"Nome do imovel: "<<apt[i].nome<<endl;

        	cout<< "Numero do apartemento"<<apt[i].numApt<<endl;

        	cout<<"Numero de vagas na garagem: "<<apt[i].numDeVagas<<endl;

        	cout<<"Numero de quartos: "<<apt[i].numQuartos<<endl;

        	cout<< "Tipo de negociação"<<apt[i].tipoDeNegociacao<<endl;

        	cout<<"Area do terreno "<<apt[i].areaTerreno<<endl;

        	cout<<"numero do andar do apartamento"<<apt[i].andar<<endl;

        	cout <<"Posiçao do apartamento"<<apt[i].posicao<< endl;

        	cout<<"Rua"<<apt[i].endereco.rua<<endl;
        	cout<<"Numero"<<apt[i].endereco.numero<<endl;

        	cout<<"Bairro"<<apt[i].endereco.bairro<<endl;

        	cout<<"Cidade"<<apt[i].endereco.cidade<<endl;

        	cout<<"Complemento"<<apt[i].endereco.complemento<<endl;

        	cout<<"CEP"<<apt[i].endereco.cep<<endl;

        	cout << "Valor do imovel"<<apt[i].valor<< endl;

         	break;



	        case 51:
	            system("cls");
	            for(i=0;i<8;i++){
	              cout << i+1 << "-" << terreno[i].nome <<endl;
	            }
	            cin.ignore();

	            cin>> i;

	            i = i-1;

	            system("cls");

                cout<<"Nome do imovel: "<< terreno[i].nome<<endl;

                cout<<"Area do terreno: "<< terreno[i].areaTerreno <<endl;

                cout<< "Tipo de negociaçao: "<< terreno[i].tipoDeNegociacao <<endl;

                cout<<"Rua: "<< terreno[i].endereco.rua <<endl;

                cout<<"Numero: "<< terreno[i].endereco.numero <<endl;

                cout<<"Bairro: "<< terreno[i].endereco.bairro <<endl;

                cout<<"Cidade: "<< terreno[i].endereco.cidade <<endl;

                cout<<"Complemento: "<< terreno[i].endereco.complemento <<endl;

                cout<<"CEP: "<< terreno[i].endereco.cep <<endl;

                cout << "Valor do imovel: "<< terreno[i].valor << endl;

                system("PAUSE");



	            break;

        default:
            cout<<"Comando nao disponivel"<<endl;
            system("pause");
            system("cls");
            continue;


	        }
	}
}
void buscarImovel(void){
    while(1){
    int i;
    char busca[30];
        int j=0;
        cout << "Escolha o tipo de busca\n"
        << "1- Nome\n"
        << "2- Por Valor\n"
        << "3- Imoveis por venda\n"
        << "4- Imoveis por aluguel"<< endl;
        escolha = getch();

            if(escolha==27){           //pressiona ESC para voltar ao menu
               break;
            }
        switch(escolha){

            case 49://por titulo
        system("cls");
        cout<<"Digite o nome que procura"<<endl;
        cin.ignore();

        scanf("%s", &busca);

        for(i=0;i<=8;i++){
            if(busca==casa[i].nome){
                system("cls");
                cout<<"\nBusca encontrada\n"<<endl;
                cout<<"\t\t"<<casa[i].nome<< "\n" <<endl;
                cout<<"\t"<<casa[i].pavimentos<<endl;
                cout<<"\t"<<casa[i].numQuartos<<endl;
                cout<<"\t"<<casa[i].areaTerreno<<endl;
                cout<<"\t"<<casa[i].areaConstruida<<endl;
                cout<<"\t"<<casa[i].tipoDeNegociacao<<endl;
                cout<<"\t"<<casa[i].endereco.rua<<endl;
                cout<<"\t"<<casa[i].endereco.numero<<endl;
                cout<<"\t"<<casa[i].endereco.bairro<<endl;
                cout<<"\t"<<casa[i].endereco.cidade<<endl;
                cout<<"\t"<<casa[i].endereco.complemento<<endl;
                cout<<"\t"<<casa[i].endereco.cep<<endl;
                cout<<"\t"<<casa[i].valor<<endl;
                cout<<" "<<endl;

                system("pause");

            }else{
                j++;
            }

            if(j>8){
            cout<<"\nBusca nao encontrada\n"<<endl;
            system("pause");
            }

        }


            system("cls");

            break;
            case 50://por bairro
                system("cls");

            break;
            case 51://por valor (comparar valores desejados pelo usuario)
                system("cls");
            break;
            case 52://retorna todos os imoveis para vender por tipo (ca,apto,ter)
                system("cls");

            break;
            case 53://retorna todos os imoveis para alugar por tipo (ca,apto,ter)
                system("cls");

            break;
            default:
            cout<<"Comando nao disponivel"<<endl;
            system("pause");
            system("cls");
            continue;



          }
    }
}
void removerImovel(void){
    while(1){
        int i, del=0;

        cout << "Escolha o que deseja remover\n"
        << "1- casa\n"
        << "2- apartamento\n"
        << "3- terreno\n"<< endl;


         escolha = getch();

            if(escolha==27){           //pressiona ESC para voltar ao menu
               break;
            }

        switch(escolha){

        case 49://casa

            system("cls");

            for(i=0; i<8; i++){
                cout<< "[" << i+1 << "]" << " - " <<casa[i].nome <<endl;
            }

            cout<<"\nEscolha a casa desejada para que seja deletada:"<<endl;

            cin.ignore();

            cin>> del;

            del = del - 1;

            casa[del].nome = '\0';

            casa[del].pavimentos = '\0';

            casa[del].numQuartos = '\0';

            casa[del].areaTerreno = '\0';

            casa[del].areaConstruida = '\0';

            casa[del].tipoDeNegociacao = '\0';

            casa[del].endereco.rua = '\0';

            casa[del].endereco.numero = '\0';

            casa[del].endereco.bairro = '\0';

            casa[del].endereco.cidade = '\0';

            casa[del].endereco.complemento = '\0';

            casa[del].endereco.cep = '\0';

            casa[del].valor = '\0';

            system("cls");

            for(i=0; i<8; i++){
                cout<< "[" << i+1 << "]" << " - " <<casa[i].nome <<endl;
            }


            system("pause");

            break;

        case 50://apt
            system("cls");

            for(i=0; i<8; i++){
                cout<< "[" << i+1 << "]" << " - " <<casa[i].nome <<endl;
            }

            cout<<"\nEscolha o apartamento desejado para que seja deletado:"<<endl;

            cin.ignore();

            cin>> del;

            del = del - 1;

            apt[del].nome = '\0';

            apt[del].andar = '\0';

            apt[del].numApt = '\0';

            apt[del].posicao= '\0';

            apt[del].numQuartos = '\0';

            apt[del].numDeVagas = '\0';

            apt[del].areaTerreno = '\0';

            apt[del].tipoDeNegociacao = '\0';

            apt[del].endereco.rua = '\0';

            apt[del].endereco.numero = '\0';

            apt[del].endereco.bairro = '\0';

            apt[del].endereco.cidade = '\0';

            apt[del].endereco.complemento = '\0';

            apt[del].endereco.cep = '\0';

            apt[del].valor = '\0';

            system("cls");

            for(i=0; i<8; i++){
                cout<< "[" << i+1 << "]" << " - " <<casa[i].nome <<endl;
            }


            system("pause");

            break;

        case 51://terreno
            system("cls");

            for(i=0; i<8; i++){
                cout<< "[" << i+1 << "]" << " - " <<casa[i].nome <<endl;
            }

            cout<<"\nEscolha o terreno desejado para que seja deletado:"<<endl;

            cin.ignore();

            cin>> del;

            del = del - 1;

            terreno[del].nome = '\0';

            terreno[del].areaTerreno = '\0';

            terreno[del].tipoDeNegociacao = '\0';

            terreno[del].endereco.rua = '\0';

            terreno[del].endereco.numero = '\0';

            terreno[del].endereco.bairro = '\0';

            terreno[del].endereco.cidade = '\0';

            terreno[del].endereco.complemento = '\0';

            terreno[del].endereco.cep = '\0';

            terreno[del].valor = '\0';

            system("cls");

            for(i=0; i<8; i++){
                cout<< "[" << i+1 << "]" << " - " <<casa[i].nome <<endl;
            }


            system("pause");


            break;



        }





    }
}
void editarImovel(void){
    while(1){
         escolha = getch();

            if(escolha==27){           //pressiona ESC para voltar ao menu
               break;
            }
    }
}
void salvarImovel (void){//em outro arquivo
   while(1){
         escolha = getch();

            if(escolha==27){           //pressiona ESC para voltar ao menu
               break;
            }
   }
}
void lerLista(void){//no outro arquivo
   while(1){
         escolha = getch();

            if(escolha==27){           //pressiona ESC para voltar ao menu
               break;
            }
    FILE* arq = fopen("dados.txt", "r");
    if (arq > 0) {
        fread(lista, 100, sizeof(tCasa), arq); // fread(void *ptr - aonde é armazenado, size_t tamanho - de cada elemento do array, size_t nItens, FILE *stream - aonde será lido)
        fclose(arq);
    }
    else
        cout << "Erro ao abrir o arquivo para leitura\n";
        break;

   }
}

void menu(){
	while(1){
	system("cls");
	    cout << "\tEscolha o que deseja acessar\n"
	         << "1- Cadastrar imovel\n"
	         << "2- Imoveis disponiveis\n"
	         << "3- Buscar imovel\n"
	         << "4- Remover imovel\n"
	         << "5- Editar imovel\n"
	         << "6- Salvar lista\n"
	         << "7- Ler lista\n"
	         << endl;

	     escolha = getch();



	     switch(escolha){
	        case 49:
	        system("cls");
	        cadastrarImovel();
	        break;
	        case 50:
	            system("cls");
	            exibeImoveis();
	        break;
	        case 51:
	            system("cls");
	            buscarImovel();
	        break;
	        case 52:
	            system("cls");
	            removerImovel();
	        break;
	        case 53:
	            system("cls");
                editarImovel();
	        break;
	        case 54:
	            system("cls");
                salvarImovel();
	        break;
	        case 55:
	            system("cls");
                lerLista();
	        break;
        default:
            cout<<"Comando nao disponivel"<<endl;
            system("pause");
            system("cls");
            continue;


	     }
	}
}
int main (void)
{
system("color 05");
 menu();

	return 0;
}












