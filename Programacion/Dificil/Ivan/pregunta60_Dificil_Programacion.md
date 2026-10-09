# Pregunta 60 — Completar pseudocódigo

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** COMP  
**Tema:** 5.3 For anidado + condición

## Enunciado

Completa el pseudocódigo para contar los pares de una tabla de 2 filas por 3 columnas.

```text
pares = 0
FOR fila = 1 TO 2 DO
  FOR columna = 1 TO 3 DO
    READ valor
    IF valor MOD 2 _____ 0 THEN
      pares = _____
    END IF
  END FOR
END FOR
WRITE pares
```

## Respuesta

`==` / `pares + 1` — se incrementa el contador por cada valor par leído en las seis posiciones.