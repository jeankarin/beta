#include <stdio.h>

/*
En este tipo de función el valor de la variable si se modifica, ya que se pasa como parámetro
la dirección de memoria de esta, usando el operador & y en la funciona, el argumento
se recibe como el valor que alberga esa dirección de memoria usando el operador *.
*/

void agregar(int *a){
    *a += 10;
}

int main(){

    // Variables
    int numero;

    // Solicitamos la información al usuario
    printf("Escribe un numero: ");
    scanf("%d", &numero);

    // Procesamos los datos y los mostramos por pantalla
    printf("El valor antes de la funcion: %d\n", numero);
    agregar(&numero);
    printf("El valor despues de la funcion: %d\n", numero);

    return 0;
}
