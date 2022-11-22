// ************************************************************
//   Esse programa salva e lê textos.
//   Amai_Mask_2022
// ************************************************************

#include <iostream>
#include <string>

using namespace std;

int salvar()
{
    string name;
    cout << "Digite abaixo o trecho que deseja salvar:\n";
    cin >> ws;
    getline( cin, name );
    cout << name << endl;

}
int ler(){}

int main()
{
    while(1)
    {
        cout << "Bem vindo ao Projeto A!" << endl
        << "Você deseja (1) salvar um trecho, (2) ler um trecho salvo ou (0) sair"
        " do programa?" << endl;

        int escolhaMenu;
        cin >> escolhaMenu;

        switch( escolhaMenu )
        {
            case 1:
                salvar();
                break;
            case 2:
                ler();
                break;
            case 0:
                cout << "Até a próxima!" << endl;
                return 0;
            default:
                cout << "Você escolheu uma opção invalida, tente novamente." << endl;
        }
    }                                                    

}