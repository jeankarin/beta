#include <stdio.h>
#include <math.h>

/*
Escribe un programa en el cual, se soliciten al usuario 2 valores (almacenadas en 2 variables)
y mediante una función* que no devuelva ningún valor y que utilice paso por referencia,
se calcule lo siguiente:

a- Resultado de elevar el primero a la potencia que indique el segundo
b- La división del valor obtenido en el inciso a y el primer valor ingresado

Ejemplo: si el usuario ingresa 8 y 4
a- 8^4 = 4096;
b- 4096 / 8 = 512

El resultado de a y b se debe almacenar en las mismas variables donde se almacenaron los datos
ingresados por el usuario.

IMPORTANTE:
La función solicitada no debe contener ninguna instrucción "printf" ni ninguna variable auxiliar
*/

void opPunteros(int* pa, int* pb){
    *pb = pow(*pa,*pb);
    *pa = *pb / *pa;
}

int main(){

    // Variables
    int a, b;

    // Solicitamos la información al usuario
    printf("Escriba el primer numero: ");
    scanf("%d", &a);
    printf("Escriba el segundo numero: ");
    scanf("%d", &b);

    // Procesamos los datos
    opPunteros(&a, &b);

    // Mostramos el resultado de las operaciones
    printf("El valor del primer numero elevado a la potencia del segundo numero es: %d\n", b);
    printf("El valor de la división de la potencia entre el numero a es %d\n", a);

    return 0;
}
