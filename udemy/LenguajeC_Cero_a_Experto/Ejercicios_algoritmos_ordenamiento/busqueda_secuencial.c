#include <stdio.h>

/*
Hacer una lista de 10 numeros, luego pedirle al usuario que digite un numero,
con una busqueda secuencial determinar si el numero existe en la lista o no.
Indicar en que posición se encuentra
*/

int main(){

    // Variables
    int lista[10] = {1,2,3,4,5,6,7,8,9,10}, dato, i = 0;
    char band = 'F';

    // Solicitamos la información al usuario
    fflush(stdin);
    printf("Escribe un numero: ");
    scanf("%d", &dato);

    // Procesamos los datos
    while ((band == 'F') && (i < 10))
    {
        if (lista[i] == dato){
            band = 'V';
        }
        i++;
    }
    
    // Mostramos por pantalla el resultado
    if (band == 'F'){
        printf("El numero no existe en la lista\n");
    }else if (band == 'V'){
        printf("El numero existe, en la posicion %i\n", i);
    }
    return 0;
}
