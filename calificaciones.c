#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  total_calif= 0, aprovado=0,reprovado=0,suma_estudiantes_aprovados=0,suma_estudiantes_reprovados=0, opcion;
    float calificacion, suma_calif_totales=0;
    do
    {
        printf("\n----MENU----");
        printf("\n1. INGRESAR CALIFICACION");
        printf("\n2. VER CALIFICACIONES");
        printf("\n3. REINICIAR DATOS");
        printf("\n4. SALIR\n");
        scanf("%d", &opcion);
        if (opcion == 1)
        {if(scanf("%f", &calificacion) != 1)
            printf("\nIngrese la calificacion del estudiante: ");
             //validar si la entrada es un numero flotante
            {
                printf("Entrada invalida. Por favor, ingresa un numero valido.\n");
                while(getchar() != '\n'); //limpiar el buffer de entrada
                continue; //volver al inicio del ciclo
            }
            if (calificacion < 0 || calificacion > 100) //validar si la calificacion esta en el rango permitido
            {
                printf("Calificacion invalida. Por favor, ingresa una calificacion entre 0 y 100.\n");
                continue; //volver al inicio del ciclo
            }
            if (calificacion >= 60 && calificacion <= 100)
            {
                aprovado++;
                suma_estudiantes_aprovados += calificacion;
            }
            else
            {
                reprovado++;
                suma_estudiantes_reprovados += calificacion;
            }
            total_calif++;
            suma_calif_totales += calificacion;
        }
        else if (opcion == 2)
        {
            printf("\nTotal de estudiantes: %d", total_calif);
            printf("\nEstudiantes aprovados: %d", aprovado);
            printf("\nEstudiantes reprovados: %d", reprovado);
            if (aprovado > 0)
                printf("\nPromedio de calificaciones aprovados: %.2f", suma_estudiantes_aprovados / aprovado);
            if (reprovado > 0)
                printf("\nPromedio de calificaciones reprovados: %.2f", suma_estudiantes_reprovados / reprovado);
            if (total_calif > 0)
                printf("\nPromedio general de calificaciones: %.2f", suma_calif_totales / total_calif);
        }
        else if (opcion == 3)
        {
            total_calif = 0;
            aprovado = 0;
            reprovado = 0;
            suma_estudiantes_aprovados = 0;
            suma_estudiantes_reprovados = 0;
            suma_calif_totales = 0;
            printf("\nDatos reiniciados.");
        }
        else if (opcion != 4)
        {
            printf("\nOpcion no valida. Intente de nuevo.");
        }
    } while (opcion != 4);
    return 0;
}