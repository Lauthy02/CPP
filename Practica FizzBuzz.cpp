#include <iostream>
#include <locale.h>
#include <stdlib.h>
#define Enter cout<<""<<endl;
#define DeleteBuffer fflush(stdin);
#define IdiomaYColor setlocale(LC_ALL,"spanish"); system("color F0");

/*
Imprimir una lista de num de 1 a x pero cuando 1 numero de esa lista sea multiplo de 3 se imprima la palabra Fizz, cuando sea un múltiplo
de 5 imprimamos la plabra Buzz y cuando es múltiplo de 3 y de 5 imprimamos la palabra FizzBuzz
*/

using namespace std;

string EsFiZZBuzz(int a)
{
    string _FizzBuzz = "FizzBuzz";
    string _Fizz = "Fizz";
    string _Buzz = "Buzz";
    string _NoEs = " ";
    if((a % 3 == 0) && (a % 5 == 0))
    {
        return _FizzBuzz;
    }
    if(a % 3 == 0)
    {
        return _Fizz;
    }
    if(a % 5 == 0)
    {
        return _Buzz;
    }
    else
    {
        return _NoEs;
    }
}

int main()
{
    IdiomaYColor;
    cout << "Hello world!" << endl;
    Enter;
    DeleteBuffer;

    int Num = 0;
    cout << "Indique hasta qué número desea imprimir: " << endl;
    cin >> Num;
    Enter;
    DeleteBuffer;

    for(int x = 1; x <= Num; x++)
    {
        cout << "El numero es: " << x << " ----- " << EsFiZZBuzz(x) << endl;
    }

    return 0;
}
