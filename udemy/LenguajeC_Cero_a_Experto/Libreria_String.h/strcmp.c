#include <stdio.h>
#include <string.h>

/*
Sintaxis:
strcmp(cadena1,cadena2)
Compara 2 cadenas de texto, carácter a carácter, es case-sensitive. Cuando se encuentra una diferencia, está función devuelve un valor entero correspondiente a la diferencia de valor decimal, según el código ASCII. El cual corresponde a la siguiente tabla.

Si cadena1 es       Devuelve
Igual que cadena2       0
Mayor que cadena2       n > 0
Menor que cadena2       n < 0
*/

int main(){

    // Variables
    char ClaveSecreta[] = "Contrasenya";
    char UsuarioDigito[128];
    int IntentosRestantes = 3;

    // Solicitamos la información al usuario
    do
    {
        printf("\n\nEscribe la clave secreta: ");
        fflush(stdin);
        scanf("%s", &UsuarioDigito);

        // Validamos la contraseña
        if (strcmp(ClaveSecreta, UsuarioDigito) == 0)
        {
            printf("\nBienvenido al sistema");
            break;
        }else{
            IntentosRestantes--;
            printf("Clave secreta incorrecta, te quedan %i intentos\n", IntentosRestantes);
        }

    } while (IntentosRestantes > 0);
    

    // Procesamos los datos y los mostramos por pantalla

    return 0;
}
