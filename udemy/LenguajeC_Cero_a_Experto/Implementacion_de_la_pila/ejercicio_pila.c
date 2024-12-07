#include "pila.h"

/*
Crear una pila que solicite datos al usuario y que los ordene, mostrando el número menor y mayor.
*/

int main(){
    
    // Creamos 3 pilas
    Pila pilaUsuario = crearPila();
    Pila pilaMenor = crearPila();
    Pila pilaAuxiliar = crearPila();

    // Creamos un bucle for para agregar los valores del usuario a la pila
    for (int i = 0; i < 8; i++)
    {
        int valor;
        printf("Escribe el valor [%d] de la Pila: ", i);
        scanf("%d", &valor);
        fflush(stdin);

        // Añadimos el valor a la pila
        push(&pilaUsuario, valor);
    }
    
    // Determinamos el valor menor de los datos ingresados por el usuario
    while (isEmpty(pilaUsuario) == 0)
    {
        push(&pilaMenor,pop(&pilaUsuario));
        while (isEmpty(pilaUsuario) == 0)
        {
            if (tope(pilaUsuario) > tope(pilaMenor)){
                push(&pilaAuxiliar,pop(&pilaUsuario));
            }else{
                push(&pilaAuxiliar,pop(&pilaMenor));
                push(&pilaMenor,pop(&pilaUsuario));
            }
        }
    }

    // Mostramos el número menor
    printf("El valor menor de los ingresados es el %d\n", pop(&pilaMenor));

    return 0;
}