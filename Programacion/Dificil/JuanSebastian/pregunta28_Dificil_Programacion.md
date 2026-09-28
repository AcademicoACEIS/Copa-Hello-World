# Pregunta 28 — ¿Qué imprime?

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** IMP  
**Tema:** 5.2 While + contadores

## Enunciado

¿Qué imprime si el usuario ingresa en orden: 5, 3, 8, 2, -1?

```text
mayor = 0
READ n
WHILE n != -1 DO
  IF n > mayor THEN
    mayor = n
  END IF
  READ n
END WHILE
WRITE mayor
```

## Respuesta

Imprime 8 — el algoritmo recorre todos los valores hasta -1 y guarda el mayor encontrado. El -1 no se evalúa porque termina el ciclo.
