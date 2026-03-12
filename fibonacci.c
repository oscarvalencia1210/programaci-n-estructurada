#include <stdio.h>

int repeticiones; //mostrar cuantos numeros de la serie se van a mostrar
int main()
{
    int a = 0, b = 1, c; //inicializamos los dos primeros numeros de la serie
    printf("Cuantos numeros de la serie de Fibonacci quieres mostrar? ");
    if(scanf("%d", &repeticiones) != 1) //validar si la entrada es un numero entero
    {
        printf("Entrada invalida. Por favor, ingresa un numero entero.\n");
        return 1; //salimos del programa con un codigo de error
    } 
    //validar si el numero de repeticiones es negativo
    if (repeticiones <= 0) 
    {
        printf("El numero de repeticiones no puede ser negativo.\n");
        return 1; //salimos del programa con un codigo de error
    }
    printf("Serie de Fibonacci: ");
    for (int i = 0; i < repeticiones; i++) 
    {
        printf("%d ", a); //imprimimos el numero actual
        c = a + b; //calculamos el siguiente numero
        a = b; //actualizamos a
        b = c; //actualizamos b
    }
    printf("\n");
    return 0;
}
