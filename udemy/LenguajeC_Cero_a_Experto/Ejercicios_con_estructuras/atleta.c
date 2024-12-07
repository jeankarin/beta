#include <stdio.h>

/*
Hacer un array de estructura llama atleta para N atletas
que contenga los siguientes miembros: nombre, pais, numero_medallas.
y devuelva los datos (nombre, pais) del atleta que ha ganado el mayor
numero de medallas.
*/


struct atleta
{
    char nombre[20], pais[20];
    int numero_medallas;
}atletas[10];

int main(){

    // Variables
    int numAtletas, medallas = 0, posicion = 0;

    // Solicitamos la información al usuario
    printf("Ingrese el numero de atletas: ");
    scanf("%d", &numAtletas);

    // Procesamos los datos y los mostramos por pantalla
    for (int i = 0; i < numAtletas; i++)
    {
        fflush(stdin);
        printf("\nIngrese el nombre: (sin espacios)");
        scanf("%s",atletas[i].nombre);
        fflush(stdin);
        printf("\nIngrese el pais: (sin espacios)");
        scanf("%s",atletas[i].pais);
        fflush(stdin);
        printf("\nIngrese el numero de medallas: ");
        scanf("%d", &atletas[i].numero_medallas);
    }
    
    for (int i = 0; i < numAtletas; i++)
    {
        if (atletas[numAtletas].numero_medallas > medallas)
        {
            medallas = atletas[numAtletas].numero_medallas;
            posicion = numAtletas;
        }
    }

    printf("\nEl atleta con más medallas es %s con un total de %d", atletas[posicion].nombre, atletas[posicion].numero_medallas);
    

    return 0;
}
