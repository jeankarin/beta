#include <stdio.h>

/*

*/

int main(){

    // Variables
    char nombre[20];

    // Solicitamos la información al usuario
    do
    {
        scanf("%s", nombre);
        if (!feof(stdin)){
            printf("\n%s", nombre);
        }
    } while (!feof(stdin));

    return 0;
}
