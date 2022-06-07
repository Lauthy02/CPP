#include <iostream>
#define Enter cout << " " << endl;
#define DeleteBuffer fflush(stdin);
using namespace std;

//Construya una clase llamada Rectángulo que tenga los atributos largo y ancho y los métodos perímetro y área.

class Rectangulo
{
    private: //Atributos
        string Nombre;
        int Largo;
        int Ancho;

    public: //Métodos
        Rectangulo(string,int,int); //Constructor
        int CacPer();
        int CalcArea();
        void Resultado();
};

//Constructor
Rectangulo::Rectangulo(string _Nombre, int _Largo, int _Ancho)
{
    Nombre = _Nombre;
    Largo = _Largo;
    Ancho = _Ancho;
}

//Métodos
int ResPer = 0;

int Rectangulo::CacPer()
{
    //La suma de sus lados
    ResPer = Largo*2 + Ancho*2;
}

int ResAre = 0;
int Rectangulo::CalcArea()
{
    //Ancho*Largo
    ResAre = Largo*Ancho;
}

void Rectangulo::Resultado()
{
    cout << "Mi perimetro es: "<< ResPer << " y mi area es: " << ResAre << endl;
    cout << "Soy un rectangulo y me llamo: "<< Nombre << endl;
    cout << " " << endl;
}

//Porgrama principal
int main()
{
    cout << "Hello world!" << endl;
    Enter;
    Rectangulo Rec1 = Rectangulo("Rec1",10,20);
    Rectangulo Rec2("Rec2",30,40);

    Rec1.CacPer();
    Rec1.CalcArea();
    Rec1.Resultado();

    Rec2.CacPer();
    Rec2.CalcArea();
    Rec2.Resultado();


    string UsNombre;
    int UsLargo, UsAncho = 0;

    cout << "Ingrese el nombre del rectancgulo 3: " << endl;
    cin >> UsNombre;
    DeleteBuffer
    cout << "Ingrese el largo: " << endl;
    cin >> UsLargo;
    DeleteBuffer
    cout << "Ingrese el ancho: " << endl;
    cin >> UsAncho;
    DeleteBuffer

    Rectangulo Rec3(UsNombre, UsLargo, UsAncho);

    Rec3.CacPer();
    Rec3.CalcArea();
    Rec3.Resultado();

    system("pause");
    return 0;
}
