#include <stdio.h>

/*
Escribe un programa que mediante una función modifique los valores de un arreglo bidimensional de 5 x 4 con
valores iniciales dados por el usuario, duplicando (multiplicando x 2) los valores de los renglones pares (0,2,4)
y multiplicando x 3 los renglones impares (1,3)
*/

void mostrarArray(int array1[5][4]){

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("[%d]", array1[i][j]);
        }
        printf("\n");
    }
}
/* Metodo largo
void modificarArray(int array1[5][4]){

    int *point = &array1[0][0];

    for (int i = 0; i < 20; i++)
    {
        if (i < 4)
        {
            *(point + i) = 2 * (i + 1);
        }
        if (i >=4 && i < 8)
        {
            *(point + i) = 3 * (i + 1);
        }
        if (i >=8 && i < 12)
        {
            *(point + i) = 2 * (i + 1);
        }
        if (i >=12 && i < 16)
        {
            *(point + i) = 3 * (i + 1);
        }
        if (i >=16)
        {
            *(point + i) = 2 * (i + 1);
        }
    }   
}
*/

void modificarArray(int array1[5][4]){
    int *point = &array1[0][0];

    for (int i = 0; i < 20; i++)
    {
        if (i < 4 || i >= 8 && i < 12 || i >= 16 && i < 20)
        {
            *(point + i) *= 2;
        }
        
        if (i >= 4 && i < 8 || i >= 12 && i < 28)
        {
            *(point + i) *= 3;
        }
    }
        
}

int main(){

    // Variables
    int arr1[5][4], *point;

    // Solicitamos la información al usuario
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Escribe el numero en la posicion [%d][%d]: ", i,j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    // Mostramos el array original por pantalla
    mostrarArray(arr1);
    printf("\nModificamos el array\n");
    modificarArray(arr1);
    printf("\nMostramos el resultado del cambio\n");
    mostrarArray(arr1);

    // Procesamos los datos

    return 0;
}
