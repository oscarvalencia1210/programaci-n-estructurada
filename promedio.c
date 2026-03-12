#include <stdio.h>
float numero1, numero2, numero3, suma, promedio;

int main()
{
    printf("Ingresa primer calificacion\n");
    scanf("%f", &numero1);
    printf("Ingresa primer calificacion\n");
    scanf("%f", &numero2);
    printf("Ingresa primer calificacion\n");
    scanf("%f", &numero3);
    suma = numero1 + numero2 + numero3;
    promedio = suma / 3;

    printf("Su promedio es %f", promedio);
    return 0;

}