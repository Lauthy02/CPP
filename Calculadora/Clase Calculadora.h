#include "Cabeceras.h"

class Calculadora
{
    private: //Atributos
        int Num_1;
        int Num_2;
        int Resultado;

    public: //Funciones
        Calculadora(int, int, int); //Constructor
        int Sumar();
        int Restar();
        int Dividir();
        int Multiplicar();
        int ElevarNum();
        int SerieFibonacciFor();
        int Factorial();
};

Calculadora::Calculadora(int _Numero_1, int _Numero_2, int _Res) //Constructor
{
    Num_1 = _Numero_1;
    Num_2 = _Numero_2;
    Resultado = _Res;
}

int Calculadora::Sumar()
{
    Resultado = Num_1 + Num_2;
    cout << "La suma entre " << Num_1 << " y " << Num_2 << " es: " << Resultado << endl;
}

int Calculadora::Restar()
{
    // arreglarlo, no da valores con coma. 
    Resultado = Num_1 - Num_2;
    cout << "La resta entre " << Num_1 << " y " << Num_2 << " es: " << Resultado << endl;
}

int Calculadora::Dividir()
{
    if(Num_2 == 0)
    {
        Enter;
        cout << "No se pueden dividiir numeros por 0." << endl;
    }
    else
    {
        Resultado = Num_1 / Num_2;
        cout << "La division entre " << Num_1 << " y " << Num_2 << " es: " << Resultado << endl;
    }
}

int Calculadora::Multiplicar()
{
    Resultado = Num_1 * Num_2;
    cout << "La multiplicacion entre " << Num_1 << " y " << Num_2 << " es: " << Resultado << endl;
}

int Calculadora::ElevarNum()
{
    Resultado = (pow(Num_1,Num_2)); //no da bien
    cout << Num_1 << "^" << Num_2 << " es: " << Resultado << endl; 
}

int Calculadora::SerieFibonacciFor()
{
    cout << "La serie Fibonacci es: ";
    int Aux1 = 1, Aux2 = 0, Aux3 = 1;
    for (int i = 0; i < Num_1; i++)
    {
        Aux1 = Aux2 + Aux3;
        cout << Aux1 << " ";
        Aux2 = Aux3;
        Aux3 = Aux1;
    }
    Enter;
}

int Calculadora::Factorial()
{
    Resultado = 1;
    for (int i = 1; i <= Num_1; i++)
    {
        Resultado = Resultado * i;
    }
    cout << "El factorial de " << Num_1 << " es: " << Resultado << endl;
}