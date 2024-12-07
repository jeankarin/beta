/*
operaciones aritmeticas
*/

// Pedir al usuario 2 números y
// tenemos que sumarlos, restarlos, multiplicarlos y dividirlos

int main(){

    // Declaramos las variables
    float num1,num2,suma,resta,multi,division;

    // Solicitamos los datos al usuario
    printf("Escribe 2 numeros \n");
    scanf("%f %f", &num1, &num2);

    // hacemos las operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;
    division = num1 / num2;

    // Mostramos los resultados por pantalla
    printf("La suma es %.2f\nla resta es %.2f\nla multi es %.2f\nla resta es %.2f\n", suma, resta, multi, division);

    return 0;
}
