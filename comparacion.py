num1 = float(input("Ingresa el primer numero\n"))
num2 = float(input("Ingresa el segundo numero\n"))
num3 = float(input("Ingresa el tercer numero\n"))

if num1 > num2:
    print(f"El numero {num1} es mayor que {num2}")
elif num1 < num2:
    print(f"El numero {num1} es menor que {num2}")
else:
    print(f"El numero {num1} es igual a {num2}")

if num1 > num3:
    print(f"El numero {num1} es mayor que {num3}")
elif num1 < num2:
    print(f"El numero {num1} es menor que {num3}")
else:
    print(f"El numero {num1} es igual a {num3}")

if num2 > num3:
    print(f"El numero {num2} es mayor que {num3}")
elif num1 < num2:
    print(f"El numero {num2} es menor que {num3}")
else:
    print(f"El numero {num2} es igual a {num3}")