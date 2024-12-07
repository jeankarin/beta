#include <stdio.h>

float rtp(float *p_sueldo, int *p_acuRTP){
    
    int viaje;
    
    if (*p_sueldo < 3)
    {
        printf("No tienes saldo suficiente para usar el rpt\n");
    }else{
        *p_sueldo -= 3;
        *p_acuRTP += 1;

        printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
        printf("1) Si\n2) No");
        scanf("%d", &viaje);

        switch (viaje)
        {
        case 1:
            if (*p_sueldo < 3)
            {
                printf("No puedes pasar de nuevo con tu sueldo actual\n");
            }else{
                *p_sueldo -= 3;
                *p_acuRTP += 1;
                printf("Ya se desconto otro viaje de rtp\n");
            }break;
        case 2:
            printf("Gracias por viajar en rtp\n");
            break;
        default:
            printf("No es un caso valido");
            break;
        }
    }

    return *p_sueldo, *p_acuRTP;
}