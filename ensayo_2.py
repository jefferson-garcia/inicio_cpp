# Vamos a crear una simple función que recibe números decide quién es mayor.

def mayor(a, b):
    if a>b:
        return a
    return b

numero_1 = int(input("Digite un número: "))
numero_2 = int(input("Digite otro número: "))

print(f"El número mayor es {mayor(numero_1, numero_2)})
