#include <stdio.h>

char direccion[] = "D:\\LocalDev\\C\\proyecto_calculadora_gastos\\gastos.txt";
char direInstrucciones[] = "D:\\LocalDev\\C\\proyecto_calculadora_gastos\\instrucciones.txt";
FILE *archivo1, *archivo2;

float sueldo = 0;
int gasto = 0;
bool hola = true;
char letra, caracter, fecha[50];

int acuMetro = 0;
int acuCable = 0;
int acuEco = 0;
int acuRTP = 0;
int acuMBus = 0;
int acuRuta = 0;
int acuTren = 0;
int acuGas = 0;

float gastoGas = 0;

int *p_acuMetro;
int *p_acuCable;
int *p_acuEco;
int *p_acuRTP;
int *p_acuMBus;
int *p_acuRuta;
int *p_acuTren;
int *p_acuGas;
float *p_gastoGas;
float *p_sueldo;