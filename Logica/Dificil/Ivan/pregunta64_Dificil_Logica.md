# Pregunta 64 — Encontrar el error

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** ERR  
**Tema:** 3.5 Validación con lógica booleana

## Enunciado

El algoritmo debe repetir la lectura mientras el valor esté fuera del rango de 1 a 10. ¿Cuál es el error?

```text
READ valor
WHILE valor < 1 AND valor > 10 DO
  WRITE "Fuera de rango"
  READ valor
END WHILE
```

## Respuesta

La condición usa `AND`, pero un valor no puede ser menor que 1 y mayor que 10 al mismo tiempo. Debe usar `OR`: `valor < 1 OR valor > 10`.