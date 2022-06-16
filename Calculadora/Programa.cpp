#include "Cabeceras.h"
#include "Clase Calculadora.h"

int main()
{
    int N1 = 40, N2 = 10, Opcion = 0;
    cout <<"----- Bienvenidos a la calculadora. Versión 00.00.01 -----" <<endl;
    Enter;

    Calculadora Calcu_1 = Calculadora(N1,N2,0);
    Calcu_1.Sumar();
    Calcu_1.Restar();
    Calcu_1.Dividir();
    Calcu_1.Multiplicar();
    Calcu_1.SerieFibonacciFor();
    //Se rompe al acceder a la recursiva
    Calcu_1.SerieFibonacciRec(N1);
    Calcu_1.Factorial(N1);

    return 0;
}
