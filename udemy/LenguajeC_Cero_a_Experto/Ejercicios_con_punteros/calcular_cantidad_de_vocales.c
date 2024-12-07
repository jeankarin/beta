#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

/*
Pedir su nombre al usuario y devolver el número de vocales que hay
*/

int cuentaVocales(char *nombre){
    int contador = 0;

    while(*nombre) // Lo mismo que poner != '\0' --> Carácter de fin de linea / palabra.
    {
        switch(*nombre)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': contador++; --> Al ser la misma instrucción para todos se puede simplificar así.
        }
        nombre++;
    }
    return contador;
}

int main(){

    // Variables
    char nombre[50];

    // Solicitamos la información al usuario
    __fpurge(stdin);
    printf("Introduce tu nombre: ");
    fgets(nombre,50,stdin);
    strtok(nombre,"\n");

    // Procesamos los datos y los mostramos por pantalla
    printf("El numero de vocales que hay en tu nombre es: %d\n", cuentaVocales(nombre));

    return 0;
}
