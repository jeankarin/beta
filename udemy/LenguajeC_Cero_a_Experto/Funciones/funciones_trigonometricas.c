#include <stdio.h>
#include <math.h>

/*
Funciones trigonometricas
-------------------------
acos(x) → Calcula el arco coseno de x
asin(x) → Calcula el arco seno de x
atan(x) → Calcula el arco tangente de x
cos(x) → Calcula el coseno de x
sin(x) → Calcula el seno de x
tan(x) → Calcula la tangente de x
-------------------------
*/

void funcionAcos(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = acos(x); // Calcula el arco coseno de x
    printf("El resultado es %.2f\n", cambio);
}

void funcionAsin(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = asin(x); // Calcula el arco seno de x
    printf("El resultado es %.2f\n", cambio);
}

void funcionAtan(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = atan(x); // Calcula el arco tangente de x
    printf("El resultado es %.2f\n", cambio);
}

void funcionCos(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = cos(x); // Calcula el coseno de x
    printf("El resultado es %.2f\n", cambio);
}

void funcionSin(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = sin(x); // Calcula el seno de x
    printf("El resultado es %.2f\n", cambio);
}

void funcionTan(){
    float x, cambio=0;

    printf("Escribe un numero: ");
    scanf("%f", &x);

    cambio = tan(x); // Calcula la tangente de x
    printf("El resultado es %.2f\n", cambio);
}

int main(){

    // Procesamos los datos y los mostramos por pantalla
    funcionTan();

    return 0;
}
