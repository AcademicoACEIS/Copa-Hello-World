# Pregunta 24 — Completar pseudocódigo

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** COMP  
**Tema:** 5.5 Break + while

## Enunciado

Completa el pseudocódigo para un juego de adivinanza: el número secreto es 42, el usuario tiene 3 intentos.

```text
secreto = 42
intentos = 0
WHILE _____ DO
  READ intento
  intentos = intentos + 1
  IF intento == secreto THEN
    WRITE "Ganaste en " + intentos + " intentos"
    _____
  ELSE IF intento < secreto THEN
    WRITE "Más alto"
  ELSE
    WRITE _____
  END IF
END WHILE
IF intento != secreto THEN
  WRITE "Perdiste. Era " + secreto
END IF
```

## Respuesta

WHILE intentos < 3   /   BREAK   /   WRITE "Más bajo"
