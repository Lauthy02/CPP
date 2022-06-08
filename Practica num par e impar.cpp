#include <iostream>
#define Enter cout << "" << endl;
#define DeleteBuffer fflush(stdin);

using namespace std;

int EsPar(int _num)
{
    if (_num % 2 == 0)
    {
        return	true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    Enter;

    int Numero = 0;
    cout << "Ingrese un numero" << endl;
    cin >> Numero;
    DeleteBuffer;

    if (EsPar(Numero) == 1)
    {
        Enter;
        cout << "El numero es PAR." << endl;
    }
    else
    {
        Enter;
        cout << "El numero es IMPAR" << endl;
    }
    return 0;
}
