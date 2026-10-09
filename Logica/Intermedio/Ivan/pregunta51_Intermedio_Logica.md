# Pregunta 51 — Encontrar el error

**Nivel:** Medio · **Puntos:** 20 · **Tipo:** ERR  
**Tema:** 5.1 For + límites

## Enunciado

El algoritmo debe sumar los números del 1 al 5, inclusive. ¿Cuál es el error?

```text
suma = 0
FOR i = 1 TO 4 DO
  suma = suma + i
END FOR
WRITE suma
```

## Respuesta

El límite superior es 4, así que el ciclo omite el 5 y calcula 10. Debe cambiarse a `FOR i = 1 TO 5 DO`.