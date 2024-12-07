#include <stdio.h>
#include <string.h>

/*
Hacer una estrucutra llamada corredor, en la cual se tendrán los
siguientes miembros: Nombre, edad, sexo, club. Pedir datos al usuario
para un corredor y asignarle una categoria de competición:
- Juvenil <= 18 años
- Senior <= 40 años
- Veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoría
de competición.
*/

struct corredor
{
    char nombre[20], sexo[20], club[20], categoria[20];
    int edad;
}corredor1;


int main(){

    // Variables

    // Solicitamos la información al usuario
    printf("Datos del corredor\n");
    printf("Ingrese el nombre: ");
    scanf("%s", corredor1.nombre);
    printf("Ingrese la edad: ");
    scanf("%d", &corredor1.edad);
    printf("Ingrese el sexo: ");
    scanf("%s", corredor1.sexo);
    printf("Ingrese el club: ");
    scanf("%s", corredor1.club);
    
    // Procesamos los datos y los mostramos por pantalla
    if (corredor1.edad <= 18)
    {
        strcpy(corredor1.categoria,"Juvenil");
    }else if (corredor1.edad > 18 && corredor1.edad <= 40)
    {
        strcpy(corredor1.categoria,"Senior");
    }else if (corredor1.edad > 40)
    {
        strcpy(corredor1.categoria,"Veterano");
    }

    printf("\nDatos del corredor: ");
    printf("\nNombre: %s", corredor1.nombre);
    printf("\nEdad: %d", corredor1.edad);
    printf("\nSexo: %s", corredor1.sexo);
    printf("\nClub: %s", corredor1.club);
    printf("\nCategoria: %s\n\n", corredor1.categoria);

    return 0;
}
