#include <stdio.h>
#include <math.h>

/*
Funciones matemáticas:
----------------------
ceil(x) → Redondea al entero mayor más cercano
fabs(x) → Devuelve el valor absoluto de x
floor(x) → Redondea al entero menor más cercano
sqrt(x) → Saca la raíz cuadrada de x
fmod(x,y) → Calcula el resto de la división de x/y
pow(x,y) → Calcula x elevado a la potencia de y
----------------------
*/

void funcionCeil(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = ceil(x); // Redondea al siguiente numero entero 2.1 --> 3
    printf("%.2f\n", cambio);
}

void funcionFloor(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = floor(x); // Redondea al entero menor más cercano
    printf("%.2f\n", cambio);
}

void funcionFabs(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = fabs(x); // Devuelve el valor absoluto
    printf("%.2f\n", cambio);
}

void funcionSqrt(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = sqrt(x); // Saca la raíz cuadrada
    printf("%.2f\n", cambio);
}

void funcionFmod(){
    float x, y, cambio=0;

    printf("Escribe dos numero: ");
    scanf("%f %f", &x, &y);

    cambio = fmod(x,y); // Calcula el resto de la división de x/y
    printf("%.2f\n", cambio);
}

void funcionPow(){
    float x, y, cambio=0;

    printf("Escribe dos numero: ");
    scanf("%f %f", &x, &y);

    cambio = pow(x,y); // Calcula x elevado a la potencia de y
    printf("%.2f\n", cambio);
}

int main(){

    funcionPow();

    return 0;
}
