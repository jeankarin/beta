#include <stdio.h>

/* 
### PreIncremento ###
int a = 0;
int b = ++a;
hace a = 1 y b = 1

### PostIncremento ###
int a = 0;
int b = a++;
hace a = 1 y b = 0
*/

int main(){

    // Variables
    int a = 0;
    int b = ++a;

    // Realizamos el PreIncremento
    printf("El valor de a es de %i\n", a);
    printf("El valor de b es de %i\n", b);

    // Variables
    int c = 0;
    int d = c++;

    // Realizamos el PostIncremento
    printf("El valor de c es de %i\n", c);
    printf("El valor de d es de %i\n", d);

    return 0;
}