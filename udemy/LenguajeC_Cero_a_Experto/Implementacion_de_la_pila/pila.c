#include "pila.h"

int main(){

    // Creamos la pila
    Pila miPila = crearPila();

    // Vamos a meter un elemento
    push(&miPila,10);

    // Mostramos por pantalla el tope.
    printf("El valor del tope es: %d\n", miPila.tope); 
    //! Mostrará 1 porque al añadir un número anteriormente ya no vale 0, como cuando la creamos.

    // Mostramos el último valor que hemos añadido.
    printf("El valor dentro del tope es %d\n", miPila.lista[miPila.tope-1]);

    // Añadimos 3 números más.
    push(&miPila,12);
    push(&miPila,13);
    push(&miPila,14);

    // Mostramos el tope de la pila.
    printf("El valor del tope es: %d\n", miPila.tope);
    // Mostramos el valor del tope de la pila.
    printf("El valor dentro del tope es: %d\n", tope(miPila));

    // Borramos el último valor de la pila
    int valorEliminado = pop(&miPila);
    printf("EL valor eliminado es: %d\n", valorEliminado);

    // Mostramos el tope de la pila.
    printf("El valor del tope es: %d\n", miPila.tope);
    // Mostramos el valor del tope de la pila.
    printf("El valor dentro del tope es: %d\n", tope(miPila));
}