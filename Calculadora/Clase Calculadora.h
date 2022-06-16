#include "Cabeceras.h"

class Calculadora
{
    private:  //Atributos
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
        int SerieFibonacciRec(int);
        int Factorial(int);
};

Calculadora::Calculadora(int Numero_1, int Numero_2, int Res) //Constructor
{
    Num_1 = Numero_1;
    Num_2 = Numero_2;
    Res = Resultado;
}

int Calculadora::Sumar()
{
    Resultado = Num_1 + Num_2;
    cout << "La suma es: " << Resultado << endl;
}

int Calculadora::Restar()
{
    // arreglarlo, no da valores con coma. 
    Resultado = Num_1 - Num_2;
    cout << "La resta es: " << Resultado << endl;
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
        cout << "La division es: " << Resultado << endl;
    }
}

int Calculadora::Multiplicar()
{
    Resultado = Num_1 * Num_2;
    cout << "La multiplicacion es: " << Resultado << endl;
}

int Calculadora::ElevarNum()
{
    Resultado = pow(Num_1,Num_2);
    cout << "La elevación es" << Resultado << endl; 
}

int Calculadora::SerieFibonacciFor()
{
    int Aux1 = 1, Aux2 = 0, Aux3 = 1;
    for (int i = 0; i < Num_1; i++)
    {
        Aux1 = Aux2 + Aux3;
        cout << Aux1 << " ";
        Aux2 = Aux3;
        Aux3 = Aux1;
    }
}

int Calculadora::SerieFibonacciRec(int PosALlegar)
{
    PosALlegar = Num_1;

    if (PosALlegar == 1 || PosALlegar == 2)
    {
        return 1;
    }
    return SerieFibonacciRec(PosALlegar - 1) + SerieFibonacciRec(PosALlegar - 2);
}

int Calculadora::Factorial(int ValorFact)
{
    ValorFact = Num_1;

    if (ValorFact == 0)
    {
        ValorFact = 1;
    }
    else
    {
        ValorFact = (ValorFact * Factorial(ValorFact - 1));
    }
    return ValorFact;
    
    cout << "El factorial de " << Num_1 << " es " << ValorFact << endl;
}