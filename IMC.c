#include <stdio.h>
char nombre[20];
int edad;
float peso, alturametros, altura, IMC;
int main()
{
    //PEDIMOS DATOS PERSONALES
    printf("Ingresa tu primer nombre\n");
    scanf("%s", nombre);
    printf("Hola %s, ingresa tu edad: ", nombre);
    scanf("%d", &edad);
    printf("\nAhora ingresa tu peso en kilogramos: ");
    scanf("%f", &peso);
    printf("\nMuy bien, %s, ahora ingresa tu altura en centimetros: ", nombre);
    scanf("%f", &altura);
    
    alturametros = altura / 100;
    IMC = peso / (alturametros * alturametros);
    printf("==============================\n");
    printf("         DIAGNOSTICO          \n");
    printf("==============================\n");
    printf("Nombre: %s\nEdad: %d\nPeso: %.2f\nAltura: %.2f\n\n", nombre, edad, peso, alturametros);//DELIMITAMOS A 2 DECIMALES CON .2f
    //HACER CALCULOS DEL IMC
    if (IMC <= 18.5){
        printf("RESULTADOS\n");
        printf("IMC calculado: %.2f", IMC);
        printf("\nBAJO PESO\n\n");
    }
    else if (IMC >= 18.6 && IMC <= 24.9){
        printf("RESULTADOS\n");
        printf("IMC calculado: %.2f", IMC);
        printf("\nPESO NORMAL\n\n");
    }
    else if (IMC >= 25.0 && IMC <= 29.9){
        printf("RESULTADOS\n");
        printf("IMC calculado: %.2f", IMC);
        printf("\nSOBREPESO\n\n");
    }
    else if (IMC >= 30.0 && IMC <= 34.9){
        printf("RESULTADOS\n");
        printf("IMC calculado: %.2f", IMC);
        printf("\nOBESIDAD TIPO 1\n\n");
    }
    else if (IMC >= 35.0 && IMC <= 39.9){
        printf("RESULTADOS\n");
        printf("IMC calculado: %.2f", IMC);
        printf("\nOBESIDAD TIPO 2\n\n");
    }
    else if (IMC >= 40.0){
        printf("RESULTADOS\n");
        printf("IMC calculado: %.2f", IMC);
        printf("\nOBESIDAD TIPO 3\n\n");
    }
    else{
        printf("DATOS INVALIDOS\n\n");
    }
    return 0;
}