# Copa Hello World - Programación - Intermedio 2 (Python)
# Reemplaza cada ___N___ para que el programa funcione. No cambies el resto del código.

def es_primo(n):
    if n < 2:
        return 0
    i = ___1___
    while i * i ___2___ n:
        if n ___3___ i == 0:
            return ___4___
        i = i + 1
    return ___5___


limite = int(input())
contador = 0
numero = 1

while numero <= limite:
    if es_primo(numero) == 1:
        contador = contador + 1
    numero = numero + 1

print(contador)
