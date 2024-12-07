#include <stdio.h>

/*
Pasa el numero a una función que se vaya llamando así misma hasta llegar a 0.
*/

void cuentaRegresiva(int n){
    if (n < 0){
        printf("Finalizo\n");
    }else{
        printf("%d\n", n);
        cuentaRegresiva(n - 1);
    }
}

int main(){

    // Variables
    int num;

    // Solicitamos la información al usuario
    printf("Facilite un numero: ");
    scanf("%d", &num);

    // Procesamos los datos y los mostramos por pantalla
    cuentaRegresiva(num);

    return 0;
}
