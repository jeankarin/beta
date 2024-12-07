#include <stdio.h>
#include <string.h>

/*
Ingresa por telcado el nombre, edad y sexo de la persona e imprima
solo, si la persona es de sexo femenino y mayor de edad, el nombre 
de la persona
*/

int main(){

    // Variables
    char nombre[30], sexo[20];
    int edad;

    // Solicitamos la información al usuario
    printf("Escribe tu nombre: ");
    fgets(nombre,30,stdin);
    strtok(nombre,"\n");
    fflush(stdin);

    printf("Escribe tu sexo: ");
    fgets(sexo,20,stdin);
    strtok(sexo,"\n");
    fflush(stdin);

    printf("Escribe tu edad: ");
    scanf("%d", &edad);
    fflush(stdin);

    // Procesamos los datos y los mostramos por pantalla
    if ((strcmp(sexo, "femenino") == 0) && (edad >= 18)){
        printf("Cumple con los requisitos: %s", nombre);
    }else{
        printf("No cumple con los requisitos");
    }

    return 0;
}