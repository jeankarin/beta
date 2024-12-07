#include <stdio.h>

/*
Serie Fibonacci
0 1 1 2 3 5 8 13 ...
*/

int main(){

    // Variables
    int num, x=0, y=1, z=1;

    // Solicitamos la información al usuario
    printf("Introduce el limite de la serie fibonacci: ");
    scanf("%d", & num);

    // Procesamos los datos y los mostramos por pantalla
    // casos bases
    printf("0, 1");
    for (int i = 1; i <= num; i++)
    {
        z = x + y;
        x = y;
        y = z;

        printf(", %d", z);
    }

    return 0;
}
