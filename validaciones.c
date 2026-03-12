#include <stdio.h>

int main() {
int opcion = 0;
int edad = 0;
int calificacion = 0;
char c;
int longitud;
int es_valido;

while (opcion != 4) {
    printf("\n--- MENU ---\n");
    printf("1. Validar edad (18 y 80, numero positivo)\n");
    printf("2. Validar calificacion (0 y 100, numero positivo)\n");
    printf("3. Validar nombre (solo texto 40 caracteres)\n");
    printf("4. Salir\n");
    printf("Seleccione una opcion: ");

    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese la edad: ");
        scanf("%d", &edad);
        if (edad >= 18 && edad <= 80) {
            printf("Edad valida.\n");
        } else {
            printf("Edad invalida. Debe ser un numero entre 18 y 80.\n");
            while(getchar() != '\n'); //limpiar el buffer de entrada
            continue; //volver al inicio del ciclo
        }
    } else if (opcion == 2) {
        printf("Ingrese la calificacion: ");
        scanf("%d", &calificacion);
        if (calificacion >= 0 && calificacion <= 100) {
            printf("Calificacion valida.\n");
        } else {
            printf("Calificacion invalida. Debe ser un numero entre 0 y 100.\n");
            while(getchar() != '\n'); //limpiar el buffer de entrada
            continue; //volver al inicio del ciclo
        }
    } else if (opcion == 3) {
        printf("Ingrese el nombre: ");

        while ((c = getchar()) != '\n' && c != EOF);

        longitud = 0;
        es_valido = 1;

        while ((c = getchar()) != '\n' && c != EOF) {
            if (longitud < 40) {
                if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == ' ')) {
                    es_valido = 0;
                }
            } else {
                es_valido = 0;
            }
            longitud++;
        }

        if (longitud == 0 || longitud > 40) {
            es_valido = 0;
        }

        if (es_valido == 1) {
            printf("Nombre valido.\n");
        } else {
            printf("Nombre invalido. Solo se permiten letras y espacios, con un maximo de 40 caracteres.\n");
        }
    } else if (opcion == 4) {
        printf("Saliendo del programa...\n");
    } else {
        printf("Opcion invalida. Intente de nuevo.\n");
    }
}

return 0;
}