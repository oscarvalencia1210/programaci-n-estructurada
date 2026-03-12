#PEDIMOS DATOS PERSONALES
print("Ingresa tu primer nombre")
nombre = input()

edad = int(input(f"Hola {nombre}, ingresa tu edad: "))

print("\nAhora ingresa tu peso en kilogramos: ", end="")
peso = float(input())

print(f"\nMuy bien, {nombre}, ahora ingresa tu altura en centimetros: ", end="")
altura = float(input())

altura_metros = altura / 100
imc = peso / (altura_metros ** 2)

print("=" * 30)
print("         DIAGNOSTICO          ")
print("=" * 30)
print(f"Nombre: {nombre}\nEdad: {edad} años\nPeso: {peso:.2f} Kg.\nAltura: {altura_metros:.2f} m\n") #DELIMITAMOS A 2 DECIMALES CON .2f

print("RESULTADOS")
print(f"IMC calculado: {imc:.2f}")
#HACER CALCULOS DEL IMC
if imc <= 18.5:
    print("\nBAJO PESO\n")
elif 18.6 <= imc <= 24.9:
    print("\nPESO NORMAL\n")
elif 25.0 <= imc <= 29.9:
    print("\nSOBREPESO\n")
elif 30.0 <= imc <= 34.9:
    print("\nOBESIDAD TIPO 1\n")
elif 35.0 <= imc <= 39.9:
    print("\nOBESIDAD TIPO 2\n")
elif imc >= 40.0:
    print("\nOBESIDAD TIPO 3\n")
else:
    print("DATOS INVALIDOS\n")