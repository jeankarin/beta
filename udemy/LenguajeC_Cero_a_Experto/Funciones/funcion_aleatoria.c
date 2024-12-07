#include <stdio.h>

/*srand(time(NULL));
variable = limiteInferior + rand()%((limiteSuperior + 1) - limiteInferior);
*/

void funcionAleatoria(){

    int num;
    srand(time(NULL));

    num = 1 + rand()%((10-1)-1); // Devolverá un número entre 1 - 10
    printf("%d\n",num);
}

int main(){

    // Procesamos los datos y los mostramos por pantalla
    funcionAleatoria();

    return 0;
}
