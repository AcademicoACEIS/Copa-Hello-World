# Pregunta 30 — Completar pseudocódigo

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** COMP  
**Tema:** 5.3 For + lógica

## Enunciado

Completa el pseudocódigo para imprimir solo los múltiplos de 3 entre 1 y 30, y al final cuántos hubo.

```text
contador = 0
FOR i = _____ TO 30 DO
  IF _____ THEN
    WRITE i
    contador = _____
  END IF
END FOR
WRITE "Total: " + _____
```

## Respuesta

FOR i = 1   /   IF i MOD 3 == 0 THEN   /   contador = contador + 1   /   WRITE "Total: " + contador
