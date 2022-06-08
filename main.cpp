#include <iostream>
#define DeleteBuffer fflush(stdin);
#define Enter cout << "" << endl;
using namespace std;

int EsPrimo(int _num)
{
    for(int a = 2; a < _num; a++)
    {
        if(_num % a == 0)
        {
            return false; //No es primo
        }
    }
    return true; //Es primo
}


int main()
{
    int Numero = 0;
    cout << "Hello world!" << endl;
    Enter;
    cout << "Escriba un numero" << endl;
    cin >> Numero;
    DeleteBuffer;
    if(EsPrimo(Numero) == 1)
    {
        cout << "El numero SI es primo " << endl;
    }
    else
    {
        cout << "El numero NO es primo " << endl;
    }

    return 0;
}


