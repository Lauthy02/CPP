#include "Cabeceras.h"
#include "Clase Calculadora.h"

int N1, N2;
bool Volver = false;

//---- FUNCIONES
void IndiqueNumero()
{
    cout << "Indique el primer numero: ";
    cin >> N1;
    DeleteBuffer;
    cout << "Indique el segundo numero: ";
    cin >> N2;
    DeleteBuffer;
}

void SiDeseaSalir()
{
    char salir;
    cout << "Desea salir? (S/N)" << endl;
    cin >> salir;
    if (salir == 'S')
    {
        Volver = false;
    }
    else 
    {
        Volver = true;
    }
}
//-------------------

//---- PROGRAMA PRINCIPAL
int main()
{
    do
    {
        int Opcion = 0;
        Volver = false;

        LimpiarConsola;
        cout <<"----- Bienvenidos a la calculadora. Version 03.01 -----" <<endl;
        Enter;
        cout << "---- Seleccione una opcion ----" << endl;
        cout << "1 ---> Sumar" << endl;
        cout << "2 ---> Restar" << endl;
        cout << "3 ---> Dividir" << endl;
        cout << "4 ---> Multiplicar" << endl;
        cout << "5 ---> Elevar un numero" << endl;
        cout << "6 ---> Secuencia Fibonacci" << endl;
        cout << "7 ---> Factorial de un numero" << endl;
        Enter;
        cout << "Opcion a seleccionar: ";
        cin >> Opcion;
        DeleteBuffer;

        switch (Opcion)
        {
            case 1:
            {
                LimpiarConsola;
                cout << "-- Selecciono SUMAR --" << endl;
                IndiqueNumero();
                Calculadora Calcu_1 = Calculadora(N1,N2,0);
                Calcu_1.Sumar();
                SiDeseaSalir();
                break;
            }
            case 2:
            {
                LimpiarConsola;
                cout << "-- Selecciono RESTAR --" << endl;
                IndiqueNumero();
                Calculadora Calcu_1 = Calculadora(N1,N2,0);
                Calcu_1.Restar();
                SiDeseaSalir();
                break;
            }
            case 3:
            {
                LimpiarConsola;
                cout << "-- Selecciono DIVIDIR --" << endl;
                IndiqueNumero();
                Calculadora Calcu_1 = Calculadora(N1,N2,0);
                Calcu_1.Dividir();
                SiDeseaSalir();
                break;
            }
            case 4:
            {
                LimpiarConsola;
                cout << "-- Selecciono MULTIPLICAR --" << endl;
                IndiqueNumero();
                Calculadora Calcu_1 = Calculadora(N1,N2,0);
                Calcu_1.Multiplicar();
                SiDeseaSalir();
                break;
            }
            case 5:
            {
                LimpiarConsola;
                cout << "-- Selecciono ELEVAR UN NUMERO --" << endl;
                cout << "Indique el numero a elevar ";
                cin >> N1;
                DeleteBuffer;
                cout << "Indique la potencia ";
                cin >> N2;
                DeleteBuffer;
                Calculadora Calcu_1 = Calculadora(N1,N2,0);
                Calcu_1.ElevarNum();
                SiDeseaSalir();
                break;
            }
            case 6:
            {
                LimpiarConsola;
                cout << "-- Selecciono SECUENCIA FIBONACCI --" << endl;
                cout << "Indique a que posicion de la secuencia desea llegar: ";
                cin >> N1;
                DeleteBuffer;
                Calculadora Calcu_1 = Calculadora(N1,N2,0);
                Calcu_1.SerieFibonacciFor();
                SiDeseaSalir();
                break;
            }
            case 7:
            {
                LimpiarConsola;
                cout << "-- Selecciono FACTORIAL DE UN NUMERO --" << endl;
                cout << "Indique sobre que numero desea hacer el factorial: ";
                cin >> N1;
                DeleteBuffer;
                Calculadora Calcu_1 = Calculadora(N1,N2,0);
                Calcu_1.Factorial();
                SiDeseaSalir();
                break;
            }
            default:
            {
                Enter;
                cout << "No selecciono ninguna opcion posible" << endl;
                cout << "Intente nuevamente, gracias" << endl;
                Volver = true;
                Enter;
                Pausa;
                DeleteBuffer;
                break;
            }
        }
    } while (Volver == true);
    return 0;
}
