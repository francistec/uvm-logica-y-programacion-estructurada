# Solicitar al usuario que ingrese un número
numero = int(input("Ingresa un número: "))

# Comprobar si el número es par o impar
if numero % 2 == 0:
    print(f"{numero} es un número par.")
else:
    print(f"{numero} es un número impar.")