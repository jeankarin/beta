#include <stdio.h>

float ecobici(float *p_sueldo, int *p_acuEco){

    int viaje;

    if (*p_sueldo < 13)
    {
        printf("No puedes rentar una Ecobici con tu saldo actual");
    }else{
        *p_sueldo -= 13;
        *p_acuEco += 1;
        printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
        printf("1) Si\n2) No : ");
        scanf("%d", &viaje);

        switch (viaje)
        {
        case 1:
            if (*p_sueldo < 13)
            {
                printf("No puedes rentar una ecobici con tu saldo actual\n");
            }else{
                *p_sueldo -= 13;
                *p_acuEco += 1;
                printf("Se desconto otra renta de Ecobici\n");
            }break;
        case 2:
            printf("Gracias por viajar en la Ecobici\n"); break;
        default: printf("No es un caso valido");
            break;
        }
    }
    

    return *p_sueldo, *p_acuEco;
}