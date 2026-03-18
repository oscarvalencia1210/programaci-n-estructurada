//arreglo que muestra menu
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mostrar_menu();
int arreglo [10];
int main()
{
    int opcion, elemento, posicion;
    srand(time(NULL));
    for(int i=0; i<5; i++){
        arreglo[i] = rand() % 100;
    }
    do{
        printf("\n");
        mostrar_menu();
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
                printf("Arreglo: ");
                for(int i=0; i<10; i++){
                    printf("%d ", arreglo[i]);
                }
                printf("\n");
                break;  
            case 2:
                printf("Ingrese un elemento al final: ");//agregar elemento en el primer espacio vacio
                scanf("%d", &elemento);
                for(int i=0; i<10; i++){
                    if(arreglo[i] == 0){
                        arreglo[i] = elemento;
                        break;
                    }
                    else if(i == 9){
                        printf("Arreglo lleno, no se puede agregar el elemento\n");
                    }
                }
                break;
            case 3:
                printf("Ingrese un elemento: ");
                scanf("%d", &elemento);
                printf("Ingrese la posicion (0-9): ");
                scanf("%d", &posicion);
                if(posicion >= 0 && posicion < 10){
                    arreglo[posicion] = elemento;
                } else {
                    printf("Posicion invalida\n");
                }
                break;
            case 4:
                printf("Ingrese la posicion (0-9) a eliminar: ");
                scanf("%d", &posicion);
                if(posicion >= 0 && posicion < 10){
                    arreglo[posicion] = 0; // Eliminar el elemento asignando 0
                } else {
                    printf("Posicion invalida\n");
                }
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while(opcion != 5);
    return 0;
}
void mostrar_menu(){
    printf("1. Mostrar arreglo\n");
    printf("2. Agregar elemento al final\n");
    printf("3. Insertar elemento en posicion especifica\n");
    printf("4. Eliminar elemento en posicion especifica\n");
    printf("5. Salir\n");
}