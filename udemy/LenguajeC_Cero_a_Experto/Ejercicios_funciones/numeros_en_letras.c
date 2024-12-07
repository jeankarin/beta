#include <stdio.h>

/*
Hacer un programa que pida por pantalla un numero del 1 al 10
y mediante un procedimiento muestre por pantalla el numero escrito
en letras
*/

void comprobar(int numero){
    switch (numero)
    {
    case 1: printf("uno\n");break;
    case 2: printf("dos\n");break;
    case 3: printf("tres\n");break;
    case 4: printf("cuatro\n");break;
    case 5: printf("cinco\n");break;
    case 6: printf("seis\n");break;
    case 7: printf("siete\n");break;
    case 8: printf("ocho\n");break;
    case 9: printf("nueve\n");break;
    case 10: printf("diez\n");break;
    default:
        break;
    }
}

int main(){

    // Variables
    int numero;

    // Solicitamos la información al usuario
    while (numero < 1 || numero > 10)
    {
        printf("Escriba un numero del 1 al 10: ");
        scanf("%i", &numero);
        comprobar(numero);
    }
    

    // Procesamos los datos y los mostramos por pantalla

    return 0;
}
