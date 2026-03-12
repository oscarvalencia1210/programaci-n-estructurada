// Librerias
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Necesaria para isalpha()

// Declarar Funciones
void solicitarNombre(char nombre[]);
float solicitarPeso();
int edadSolicitar();
float alturaSolicitar();
void mostrar_salida(char * nombre, int edad, float peso, float altura_m, float imc);
void resultados(float imc);

// Funcion principal
int main() 
{
    char nombre[50];
    int edad;
    float peso, imc, altura;

    // ---------- Entrada de datos ----------
    // Nombre
    solicitarNombre(nombre);

    // Edad (Ernesto)
    edad = edadSolicitar();

    // Peso (Santiago)
    peso = solicitarPeso();
     	
    // Altura (Froylan)
    altura = alturaSolicitar();

    // ---------- Procesamiento ----------
    imc = peso / (altura * altura);

    // ---------- Salida (Samara) ----------
    mostrar_salida(nombre, edad, peso, altura, imc);
  
    // ---------- Diagnóstico (Oscar) ---------- 
    resultados(imc);
    
    return 0;
}

// FUNCIONES

void solicitarNombre(char nombre[]) {
    int esValido;
    do {
        esValido = 1; // Asumimos que es válido al principio
        printf("Ingrese el nombre del paciente: ");
        fgets(nombre, 50, stdin);
        nombre[strcspn(nombre, "\n")] = '\0'; // Quitar salto de línea

        if (strlen(nombre) == 0) {
            printf("Nombre invalido. Intente de nuevo.\n");
            esValido = 0;
            continue;
        }

        // Validar que solo contenga letras y espacios
        for (int i = 0; i < strlen(nombre); i++) {
            if (!isalpha(nombre[i]) && nombre[i] != ' ') {
                printf("Error: El nombre solo debe contener letras y espacios.\n");
                esValido = 0;
                break; // Salir del for si encuentra un error
            }
        }
    } while (!esValido);
}

int edadSolicitar() {
    int edad;
    char entrada[50];
    char extra;
    int valido;
    do {
        valido = 0;
        printf("Ingrese la edad (1-120 anios): ");
        fgets(entrada, sizeof(entrada), stdin);
        
        // Verifica que extraiga un entero y que lo siguiente sea exactamente el salto de linea
        if (sscanf(entrada, "%d%c", &edad, &extra) == 2 && extra == '\n') {
            if (edad >= 1 && edad <= 120) {
                valido = 1;
            } else {
                printf("Error: Edad fuera de rango.\n");
            }
        } else {
            printf("Error: Entrada invalida. Por favor, ingrese SOLO numeros enteros.\n");
        }
    } while (!valido);
    return edad;
}

// Santiago: peso
float solicitarPeso() {
    float peso;
    char entrada[50];
    char extra;
    int valido;
    do {
        valido = 0;
        printf("Ingrese el peso en kg (20-300): ");
        fgets(entrada, sizeof(entrada), stdin);
        
        if (sscanf(entrada, "%f%c", &peso, &extra) == 2 && extra == '\n') {
            if (peso >= 20.0 && peso <= 300.0) {
                valido = 1;
            } else {
                printf("Error: Peso fuera de rango.\n");
            }
        } else {
            printf("Error: Entrada invalida. Por favor, ingrese SOLO numeros.\n");
        }
    } while (!valido);
    return peso;
}

// Froylan: altura
float alturaSolicitar() {
    float altura_cm, altura_m;
    char entrada[50];
    char extra;
    int valido;
    do {
        valido = 0;
        printf("Ingrese la altura en cm (50-250): ");
        fgets(entrada, sizeof(entrada), stdin);
        
        if (sscanf(entrada, "%f%c", &altura_cm, &extra) == 2 && extra == '\n') {
            if (altura_cm >= 50.0 && altura_cm <= 250.0) {
                valido = 1;
            } else {
                printf("Error: Altura fuera de rango.\n");
            }
        } else {
            printf("Error: Entrada invalida. Por favor, ingrese SOLO numeros.\n");
        }
    } while (!valido);
    
    altura_m = altura_cm / 100.0;
    return altura_m;
}

// Oscar: resultados/CÁLCULOS IMC
void resultados(float imc) {
    printf("Diagnostico   : ");
    if (imc <= 18.5) {
        printf("BAJO PESO\n\n");
    }
    else if (imc <= 24.9) {
        printf("PESO NORMAL\n\n");
    }
    else if (imc <= 29.9) {
        printf("SOBREPESO\n\n");
    }
    else if (imc <= 34.9) {
        printf("OBESIDAD TIPO 1\n\n");
    }
    else if (imc <= 39.9) {
        printf("OBESIDAD TIPO 2\n\n");
    }
    else if (imc >= 40.0) {
        printf("OBESIDAD TIPO 3\n\n");
    }
    else {
        printf("DATOS INVALIDOS\n\n");
    }
}

// Función salida Samara
void mostrar_salida(char * nombre, int edad, float peso, float altura_m, float imc) {
    printf("\n========================================\n");
    printf("   INFORME DE DIAGNOSTICO IMC\n");
    printf("========================================\n");
    printf("Paciente : %s\n", nombre);
    printf("Edad     : %d anios\n", edad);
    printf("Peso     : %.2f kg\n", peso);
    printf("Altura   : %.2f m\n", altura_m);
    printf("\nRESULTADOS:\n");
    printf("IMC calculado : %.2f\n", imc);
}

