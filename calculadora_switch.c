#include <stdio.h>
float divi, multi, suma, resta, num1, num2;
int opcion;
int main()
{
    printf("Ingresa el primer numero\n");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%f", &num2);

    printf("Ingrese la operacion que quiera realizar\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        suma = num1 + num2;
        printf("La suma de su numero es %.2f", suma);
        break;
    case 2:
        resta = num1 - num2;
        printf("La resta de su numero es %.2f", resta);
        break;
    case 3:
        multi = num1 * num2;
        printf("La multiplicacion de su numero es %.2f", multi);
        break;
    case 4:
    if ("num2 == 0"){
        printf("Error. No se puede dividir entre 0\n");
    }
        divi = num1 / num2;
        printf("La division de su numero es %.2f", divi);
        break;
    default:
            printf("Opcion invalida");
        break;
    }
    return 0;
}