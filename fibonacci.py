#variable num la pone el usuario
num= int(input("Numeros de la serie a mostrar: "))
#la x es el primer numero de la serie
x=0
#la y es el segundo numero de la serie
y=1
#se muestra el primer numero de la serie
print(x)
#se muestra el segundo numero de la serie
print(y)
#se hace un ciclo para mostrar el resto de la serie
for i in range(2,num):
    #se hace la suma de los dos numeros anteriores para obtener el siguiente numero de la serie
    z=x+y
    #se muestra el siguiente numero de la serie
    print(z)
    #se actualizan los valores de x e y para el siguiente ciclo
    x=y
    y=z