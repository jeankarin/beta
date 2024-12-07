#include <stdio.h>

/* Un alumno desea saber cual será su calificacion final en la
materia algoritmos. Dicha clasificacion se compone de los 
siguientes porcentajes:

55% del promedio de sus tres calificaciones parciales.
30% de la calificacion del examen final.
15% de la calificacion de un trabajo final. */

int main(){
	
	// Declaramos las variables
	float p1, p2, p3, promedio_parcial, examen_final, trabajo_final;
	float promedio_parciales, promedio_examenes, promedio_trabajo_final, calificacion_final;
	
	// Solicitamos al usuario los datos
	printf("Escribe las calificaciones de los examenes parciales\n");
	scanf("%f %f %f", &p1, &p2, &p3);
	
	printf("Escribe la calificacion del examen final\n");
	scanf("%f", &examen_final);
	
	printf("Escribe la calificacion del trabajo final\n");
	scanf("%f", &trabajo_final);
	
	// Calculamos las calificaciones
	promedio_parcial = (p1 + p2 + p3) / 3;
	
	promedio_parciales = promedio_parcial * 0.55;
	promedio_examenes = examen_final * 0.30;
	promedio_trabajo_final = trabajo_final * 0.15;
	
	// Calificación final
	calificacion_final = promedio_parciales + promedio_examenes + promedio_trabajo_final;
	
	// Mostramos por pantalla
	printf("La calificacion final es: %.2f", calificacion_final);
	
	return 0;
}