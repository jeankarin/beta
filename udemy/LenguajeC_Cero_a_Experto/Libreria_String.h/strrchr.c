#include <stdio.h>
#include <string.h>

/*
Sintaxis:
strrchr(cadena)
Regresa el restante de la cadena a partir de la primera aparición del carácter indicado.
*/

int main(){

    // Variables
    char Abecedario[] = "abcdefghijklmnopqrstuvwxyz";
    char corte;

    // Solicitamos la información al usuario
    printf("Letra donde se cortara el abecedario: ");
    fflush(stdin);
    scanf("%c", &corte);
    
    // Procesamos los datos y los mostramos por pantalla
    printf("\n%s", strrchr(Abecedario,corte));

    return 0;
}
