#include <stdio.h>

/*
Determinar si el numero introducido por el usuario es primo o no
*/

int main(){

    // Variables
    int num, cont;

    // Solicitamos la información al usuario
    printf("Introduce el numero para saber si es primo: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
    }

    if ( cont > 2 )
    {
        printf("El numero es compuesto\n");
    }else
    {
        printf("El numero es Primo\n");
    }

    return 0;
}
