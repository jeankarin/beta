#include <iostream>
#include <iomanip> // para que funcione double y sus 15 decimales de precisión ó setprecision, tengo que confirmar

using namespace std;

int main()
{
    short num = 32700;
    int num2 = 400000000;
    long long num3 = 4000000000000LL;
    float num4 = 3.141516;
    double num5 = 2.123456789;
    char letra = 'a';
    string frase = "Soy una frase";

    cout << setprecision(20); // Para forzar la precisión de double a 20
    cout << "El valor de letra es " << frase << "\n";
    cout << "El tamano de letra es " << sizeof(frase) << " bytes";
    
    return 0;
}