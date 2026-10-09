# Pregunta 63 — Encontrar el error

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** ERR  
**Tema:** 5.2 While + avance de contador

## Enunciado

El algoritmo debe imprimir los números del 1 al 5. ¿Cuál es el error?

```text
i = 1
WHILE i <= 5 DO
  WRITE i
END WHILE
```

## Respuesta

No se actualiza `i`, así que la condición siempre es verdadera y el ciclo imprime 1 indefinidamente. Debe agregarse `i = i + 1` dentro del ciclo.