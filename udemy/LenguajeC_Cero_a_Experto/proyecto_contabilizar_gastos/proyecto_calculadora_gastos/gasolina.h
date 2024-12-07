#include <stdio.h>

float gasolina(float *p_sueldo, int *p_acuGas, float *p_gastoGas){

    float gasto = 0;
    printf("Inserte el gasto en Gasolina: ");
    scanf("%f", &gasto);

    if (gasto > *p_sueldo)
    {
        printf("No puedes gastar esa cantidad en Gasolina");
    }else{
        *p_sueldo -= gasto;
        *p_gastoGas += gasto;
        *p_acuGas += 1;
    }

    printf("Gracias por viajar en coche");

    return *p_sueldo, *p_acuGas, *p_gastoGas;
}