print("-------------------\n")
print("CALCULADORA\n")
print("-------------------\n")
num1 = float(input("Número 1: "))
num2 = float(input("Número 2: "))

print("Seleccione la operación a realizar:")
print("1. Suma")
print("2. Resta")
print("3. Multiplicación")
print("4. División")
operacion = int(input("Ingrese la operacion que quiera realizar: "))

match operacion:
    case 1:
        resultado = num1 + num2
        print(f"La suma de su número es: {resultado}")
    case 2:
        resultado = num1 - num2
        print(f"La resta de su número es: {resultado}")
    case 3:
        resultado = num1 * num2
        print(f"La multiplicación de su número es: {resultado}")
    case 4:
        if num2 != 0:
            resultado = num1 / num2
            print(f"La división de su número es: {resultado}")
        else:
            print("Error: No se puede dividir entre cero.")
    case _:
        print("Operación no válida. Por favor, seleccione una opción entre 1 y 4.")