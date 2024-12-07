#include <stdio.h>

/*
Leer un string con getchar() y contabilizar cuantas veces aparece la vocal:
a,e,i,o,u. E imprimir el contador de cada una
*/

int main(){

    // Variables
    int cadena, contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;

    // Solicitamos la información al usuario
    printf("Digite una palabra: ");

    // Procesamos los datos y los mostramos por pantalla
    while ('\n' != (cadena = getchar()))
    {
        switch (cadena)
        {
        case 'a': 
        case 'A': 
            contadorA++; break;
        case 'e': 
        case 'E': 
            contadorE++; break;
        case 'i': 
        case 'I': 
            contadorI++; break;
        case 'o': 
        case 'O': 
            contadorO++; break;
        case 'u': 
        case 'U': 
            contadorU++; break;
        default:
            break;
        }
    }

    putchar(cadena);
    printf("\nA: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", contadorA, contadorE, contadorI, contadorO, contadorU);

    return 0;
}
