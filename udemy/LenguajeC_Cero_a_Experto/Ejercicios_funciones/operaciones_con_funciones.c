#include <stdio.h>

/*
// Sumar, restar, multiplicar y Dividir con funciones
*/

// Declaramos las funciones
void sumar(){
    int a,b;
    printf("Que numeros deseas sumar: ");
    scanf("%d %d", &a, &b);
    printf("La suma de %d y %d es %d", a,b,a+b);
}

void restar(){
    int a,b;
    printf("Que numeros deseas restar: ");
    scanf("%d %d", &a, &b);
    printf("La resta de %d y %d es %d", a,b,a-b);
}

void multiplicar(){
    int a,b;
    printf("Que numeros deseas multiplicar: ");
    scanf("%d %d", &a, &b);
    printf("La multiplicacion de %d y %d es %d", a,b,a*b);
}
void dividir(){
    int a,b;
    printf("Que numeros deseas dividir: ");
    scanf("%d %d", &a, &b);
    printf("La division de %d y %d es %d", a,b,a/b);
}

int main(){

    // Variables
    int opc;
    do
    {
        printf("\n1- Sumar\n2- Restar\n3- Multiplicar\n4- Dividir\n5- Salir\n");
        printf("Opcion: ");
        scanf("%d", &opc);

        switch(opc)
        {
            case 1: sumar(); break;
            case 2: restar(); break;
            case 3: multiplicar(); break;
            case 4: dividir(); break;
            case 5: continue; break;
            default: printf("Opcion incorrecta\n"); break;
        }

    } while (opc != 5);
    

    // Solicitamos la información al usuario

    // Procesamos los datos y los mostramos por pantalla

    return 0;
}
