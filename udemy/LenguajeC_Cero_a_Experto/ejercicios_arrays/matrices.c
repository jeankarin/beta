#include <stdio.h>

/*
Matrices de array bidimensionales:

Matrices enteros
Matrices flotantes
matrices de caracteres
*/

void matrizEnteros(){
    // Variables
    int matriz[2][3] = {1,2,3,11,12,13};
    // Tambien int matriz[2][3] = {{1,2,3},{11,12,13}};
    int filas, columnas;

    // Solicitamos la información al usuario
    for (filas = 0; filas < 2; filas++)
    {
        for (columnas = 0; columnas < 3; columnas++)
        {
            printf("%i ", matriz[filas][columnas]);
        }
        printf("\n");
    }
}

void matrizFlotantes(){
    float matriz[2][3];
    int filas, columnas;

    for (filas = 0; filas < 2; filas++)
    {
        for (columnas = 0; columnas < 3; columnas++)
        {
            printf("Escribe un numero matriz[%i][%i]: ", filas + 1,columnas + 1);
            scanf("%f", &matriz[filas][columnas]);
        }
        printf("\n");
    }
    
    fflush(stdin);
    for (filas = 0; filas < 2; filas++)
    {
        for (columnas = 0; columnas < 3; columnas++)
        {
            printf("%.2f ", matriz[filas][columnas]);
        }
        printf("\n");
    }
}

void matrizCaracteres(){
    char matriz[2][3] = {{'a','b','c'},{'d','e','f'}};
    int filas, columnas;

    for (filas = 0; filas < 2; filas++)
    {
        for (columnas = 0; columnas < 3; columnas++)
        {
            printf("%c ", matriz[filas][columnas]);
        }
        printf("\n");
    }
}

int main(){

    matrizEnteros();
    matrizFlotantes();
    matrizCaracteres();

    return 0;
}
