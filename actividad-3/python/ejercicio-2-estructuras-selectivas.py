# Solicitar al usuario que ingrese una calificación
calificacion = float(input("Ingresa una calificación: "))

# Comprobar la calificación y mostrar el resultado correspondiente
if calificacion < 0 or calificacion > 10:
    print("Error")
elif calificacion == 10:
    print("Excelente")
elif calificacion == 9:
    print("Muy bien")
elif calificacion == 8:
    print("Bien")
elif calificacion == 7:
    print("Regular")
elif 0 <= calificacion <= 6:
    print("No acreditado")
else:
    print("Calificación no válida")