#include <stdio.h>

float trenLigero(float *p_sueldo, int *p_acuTren){

    int viaje;

    if (*p_sueldo < 3)
    {
        printf("No puedes rentar un Tren Ligero con tu saldo actual");
    }else{
        *p_sueldo -= 3;
        *p_acuTren += 1;
        printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
        printf("1) Si\n2) No : ");
        scanf("%d", &viaje);

        switch (viaje)
        {
        case 1:
            if (*p_sueldo < 3)
            {
                printf("No puedes rentar un billete para el Tren Ligero con tu saldo actual\n");
            }else{
                *p_sueldo -= 3;
                *p_acuTren += 1;
                printf("Se desconto otra renta de Tren Ligero\n");
            }break;
        case 2:
            printf("Gracias por viajar en Tren Ligero\n"); break;
        default: printf("No es un caso valido");
            break;
        }
    }
    

    return *p_sueldo, *p_acuTren;
}