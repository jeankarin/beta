#include <stdio.h>

/*
Escribir los multiplos de 1 hasta 100, de 2,3,5, y 7
*/

int main(){

    // Variables
    int numero, i=1;

    // Solicitamos la información al usuario
    printf("Escribe el numero para ver sus multiplos: ");
    scanf("%d", &numero);

    // Procesamos los datos y los mostramos por pantalla
    while (i <= 100)
    {
        if (i % numero == 0)
        {
            printf("%d\n",i);
        }
        i++;
    }

    // También podemos hacerlo con un FOR
    for (int j = 1;j <= 100; j++)
    {
        if (j % numero == 0)
        {
            printf("%d\n",j);
        }
    }

    return 0;
}
