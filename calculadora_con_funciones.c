#include <stdio.h>
void menu();
int opcion;
float num1, num2, suma, resta, multiplicacion, division;
int main(){
    do{
    menu();
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("---Suma---\n");
        printf("Ingrese el primer numero: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &num2);
        suma = num1 + num2;
        printf("La suma de tus numeros es: %.2f", suma);
        break;
    case 2:
        printf("---Resta---\n");
        printf("Ingresa el primer numero: ");
        scanf("%f", &num1);
        printf("Ingresa el segundo numero: ");
        scanf("%f", &num2);
        resta = num1 - num2;
        printf("La resta de tus numeros es: %.2f", resta);
        break;
    case 3:
        printf("---Multiplicacion---\n");
        printf("Ingresa el primer numero: ");
        scanf("%f", &num1);
        printf("Ingresa el segundo numero:  ");
        scanf("%f", &num2);
        multiplicacion = num1 * num2;
        printf("La multiplicacion de tus numeros es %.2f", multiplicacion);
        break;
    case 4:
        printf("---Division---\n");
printf("Ingresa el numero a dividir (dividendo): ");
    scanf("%f", &num1);
    // Usamos do-while para validar el segundo número
    do {
        printf("Ingresa el numero entre el cual dividir (divisor): ");
        scanf("%f", &num2);

        // Si es 0, mostramos el error
        if (num2 == 0) {
            printf("Error: No se puede dividir entre 0. Por favor, intenta de nuevo.\n\n");
        }
        
    // El bucle se repite MIENTRAS el número ingresado sea 0
    } while (num2 == 0);
    // Una vez que sale del bucle (porque numero2 ya no es 0), hacemos la división
    division = num1 / num2;
    printf("El resultado de la división es: %.2f\n", division);
        break;
    case 5:
        printf("Saliendo del programa...");
        break;
    default:
        break;
    }
    }while (opcion != 5);
return 0;
}
void menu(){
    printf("\n--- Calculadora ---\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Salir\n");
}