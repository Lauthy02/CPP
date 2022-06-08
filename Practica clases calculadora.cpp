#include <iostream>
#define Enter cout << "" << endl;
#define DeleteBuffer fflush(stdin);
using namespace std;

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

int main()
{
    int N1, N2 = 0;
    cout << "Hello world!" << endl;
    Enter;
    DeleteBuffer;

    cout << "Ingrese un numero: " << endl;
    cin >> N1;
    Enter;
    DeleteBuffer;

    cout << "Ingrese otro numero: " << endl;
    cin >> N2;
    Enter;
    DeleteBuffer;

    Calculadora Calc_1 = Calculadora(N1,N2,0);
    Calc_1.Sumar();
    Calc_1.Restar();
    Calc_1.Dividir();
    Calc_1.Multiplicar();

    return 0;
}
