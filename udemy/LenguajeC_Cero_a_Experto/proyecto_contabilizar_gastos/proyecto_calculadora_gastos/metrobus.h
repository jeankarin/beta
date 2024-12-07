#include <stdio.h>

float metrobus(float *p_sueldo, int *p_acuMBus){
    
    int viaje;
    
    if (*p_sueldo < 6)
    {
        printf("No tienes saldo suficiente para usar el metrobus\n");
    }else{
        *p_sueldo -= 6;
        *p_acuMBus += 1;

        printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
        printf("1) Si\n2) No");
        scanf("%d", &viaje);

        switch (viaje)
        {
        case 1:
            if (*p_sueldo < 6)
            {
                printf("No puedes pasar de nuevo con tu sueldo actual\n");
            }else{
                *p_sueldo -= 6;
                *p_acuMBus += 1;
                printf("Ya se desconto otro viaje de metrobus\n");
            }break;
        case 2:
            printf("Gracias por viajar en metrobus\n");
            break;
        default:
            printf("No es un caso valido");
            break;
        }
    }

    return *p_sueldo, *p_acuMBus;
}