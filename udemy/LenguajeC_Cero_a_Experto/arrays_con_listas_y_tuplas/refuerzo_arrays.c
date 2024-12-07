#include <stdio.h>

/*
Crea un array de 10 elementos en el cual se soliciten al usuario
los valores de dicho arreglo y posteriormente se puedan hacer las
siguientes operaciones

1) ingresar o modificar elementos del arreglo
2) mostrar la suma de los elementos
3) realizar la múltiplicación de los elementos
4) realizar la suma solo de los elementos divisibles entre 3
5) multiplicar por 3 cada elemento del arreglo.

El usuario seleccionará la opción y el programa mostrará los datos del array
original y el resultado de la opción seleccionada.
*/

// Solo muestra el array por pantalla
void datosArray(int array[]){
    for (int i = 0; i < 10; i++)
    {
        printf("Posicion [%i] = %i\n", i, array[i]);
    }
}

// Modifica elementos del arreglo
void modificarArray(int array[]){
    for (int i = 0; i < 10; i++)
    {
        printf("Escriba el numero para el array en la posicion [%i]: ", i);
        scanf("%d", &array[i]);
    }
}

// Sumar elementos del array
void sumarElementos(int array[]){
    int sumar = 0;

    for (int i = 0; i < 10; i++)
    {
        sumar += array[i];
    }

    printf("La suma de todos los numeros del array es %d", sumar);
}

// Multiplicar elementos del array
void multiElementos(int array[]){
    int multiplicar = 1;

    for (int i = 0; i < 10; i++)
    {
        multiplicar *= array[i];
    }

    printf("La multiplicacion de todos los numeros del array es %d", multiplicar);
}

// Realizar la suma solo de los elementos divisibles entre 3
void sumaElementosTres(int array[]){
    int sumartres = 0;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 3 == 0){
            sumartres += array[i];
        }
    }

    printf("La suma de los elementos divisibles entre 3 es: %i", sumartres);
}

// Multiplicar por 3 cada elemento del arreglo
void multiplica3(int array[]){
    for (int i = 0; i < 10; i++)
    {
        array[i] *= 3;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("El erreglo multiplicado por 3 en la posición [%i] = %i\n", i, array[i]);
    }
}

int main(){

    // Variables
    int array[10], opcion = 1;

    // Solicitamos la información al usuario
    for (int i = 0; i < 10; i++)
    {
        printf("Escribe un numero en la posición %d: ", i);
        scanf("%d", &array[i]);
    }
    
    // Procesamos los datos y los mostramos por pantalla
    while (opcion)
    {
        printf("\n\nEscoge una opcion\n\n");
        printf("1- Ingresar o modificar elementos del array\n");
        printf("2- Mostrar la suma de los elementos\n");
        printf("3- Mostrar la multiplicacion de los elementos\n");
        printf("4- Realizar la suma de los elementos divisibles entre 3\n");
        printf("5- Multiplicar por 3 cada elemento del arreglo\n");
        printf("0- Salir\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1: printf("Ingresar o modificar elementos del array\n");
            datosArray(array);
            modificarArray(array);
            datosArray(array);
            break;
        case 2: printf("Mostrar la suma de los elementos\n");
            datosArray(array);
            sumarElementos(array);
            break;
        case 3: printf("Mostrar la multiplicacion de los elementos\n");
            datosArray(array);
            multiElementos(array);
            break;
        case 4: printf("Realizar la suma de los elementos divisibles entre 3\n");
            datosArray(array);
            sumaElementosTres(array);
            break;
        case 5: printf("multiplicar por 3 cada elemento del arreglo\n");
            datosArray(array);
            multiplica3(array);
            break;
        case 0: printf("Gracias por usar el programa\n"); break;
        default: printf("Opcion incorrecta\n"); break;
        }
    }

    return 0;
}
