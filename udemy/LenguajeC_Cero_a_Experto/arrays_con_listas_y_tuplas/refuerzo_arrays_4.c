#include <stdio.h>

/*
Escribe un programa en el cual se solicite al usuario llenar un arreglo de 10 elementos
(únicamente con 0's y 1's). Una vez que el usuario llene el arreglo con el número binario.
podrá seleccionar entre alguna codificación.
1- Binario puro
2- Punto fijo (6 bit entero y 4 bit decimal)
3- Complemento a 2

El programa realizará la conversión y como salida mostrará
el resultado en representación decimal.
*/

// Solo imprime el array
void imprimirArray(int array[]){
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
}

void binarioPuro(int array[]){
    int valor = 512, suma = 0;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] == 1){
            suma += valor;
        }

        valor /= 2;
    }

    printf("El valor en decimal es: %i\n", suma);
}

void puntoFijo(int array[]){
    int suma = 0, valor = 32;
    float sumaDecimal = 0, valorDecimal = 0.5;

    // Parte Entera
    for (int i = 0; i < 6; i++)
    {
        if (array[i] == 1){
            suma += valor;
        }

        valor /= 2;
    }

    // Parte Decimal
    for (int i = 6; i < 10; i++)
    {
        if (array[i] == 1){
            sumaDecimal += valorDecimal;
        }

        valorDecimal /= 2;
    }

    printf("El valor del numero en punto fijo es %.4f\n", suma + sumaDecimal);
}

void complementoa2(int array[]){
    int posicion;

    for (posicion = 0; posicion < 10; posicion++)
    {
        if (array[posicion] == 1){
            array[posicion] = 0;
        }else{
            array[posicion] = 1;
        }
    }

    posicion = 9;
    while (array[posicion] == 1)
    {
        array[posicion] = 0;
        posicion--;

        if (array[posicion] == 0){
            array[posicion] = 1; break;
        }
    }

    if (array[posicion] == 0){
        array[posicion] = 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("[%i]\n", array[i]);
    }   
}

int main(){

    // Variables
    int array[10], opcion;

    // Solicitamos la información al usuario
    printf("Escribe 10 numeros, solo 1 y 0\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("Escribe el elemento [%i] del array\n", i);
        scanf("%d", &array[i]);
    }
    
    // Procesamos los datos y los mostramos por pantalla
    imprimirArray(array);

    printf("Escoge una opcion\n1- Binario puro\n2- Punto fijo (6 bit entero y 4 bit decimal)\n3- Complemento a 2\n4- Salir\n\n");
    scanf("%d", &opcion);
    
    switch (opcion)
    {
    case 1:
        printf("Seleccionaste binario puro\n");
        binarioPuro(array);
        break;
    case 2:
        printf("Seleccionaste Punto fijo\n");
        puntoFijo(array);
        break;
    case 3:
        printf("Seleccionaste Complemento a 2\n");
        complementoa2(array);
        break;
    case 4:
        printf("Gracias por usar la aplicacion\n");
        break;
    default:
        printf("Opcion no valida\n");
        break;
    }

    return 0;
}
