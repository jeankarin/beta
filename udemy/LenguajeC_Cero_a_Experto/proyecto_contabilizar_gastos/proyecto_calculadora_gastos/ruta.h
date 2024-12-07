#include <stdio.h>

float ruta(float *p_sueldo, int *p_acuRuta){

    int viaje;

    if (*p_sueldo < 5.5)
    {
        printf("No puedes rentar una ruta con tu saldo actual");
    }else{
        *p_sueldo -= 5.5;
        *p_acuRuta += 1;
        printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
        printf("1) Si\n2) No : ");
        scanf("%d", &viaje);

        switch (viaje)
        {
        case 1:
            if (*p_sueldo < 5.5)
            {
                printf("No puedes rentar una ruta con tu saldo actual\n");
            }else{
                *p_sueldo -= 5.5;
                *p_acuRuta += 1;
                printf("Se desconto otra renta de ruta\n");
            }break;
        case 2:
            printf("Gracias por viajar en la ruta\n"); break;
        default: printf("No es un caso valido");
            break;
        }
    }
    

    return *p_sueldo, *p_acuRuta;
}