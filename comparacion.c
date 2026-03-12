#include <stdio.h>
int num1, num2, num3;
int main()
{
    printf("Ingresa el primer numero entero\n");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero entero\n");
    scanf("%d", &num2);
    printf("Ingresa el tercer numero entero\n");
    scanf("%d", &num3);

    if (num1 > num2)
    printf("El numero %d es mayor a %d\n", num1, num2);
    else if (num1==num2){
        printf("El numero %d es igual a %d\n", num1, num2);
    }
    else{
        printf ("El numero %d es menor a %d\n", num1, num2);
    }
    if (num1 > num3)
    printf("El numero %d es mayor a %d\n", num1, num3);
    else if (num1==num3){
        printf("El numero %d es igual a %d\n", num1, num3);
    }
    else{
        printf("El numero %d es menor a %d\n", num1, num3);
    }
    if (num2 > num3)
    printf("El numero %d es mayor a %d\n", num2, num3);
    else if (num2==num3){
        printf("El numero %d es igual a %d\n", num2, num3);
    }
    else{
        printf("El numero %d es menor a %d\n", num2, num3);
    }
    return 0;
}