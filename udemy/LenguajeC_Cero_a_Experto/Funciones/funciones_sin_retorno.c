#include <stdio.h>

/*
// Funcion sin retorno de valor
void nombreFuncion(parametros){
    codigo
}

// Funcion con retorno de valor
tipoDeDato nombreFuncion(parametros){
    return expresion    
}

La función se llama con
nombreFuncion()
*/

void Mundo();

int main(){

    // Crear una función que imprima Hola Mundo por pantalla
    Mundo();

    return 0;
}

void Mundo(){
    printf("Hola Mundo\n");
}