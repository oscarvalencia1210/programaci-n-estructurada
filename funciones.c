#include <stdio.h>
int sumar(int a, int b);//declaracion de la funcion
int numeromagico();
void saludar();
void mostraredad(int edad);
int main()//funcion principal
{
    int resultado;
    resultado = sumar(5, 10);//llamada a la funcion
    printf("\nEl resultado de la suma es: %d", resultado);
    printf("\nEl numero magico es: %d", numeromagico());
    mostraredad(25);
    saludar();
    return 0;
}
//funcion con parametros y retorno de la funcion
int sumar(int a, int b) {
    int suma;
    suma = a + b;
    return suma;
}
//con parametros y sin retorno de la funcion
void mostraredad(int edad) {
    printf("\nLa edad es: %d", edad);
}
//sin parametros y con retorno de la funcion
int numeromagico() {
    int numero = 22;
    return numero;
}
//sin parametros y sin retorno de la funcion
void saludar() {
    printf("\nHola, mundo!");
}