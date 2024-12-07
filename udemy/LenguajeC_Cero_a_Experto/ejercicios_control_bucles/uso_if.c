#include <stdio.h>

/*
Digite un numero, si el numero supera a 10,
multiplique los 10 primeros numeros,
sino, sumelos
*/

int main(){

    // Variables
    int num, i=1, suma=0, multiplicacion=1;

    // Solicitamos la información al usuario
    printf("Escribe tu numero: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    if (num > 10)
    {
        while (i<=10){
            multiplicacion *= i;
            i++;
        }
        printf("La multiplicación es: %i\n", multiplicacion);
    }else{
        while (i<=10){
            suma += i;
            i++;
        }
        printf("La suma es: %i\n", suma);
    }

    return 0;
}
