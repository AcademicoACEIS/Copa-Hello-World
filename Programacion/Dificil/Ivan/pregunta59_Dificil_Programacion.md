# Pregunta 59 — Completar pseudocódigo

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** COMP  
**Tema:** 5.2 While + validación

## Enunciado

Completa el pseudocódigo para leer una nota hasta recibir un valor válido entre 0 y 100, inclusive.

```text
READ nota
WHILE nota < 0 _____ nota > 100 DO
  WRITE "Inválida"
  READ nota
END WHILE
WRITE "Nota válida"
```

## Respuesta

`OR` — se vuelve a pedir la nota si está por debajo de 0 o por encima de 100.