# Pregunta 40 — Encontrar el error

**Nivel:** Fácil · **Puntos:** 15 · **Tipo:** ERR  
**Tema:** 3.3 Inicialización de acumulador

## Enunciado

El algoritmo debe sumar tres números ingresados. ¿Cuál es el error?

```text
READ numero
suma = 0
suma = suma + numero
READ numero
suma = 0
suma = suma + numero
READ numero
suma = 0
suma = suma + numero
WRITE suma
```

## Respuesta

El acumulador se reinicia a 0 antes de agregar cada dato, por lo que al final solo conserva el último número. `suma = 0` debe ejecutarse una sola vez, antes de las tres lecturas.