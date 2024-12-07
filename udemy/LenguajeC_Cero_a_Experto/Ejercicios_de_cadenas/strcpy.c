#include <stdio.h>
#include <string.h>

/*
Copiar la cadena de caracteres "Hola Mundo" de un array a otro.
Luego cambiar la palabra "mundo" por "y aprende C conmigo"
*/

int main(){

    // Variables
    char cadena1[] = "Hola Mundo", cadena2[30];

    // Procesamos los datos y los mostramos por pantalla
    strcpy(cadena2,cadena1);
    strcpy(cadena2 + 5, "y aprende C conmigo"); //5 porque Hola vale 4 más el espacio, 5.

    printf("%s", cadena2);

    return 0;
}
