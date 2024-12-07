#include <stdio.h>

/*
Conversión de temperatura, pasar celsius a Kelven y Fahrenheit
*/

// Función conversión temperatura
float tempKelvin(float n1){
    return n1 + 273.15;
}

float tempFahrenheit(float n1){
    return (n1 * 9) / 5 + 32;
}

int main(){

    // Variables
    int opcion;
    float temperatura;

    // Solicitamos la información al usuario
    do
    {
        printf("Este programa convierte grados celsius a kelvin o fahrenheit\n");
        printf("1- Kelvin\n2- Fahrenheit\n3- Salir\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Dime la temperatura: ");
            scanf("%f", &temperatura);
            printf("El valor es: %.2f K\n", tempKelvin(temperatura));
            break;
        case 2:
            printf("Dime la temperatura: ");
            scanf("%f", &temperatura);
            printf("El valor es: %.2f F\n", tempFahrenheit(temperatura));
            break;
        case 3: printf("Gracias por usar la aplicacion\n"); break;
        default: printf("Opcion incorrecta\n"); break;
        }
    } while (opcion != 3);
    

    // Procesamos los datos y los mostramos por pantalla

    return 0;
}
