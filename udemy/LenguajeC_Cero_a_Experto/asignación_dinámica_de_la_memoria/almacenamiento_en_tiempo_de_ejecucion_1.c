#include <stdio.h>
#include <stdlib.h>

int main(){

    // Variables
    int cont, arreglo[] = {35,40,45,50,55}, variable;
    int *ptr = (int *)malloc(10 * sizeof(int));
    char *ptr2 = (char *)calloc(100,sizeof(char));

    // Imprimir las direcciones de un arreglo.
    for (cont = 0; cont < 10; cont++)
    {
        printf("direccion del arreglo [%d] = %p valor arreglo[%d] = %d\n", cont, &arreglo[cont], cont, arreglo[cont]);
    }
    
    printf("\n");

    // Imprimiendo direcciones y contenido de un apuntador de memoria dinamica reservada con malloc
    // Si usamos calloc el valor de cada campo del arreglo sería 0, no los llena de basura como malloc
    for (cont = 0; cont < 10; cont++)
    {
        printf("direccion = %p    *valor = %d\n", ptr + cont, *(ptr + cont));
    }
    
    printf("\n");

    // Asignamos los valores de la tabla del 4
    for (cont = 0; cont < 10; cont++)
    {
        ptr[cont] = 4 * (cont + 1);
    }
    
    // Mostramos los valores
    for (cont = 0; cont < 10; cont++)
    {
        printf("direccion = %p    *valor = %d\n", ptr + cont, *(ptr + cont));
    }

    // Usamos realloc para redimensionar la memoria reservada de ptr a 20 espacios.
    ptr = (int *)realloc(ptr,20 * sizeof(int));
    int *ptr3 = (int *)realloc(ptr, 20 * sizeof(int)); // Es el mismo que el ptr

    printf("\n\nEsto es de PTR\n");
    for (cont = 0; cont < 20; cont++)
    {
        printf("direccion = %p    *valor = %d\n", ptr + cont, *(ptr+cont));
    }

    printf("\nEsto es de PTR3\n");
    for (cont = 0; cont < 20; cont++)
    {
        printf("direccion = %p    *valor = %d\n", ptr3 + cont, *(ptr3 + cont));
    }
    
    // Liberamos la memoria
    free(ptr);
    free(ptr2);
    free(ptr3);

    return 0;
}