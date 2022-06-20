/*
Van a ver que en algunos programas solo tengo declarado el #include "Cabeceras.h".
Esto es para hcer más cómoda la inclusión de cabeceras sin tener que copiar y pegar cada vez que creo un nuevo archivo .cpp. 
Entonces solo incluyo la cabecera que tiene todas las cabeceras.
En el archivo Cabeceras.h tengo todas las cabeceras declaradas que conozco, el using namespace std; y los define que uso normalmente.
*/

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

using namespace std;

#define Enter cout<<""<<endl;
#define DeleteBuffer fflush(stdin);
#define Pausa system("pause");
#define LimpiarConsola system("cls");
#define SetIdioma setlocale(LC_ALL, "spanish");
