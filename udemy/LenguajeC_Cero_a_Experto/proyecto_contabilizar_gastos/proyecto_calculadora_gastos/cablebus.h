#include <stdio.h>

float cablebus(float *p_sueldo, int *p_acuCable){

    int viaje;

    if (*p_sueldo < 5)
    {
        printf("No puedes usar el cablebus con tu saldo actual\n");
    }else{
        *p_sueldo -= 5;
        *p_acuCable += 1;
        printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
        printf("1) Si 2) No\n");
        scanf("%d", &viaje);

        switch (viaje)
        {
        case 1:
            if (*p_sueldo > 5)
            {
                *p_sueldo -= 5;
                *p_acuCable += 5;
                printf("Se desconto otro viaje de Cablebus\n");
            }else{
                printf("No puedes viajar de nuevo con tu saldo actual\n");
            }break;
        case 2:
            printf("Gracias por viajar en el Cablebus\n");
            break;
        default:
            printf("No es un caso valido\n");
            break;
        }
    }

    return *p_sueldo, *p_acuCable;
}