#include <stdio.h>
#include <stdlib.h>

// Definimos la estructura de una pila
typedef struct Pila{
    int tope;
    int lista[100];
}Pila;

// Función para crear una pila
Pila crearPila(){
    Pila p;
    p.tope = 0;
    return p;
}

// Función para comprobar si la pila está vacía
int isEmpty(Pila p){
    if (p.tope == 0)
    {
        return 1;
    }
    return 0;
}

// Función para añadir un número a una pila
void push(Pila* p, int x){
    p->lista[p->tope] = x;
    p->tope++;
}

// Función para eliminar un número / posición de una pila
int pop(Pila* p){
    if (isEmpty(*p) == 1)
    {
        printf("La pila est%c vac%ca\n", 160,161);
        return -1;
    }else{
        int aux = p->lista[p->tope-1];
        p->tope--;
        return aux;
    }
}

// Función para mostrar el valor que contiene el tope de la pila
int tope(Pila p){
    if(isEmpty(p) == 1)
    {
        printf("La pila est%c vac%ca\n", 160,161);
        return -1;
    }else{
        return p.lista[p.tope-1];
    }
}