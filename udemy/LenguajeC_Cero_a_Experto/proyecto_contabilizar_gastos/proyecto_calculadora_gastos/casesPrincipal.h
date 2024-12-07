#include <stdio.h>

switch (gasto)
{
case 1:
    printf("Seleccionaste metro\n\n");
    metro(p_sueldo,p_acuMetro);
    printf("TU sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *p_sueldo);
    break;
case 2:
    printf("Seleccionaste Cablebus\n\n");
    cablebus(p_sueldo,p_acuCable);
    printf("TU sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *p_sueldo);
    break;
case 3:
    printf("Seleccionaste Ecobici\n\n");
    ecobici(p_sueldo,p_acuCable);
    printf("TU sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *p_sueldo);
    break;
case 4:
    printf("Seleccionaste RTP\n\n");
    rtp(p_sueldo,p_acuRTP);
    printf("TU sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *p_sueldo);
    break;
case 5:
    printf("Seleccionaste Metrobus\n\n");
    metrobus(p_sueldo,p_acuMBus);
    printf("TU sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *p_sueldo);
    break;
case 6:
    printf("Seleccionaste Ruta\n\n");
    ruta(p_sueldo,p_acuRuta);
    printf("TU sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *p_sueldo);
    break;
case 7:
    printf("Seleccionaste Tren Ligero\n\n");
    trenLigero(p_sueldo,p_acuTren);
    printf("TU sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *p_sueldo);
    break;
case 8:
    printf("Seleccionaste gasolina\n\n");
    gasolina(p_sueldo, p_acuGas, p_gastoGas);
    break;
case 9:
    printf("Seleccionaste Instrucciones\n\n");
    archivo1 = fopen(direInstrucciones,"r+");

    if (archivo1 == NULL)
    {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    while ((caracter = fgetc(archivo1)) != EOF)
    {
        printf("%c", caracter);
    }
    fclose(archivo1);
    break;
case 10:
    printf("Servicio\tVIajes\t\tMonto Gastado\n");
    printf("Metro\t%d\t\t%d\n", *p_acuMetro, (*p_acuMetro * 5));
    printf("Cablebus\t%d\t\t%d\n", *p_acuCable, (*p_acuCable * 5));
    printf("Ecobici\t%d\t\t%d\n", *p_acuEco, (*p_acuEco * 13));
    printf("RTP\t%d\t\t%d\n", *p_acuRTP, (*p_acuRTP * 3));
    printf("Metrobus\t%d\t\t%d\n", *p_acuMBus, (*p_acuMBus * 6));
    printf("Ruta\t%d\t\t%0.2f\n", *p_acuRuta, (*p_acuRuta * 5.5));
    printf("Tren Ligero\t%d\t\t%d\n", *p_acuTren, (*p_acuTren * 3));
    printf("Gasolina\t%d\t\t%0.2f\n", *p_acuGas, *p_gastoGas);
    printf("\nSu saldo restante es: %0.2f\n\n", *p_sueldo);
    break;
case 11:
    archivo2 = fopen(direccion,"at");

    if (archivo2 == NULL)
    {
        printf("Error al crear el archivo\n");
        return 1;
    }
    printf("Escribe la fecha: ");
    fflush(stdin);
    fgets(fecha,50,stdin);
    printf("El archivo de texto ha sido creado/actualizado\n");
    printf("con el nombre de gastos.txt\n");

    fprintf(archivo2,"Servicio\tVIajes\t\tMonto Gastado\n");
    fprintf(archivo2,"Metro\t\t%d\t\t%d\n", *p_acuMetro, (*p_acuMetro * 5));
    fprintf(archivo2,"Cablebus\t\t%d\t\t%d\n", *p_acuCable, (*p_acuCable * 5));
    fprintf(archivo2,"Ecobici\t\t%d\t\t%d\n", *p_acuEco, (*p_acuEco * 13));
    fprintf(archivo2,"RTP\t\t%d\t\t%d\n", *p_acuRTP, (*p_acuRTP * 3));
    fprintf(archivo2,"Metrobus\t\t%d\t\t%d\n", *p_acuMBus, (*p_acuMBus * 6));
    fprintf(archivo2,"Ruta\t\t%d\t\t%0.2f\n", *p_acuRuta, (*p_acuRuta * 5.5));
    fprintf(archivo2,"Tren Ligero\t\t%d\t\t%d\n", *p_acuTren, (*p_acuTren * 3));
    fprintf(archivo2,"Gasolina\t\t%d\t\t%0.2f\n", *p_acuGas, *p_gastoGas);
    fprintf(archivo2,"\nSu saldo restante es: %0.2f\n\n", *p_sueldo);
    fclose(archivo2);
    break;
case 0:
    printf("Gracias por usar el programa :)\n");
    hola = false;
    break;
default: printf("Esa opcion no es valida");
    break;
}