#include <stdio.h>

float metro(float *p_sueldo, int *p_acuMetro){
    
    int viaje;
    
    if (*p_sueldo < 5)
    {
        printf("No tienes saldo suficiente para usar el metro\n");
    }else{
        *p_sueldo -= 5;
        *p_acuMetro += 1;

        printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
        printf("1) Si\n2) No");
        scanf("%d", &viaje);

        switch (viaje)
        {
        case 1:
            if (*p_sueldo < 5)
            {
                printf("No puedes pasar de nuevo con tu sueldo actual\n");
            }else{
                *p_sueldo -= 5;
                *p_acuMetro += 1;
                printf("Ya se desconto otro viaje de metro\n");
            }break;
        case 2:
            printf("Gracias por viajar en metro\n");
            break;
        default:
            printf("No es un caso valido");
            break;
        }
    }

    return *p_sueldo, *p_acuMetro;
}