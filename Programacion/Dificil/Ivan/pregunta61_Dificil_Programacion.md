# Pregunta 61 — ¿Qué imprime?

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** IMP  
**Tema:** 5.4 Ciclos anidados

## Enunciado

¿Qué imprime el siguiente pseudocódigo?

```text
total = 0
FOR i = 1 TO 3 DO
  FOR j = 1 TO 2 DO
    total = total + i
  END FOR
END FOR
WRITE total
```

## Respuesta

Imprime `12` — cada valor de `i` se suma dos veces: `1+1+2+2+3+3`.