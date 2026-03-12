#include <stdio.h>
float saldo = 5000.00, deposito, retiro;
int opcion;
int main ()
{
    do
    {
        printf("\n=== CAJERO AUTOMÁTICO ===\n"); // Imprime el menú de opciones
        printf("1. Consultar saldo\n");
        printf("2. Depositar dinero\n");
        printf("3. Retirar dinero\n");
        printf("4. salir\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1: // Opción para consultar el saldo
            printf("Su saldo es: %.2f\n", saldo);
            break;
        case 2: // Opción para depositar dinero
            printf("Ingrese la cantidad a depositar: ");
            scanf("%f", &deposito);
            if ((int)deposito % 100 == 0 && deposito <= 20000.00) // Verifica si el depósito es múltiplo de $100 y no excede el límite de $20,000
            {
                saldo += deposito;
                printf("Deposito exitoso\n");// Si el depósito es válido, se suma al saldo y se muestra un mensaje de éxito
            }
            else // Si el depósito no es válido, se muestra un mensaje de error
            {
                printf("Cantidad invalida\n");
            }
            break;
        case 3: // Opción para retirar dinero
            printf("Ingrese la cantidad a retirar: ");
            scanf("%f", &retiro);
            if (retiro > saldo) // Verifica si el retiro es mayor que el saldo disponible
            {
                printf("Error. Saldo insuficiente... Te dicen el chavo del 24, porque estas el triple de jodido\n");
            }
            else if ((int)retiro % 50 != 0) // Verifica si el retiro es múltiplo de $50
            {
                printf("Error. El monto a retirar debe ser multiplo de $50\n");
            }
            else if (retiro < 50) // Verifica si el retiro es menor que el mínimo permitido de $50
            {
                printf("Error. El minimo de retiro es de $50\n");
            }
            else if (retiro > 5000) // Verifica si el retiro es mayor que el máximo permitido de $5000
            {
                printf("Error. El maximo de retiro es de $5000\n");
            }
            else // Si todas las condiciones son cumplidas, realiza el retiro y actualiza el saldo
            {
                saldo -= retiro;
                printf("Retiro exitoso, tu nuevo saldo es: %.2f\n", saldo);
            }
        default:
            break;
        }
    } while (opcion != 4); // El programa continuará ejecutándose hasta que el usuario elija la opción de salir (4)
    
}