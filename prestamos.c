#include <stdio.h>

int main() {
    // Declaración de variables
    char nombre[50];
    float monto, tasa_anual, tasa_mensual, pago_mensual, total_pagar, total_intereses;
    int plazo, i;
    int nombre_valido, monto_valido, tasa_valida, plazo_valido;
    
    printf("=== CALCULADORA DE PRESTAMO ===\n\n");
    
    // SOLICITAR NOMBRE
    do {
        nombre_valido = 1;
        printf("Nombre del cliente: ");
        fgets(nombre, sizeof(nombre), stdin);
        
        // Eliminar el salto de línea
        for (i = 0; nombre[i] != '\0'; i++) {
            if (nombre[i] == '\n') {
                nombre[i] = '\0';
                break;
            }
        }
        
        // Verificar longitud
        int longitud = 0;
        while (nombre[longitud] != '\0') {
            longitud++;
        }
        
        if (longitud < 3 || longitud > 40) {
            printf("Error: Nombre invalido. Use solo letras (3-40 caracteres)\n");
            nombre_valido = 0;
            continue;
        }
        
        // Verificar que solo tenga letras y espacios
        for (i = 0; nombre[i] != '\0'; i++) {
            char c = nombre[i];
            if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')) {
                printf("Error: Nombre invalido. Use solo letras (3-40 caracteres)\n");
                nombre_valido = 0;
                break;
            }
        }
    } while (!nombre_valido);
    
    // SOLICITAR MONTO
    do {
        monto_valido = 1;
        printf("Monto solicitado ($1000 - $100000): ");
        scanf("%f", &monto);
        
        // Limpiar el buffer
        while (getchar() != '\n');
        
        if (monto < 1000 || monto > 100000) {
            printf("Error: Monto debe ser entre $1,000 y $100,000\n");
            monto_valido = 0;
        }
    } while (!monto_valido);
    
    // SOLICITAR TASA
    do {
        tasa_valida = 1;
        printf("Tasa de interes anual (%%5 - %%30): ");
        scanf("%f", &tasa_anual);
        
        // Limpiar el buffer
        while (getchar() != '\n');
        
        if (tasa_anual < 5 || tasa_anual > 30) {
            printf("Error: Tasa debe ser entre 5%% y 30%%\n");
            tasa_valida = 0;
        }
    } while (!tasa_valida);
    
    // SOLICITAR PLAZO
    do {
        plazo_valido = 1;
        printf("Plazo en meses (6 - 72): ");
        scanf("%d", &plazo);
        
        // Limpiar el buffer
        while (getchar() != '\n');
        
        if (plazo < 6 || plazo > 72) {
            printf("Error: Plazo debe ser entre 6 y 72 meses\n");
            plazo_valido = 0;
        }
    } while (!plazo_valido);
    
    // CÁLCULOS
    tasa_mensual = (tasa_anual / 100) / 12;
    
    // Calcular (1 + tasa_mensual)^(-plazo) manualmente
    float factor = 1 + tasa_mensual;
    float potencia = 1;
    
    // Calculamos factor^(-plazo) = 1 / (factor^plazo)
    for (i = 1; i <= plazo; i++) {
        potencia = potencia * factor;
    }
    float factor_negativo = 1 / potencia;
    
    // Fórmula del pago mensual
    pago_mensual = (monto * tasa_mensual) / (1 - factor_negativo);
    total_pagar = pago_mensual * plazo;
    total_intereses = total_pagar - monto;
    
    // MOSTRAR RESULTADOS
    printf("\n=== DETALLE DEL PRESTAMO ===\n");
    printf("Solicitante: %s\n", nombre);
    printf("Monto solicitado: $%.2f\n", monto);
    printf("Tasa anual: %.2f%%\n", tasa_anual);
    printf("Plazo: %d meses\n", plazo);
    printf("\n--- RESULTADOS ---\n");
    printf("Pago mensual: $%.2f\n", pago_mensual);
    printf("Total a pagar: $%.2f\n", total_pagar);
    printf("Total intereses: $%.2f\n", total_intereses);
    
    return 0;
}