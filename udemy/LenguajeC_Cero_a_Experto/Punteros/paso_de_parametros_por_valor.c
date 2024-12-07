#include <stdio.h>

/*
Parámetro por valor
Es el que usamos casi siempre, cuando pasamos una variable a determinada función,
solo copia el valor que está contiene en una memoria temporal la cual desaparece luego
que la ejecución de la función termina y la variable original no es modificada.
*/

void agregar(int a){
    a += 10;
}

int main(){

    // Variables
    int numero;

    // Solicitamos la información al usuario
    printf("Escribe el numero: ");
    scanf("%d", &numero);

    // Procesamos los datos y los mostramos por pantalla
    printf("\nValor antes de la funcion: %d\n", numero);
    agregar(numero);
    printf("\nValor después de la funcion: %d\n", numero);

    return 0;
}
