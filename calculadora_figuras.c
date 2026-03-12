#include <stdio.h>
float pi = 3.1416;
void mostrar_menu();
int opcion;
float num1, num2;
float areaCuadrado(float lado);
float areaRectangulo(float base, float altura);
float areaCirculo(float radio);
float areaTriangulo(float base, float altura);
int validarPositivo(float numero);
int main()
{
    do
    {
        mostrar_menu();
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("---Area del cuadrado---\n");
            do {
                printf("Ingrese el lado del cuadrado: ");
                scanf("%f", &num1);
                if (!validarPositivo(num1)) {
                    printf("Error: El lado debe ser un numero positivo. Por favor, intenta de nuevo.\n\n");
                }
            } while (!validarPositivo(num1));
            printf("El area del cuadrado es: %.2f\n", areaCuadrado(num1));
            break;
        case 2:
            printf("---Area del rectangulo---\n");
            do {
                printf("Ingrese la base del rectangulo: ");
                scanf("%f", &num1);
                if (!validarPositivo(num1)) {
                    printf("Error: La base debe ser un numero positivo. Por favor, intenta de nuevo.\n\n");
                }
            } while (!validarPositivo(num1));
            do {
                printf("Ingrese la altura del rectangulo: ");
                scanf("%f", &num2);
                if (!validarPositivo(num2)) {
                    printf("Error: La altura debe ser un numero positivo. Por favor, intenta de nuevo.\n\n");
                }
            } while (!validarPositivo(num2));
            printf("El area del rectangulo es: %.2f\n", areaRectangulo(num1, num2));
            break;
        case 3:
            printf("---Area del circulo---\n");
            do {
                printf("Ingrese el radio del circulo: ");
                scanf("%f", &num1);
                if (!validarPositivo(num1)) {
                    printf("Error: El radio debe ser un numero positivo. Por favor, intenta de nuevo.\n\n");
                }
            } while (!validarPositivo(num1));
            printf("El area del circulo es: %.2f\n", areaCirculo(num1));
            break;
        case 4:
            printf("---Area del triangulo---\n");
            do {
                printf("Ingrese la base del triangulo: ");
                scanf("%f", &num1);
                if (!validarPositivo(num1)) {
                    printf("Error: La base debe ser un numero positivo. Por favor, intenta de nuevo.\n\n");
                }
            } while (!validarPositivo(num1));
            do {
                printf("Ingrese la altura del triangulo: ");
                scanf("%f", &num2);
                if (!validarPositivo(num2)) {
                    printf("Error: La altura debe ser un numero positivo. Por favor, intenta de nuevo.\n\n");
                }
            } while (!validarPositivo(num2));
            printf("El area del triangulo es: %.2f\n", areaTriangulo(num1, num2));
            break;
        case 5:
            printf("Saliendo del programa...");
            break;
        default:
            printf("Opcion no valida. Por favor, intenta de nuevo.\n\n");
            break;
        }
    } while (opcion != 5);
}
void mostrar_menu()
{
    printf("\n1. Area del cuadrado\n");
    printf("2. Area del rectangulo\n");
    printf("3. Area del circulo\n");
    printf("4. Area del triangulo\n");
    printf("5. Salir\n");
}
float areaCuadrado(float lado)
{
    return lado * lado;
}  
float areaRectangulo(float base, float altura)
{
    return base * altura;
}
float areaCirculo(float radio)
{
    return pi * radio * radio;
}
float areaTriangulo(float base, float altura)
{
    return 0.5 * base * altura;
}
int validarPositivo(float numero)
{
    return numero > 0;
}
