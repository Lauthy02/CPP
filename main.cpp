#include <iostream>
#include <locale.h>
#include <stdlib.h>
#define Enter cout<<""<<endl;
#define DeleteBuffer fflush(stdin);
#define IdiomaYColor setlocale(LC_ALL,"spanish"); system("color F0");
#define Pausa system("pause");
#define LimpiarConsola system("cls");
using namespace std;
bool Salir;

bool SiQuiereSalir()
{
    Salir = true;
    char Sal;
    cout << "¿Desea salir? (Y/n): " << endl;
    cin >> Sal;
    if(Sal == 'Y')
    {
        return Salir = true;
    }
    if(Sal == 'n')
    {
        return Salir = false;
    }
    else
    {
        cout << "No seleccionó ninguna opción posible, vuelva a elegir" << endl;
        DeleteBuffer;
        Pausa;
        DeleteBuffer;
        return Salir = false;
    }

}

int main()
{
    IdiomaYColor;
    do
    {
        int Operacion, Num_1, Num_2, Res = 0;
        LimpiarConsola;
        cout << "Hello world!" << endl;
        cout << "La opción 1 es sumar" << endl;
        cout << "La opción 2 es restar" << endl;
        cout << "La opción 3 es dividir" << endl;
        cout << "La opción 4 es multiplicar" << endl;
        Enter;
        cout << "Seleccione una de estas opciones: " << endl;
        cin >> Operacion;
        DeleteBuffer;
        Enter;
        cout << "Indique el número 1: " << endl;
        cin >> Num_1;
        DeleteBuffer;
        cout << "Indique el número 2: " << endl;
        cin >> Num_2;
        DeleteBuffer;

        switch(Operacion)
        {
            case 1:
            {
                cout << "Eligió SUMAR" << endl;
                Res = Num_1 + Num_2;
                cout << "La SUMA entre "<< Num_1 << " y " << Num_2 << " es: "<< Res << endl;
                SiQuiereSalir();
                break;
            }
            case 2:
            {
                cout << "Eligió RESTAR" << endl;
                Res = Num_1 - Num_2;
                cout << "La RESTA entre "<< Num_1 << " y " << Num_2 << " es: "<< Res << endl;
                SiQuiereSalir();
                break;
            }
            case 3:
            {
                cout << "Eligió DIVIDIR" << endl;
                if(Num_2 == 0)
                {
                    cout << "No se puede dividir por 0." << endl;
                    SiQuiereSalir();
                    break;
                }
                else
                {
                    Res = Num_1 / Num_2;
                    cout << "La DIVISIÓN entre "<< Num_1 << " y " << Num_2 << " es: "<< Res << endl;
                    SiQuiereSalir();
                    break;
                }
            }
            case 4:
            {
                cout << "Eligió MULTIPLICAR" << endl;
                Res = Num_1 * Num_2;
                cout << "La MULTIPLICACIÓN entre "<< Num_1 << " y " << Num_2 << " es: "<< Res << endl;
                SiQuiereSalir();
                break;
            }
            default:
            {
                cout << "No seleccionó una opción posible." << endl;
                SiQuiereSalir();
                break;
            }
        }
    }while(Salir == false);
    Pausa;
    return 0;
}
