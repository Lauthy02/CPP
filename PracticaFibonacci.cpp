#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define Enter cout<<""<<endl;
#define DeleteBuffer fflush(stdin);
using namespace std;

int FibonacciRecursiva(int Aux)
{
    if (Aux == 1 || Aux == 2)
    {
        return 1;
    }
    return FibonacciRecursiva(Aux - 1) + FibonacciRecursiva(Aux - 2);
}

int FibonacciFor(int NumALleg)
{
    int Aux1 = 1, Aux2 = 0, Aux3 = 1;
    for (int i = 0; i < NumALleg; i++)
    {
        Aux1 = Aux2 + Aux3;
        cout << Aux1 << " ";
        Aux2 = Aux3;
        Aux3 = Aux1;
    }
}

int main()
{
    int Opcion = 0;
    int NumeroALlegar = 0;
    cout << "----- FIBONACCI -----" << endl;
    Enter;
    cout << "1- Fibonacci con recursividad." << endl;
    cout << "2- Fibonacci con for." << endl;
    Enter;
    cout << "Seleccione 1 de las opciones" << endl;
    cin >> Opcion;
    DeleteBuffer;
    switch (Opcion)
    {
        case 1:
        {
            Enter;
            cout << "-- Selecciono Fibonacci con recursividad --" << endl;
            cout << "Hasta que posicion de la secuencia desea llegar?: " << endl;
            cin >> NumeroALlegar;
            DeleteBuffer;
            Enter;
            cout << "El valor fibonacci en la posicion " << NumeroALlegar << " es " << FibonacciRecursiva(NumeroALlegar) << endl;
            break;
        }
        case 2:
        {
            Enter;
            cout << "-- Selecciono Fibonacci con for --" << endl;
            cout << "Hasta que numero desea llegar?: " << endl;
            cin >> NumeroALlegar;
            DeleteBuffer;
            FibonacciFor(NumeroALlegar);
            break;
        }
        default:
        {
            Enter;
            cout << "-- No ingreso un valor valido --" << endl;
            break;
        }
    }
    return 0;
}