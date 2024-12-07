#include <stdio.h>
#include <string.h>

/*
Hacer 2 arrays de cadena de carácteres, almacenar 2 nombres
cada uno dentro de su respectiva variable y luego intercambiar 
el contenido de los arrays
*/

int main(){

    // Variables
    char name1[20], name2[20], aux[20];

    // Solicitamos la información al usuario
    printf("Ingrese el primer nombre: ");
    fgets(name1,20,stdin);
    strtok(name1,"\n");

    printf("Ingrese el segundo nombre: ");
    fgets(name2,20,stdin);
    strtok(name2,"\n");

    // Antes de copiar
    printf("El primer nombre antes de copiar es: %s\n", name1);
    printf("El primer nombre antes de copiar es: %s\n", name2);
    
    // Procesamos los datos y los mostramos por pantalla
    strcpy(aux, name1);
    strcpy(name1, name2);
    strcpy(name2, aux);

    printf("El primer nombre despues de copiar es: %s\n", name1);
    printf("El primer nombre despues de copiar es: %s\n", name2);
    return 0;
}
