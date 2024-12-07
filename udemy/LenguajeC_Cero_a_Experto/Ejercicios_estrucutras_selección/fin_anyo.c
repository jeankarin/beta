#include <stdio.h>
#include <string.h>

/*
Una distribuidora de motocicletas tiene una promocion de 
fin de año que consiste en lo siguiente.
Las motos marca Honda tienen un descuento del 5%
La marca Yamaha del 8%
La marca Suzuki del 10%
Y el resto de marcas del 2%
*/

int main(){

    // Variables
    float precio, descuento, precioFinal;
    int opcion;

    // Solicitamos la información al usuario
    printf("Modelos disponibles\n");
    printf("1- Honda\n");
    printf("2- Yamaha\n");
    printf("3- Suzuki\n");
    printf("4- Otras\n");
    printf("Elige el modelo de la moto: ");
    scanf("%i", &opcion);
    
    printf("Escribe el precio de la moto: ");
    scanf("%f", &precio);

    // Procesamos los datos y los mostramos por pantalla
    switch(opcion){
        case 1:
            descuento = precio * 0.05;
            precioFinal = precio - descuento;
            printf("El precio final es: €%.2f\n", precioFinal);
            break;
        case 2:
            descuento = precio * 0.08;
            precioFinal = precio - descuento;
            printf("El precio final es: €%.2f\n", precioFinal);
            break;
        case 3:
            descuento = precio * 0.10;
            precioFinal = precio - descuento;
            printf("El precio final es: €%.2f\n", precioFinal);
            break;
        case 4:
            descuento = precio * 0.02;
            precioFinal = precio - descuento;
            printf("El precio final es: €%.2f\n", precioFinal);
            break;
        default:
            printf("Opcion no valida\n");
            break;
    }

    return 0;
}