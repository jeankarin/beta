#include <stdio.h>
#include <string.h>

/*
Pedir una cadena de caracteres (string) al usuario e indicar
cuantas veces aparece la vocal a,e,i,o,u; en la cadena de crácteres
*/

int vocalA(char *palabra){
    
    int contador = 0;

    while (*palabra)
    {
        switch (*palabra)
        {
        case 'a':
        case 'A':
            contador++;
        }
        palabra++;
    }

    return contador;
}

int vocalE(char *palabra){

    int contador = 0;

    while (*palabra)
    {
        switch (*palabra)
        {
        case 'e':
        case 'E':
            contador++;
        }
        palabra++;
    }

    return contador;
}

int vocalI(char *palabra){

    int contador = 0;

    while (*palabra)
    {
        switch (*palabra)
        {
        case 'i':
        case 'I':
            contador++;
        }
        palabra++;
    }

    return contador;
}

int vocalO(char *palabra){

    int contador = 0;

    while (*palabra)
    {
        switch (*palabra)
        {
        case 'o':
        case 'O':
            contador++;
        }
        palabra++;
    }

    return contador;
}

int vocalU(char *palabra){

    int contador = 0;

    while (*palabra)
    {
        switch (*palabra)
        {
        case 'u':
        case 'U':
            contador++;
        }
        palabra++;
    }

    return contador;
}

int main(){

    // Variables
    char palabra[50];

    // Solicitamos información al usuario
    printf("Escribe una cadena de caracteres: ");
    fgets(palabra,50,stdin);
    strtok(palabra,"\n");

    // Procesamos los datos
    printf("La vocal a aparece: %d veces\n", vocalA(palabra));
    printf("La vocal e aparece: %d veces\n", vocalE(palabra));
    printf("La vocal i aparece: %d veces\n", vocalI(palabra));
    printf("La vocal o aparece: %d veces\n", vocalO(palabra));
    printf("La vocal u aparece: %d veces\n", vocalU(palabra));


    return 0;
}