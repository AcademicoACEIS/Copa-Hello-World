# Copa Hello World - Programación - Intermedio 1 (Python)
# Reemplaza cada ___N___ para que el programa funcione. No cambies el resto del código.

n = int(input())
numeros = []
i = 0
while i < n:
    numeros.append(int(input()))
    i = i + 1

mayor = numeros[___1___]
i = 1

while i ___2___ n:
    if numeros[i] ___3___ mayor:
        mayor = numeros[___4___]
    i = i + 1

print(mayor)
