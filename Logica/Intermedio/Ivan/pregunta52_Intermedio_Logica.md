# Pregunta 52 — Encontrar el error

**Nivel:** Medio · **Puntos:** 20 · **Tipo:** ERR  
**Tema:** 5.2 Validación con while

## Enunciado

El algoritmo debe volver a pedir una edad mientras sea menor que 0. ¿Cuál es el error?

```text
READ edad
WHILE edad >= 0 DO
  WRITE "Edad inválida"
  READ edad
END WHILE
```

## Respuesta

La condición está invertida. Con `edad >= 0`, una edad válida mantiene el ciclo. Debe ser `WHILE edad < 0 DO`.