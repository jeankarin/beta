#include <stdio.h>

/*
Calcular el fibonacci
*/

int main(){

    // Variables
    int num, i, x=0, y=1, z=1;

    // Solicitamos la información al usuario
    printf("Escribe el numero de elementos: "),
    scanf("%i", &num);

    // Procesamos los datos y los mostramos por pantalla
    for ( i = 0; i < num; i++ ){
        z = x + y;
        x = y;
        y = z;
        
        printf("%i, ", z);
    }

    return 0;
}
