#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int opcion = 0;
    int puntuacion = 0;

    srand(time(NULL));

    do {
        printf("\n--- MENU ---\n");
        printf("1: Jugar a adivinar numeros\n");
        printf("2: Ver puntuacion\n");
        printf("3: Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        if (opcion == 1) {
            int numero_secreto = (rand() % 50) + 1;
            int intentos = 5;
            int adivinado = 0;
            int intento_jugador;
            do 
            {
                printf("\nIntentos restantes: %d\n", intentos);
                printf("Ingresa un numero entre 1 y 50: ");
                scanf("%d", &intento_jugador);
                if (intento_jugador == numero_secreto) 
                {
                    printf("¡Felicidades! Has adivinado el numero.\n");
                    puntuacion += 10;
                    adivinado = 1;
                }
                else {
                    if (numero_secreto > intento_jugador) 
                    {
                        printf("Pista: el numero es mayor.\n");
                    } else 
                    {
                        printf("Pista: el numero es menor.\n");
                    }
                    intentos--;
                }
            }while (intentos > 0 && adivinado == 0);
            if (adivinado == 0) {
                printf("\nHas fallado. El numero correcto era: %d\n", numero_secreto);
            }
            
        } else if (opcion == 2) {
            printf("\nPuntuacion acumulada: %d puntos\n", puntuacion);
            
        } else if (opcion == 3) {
            printf("\nSaliendo del juego...\n");
            
        } else {
            printf("\nOpcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 3);
    return 0;
}