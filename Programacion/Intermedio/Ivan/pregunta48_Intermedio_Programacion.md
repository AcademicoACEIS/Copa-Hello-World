# Pregunta 48 — Completar pseudocódigo

**Nivel:** Medio · **Puntos:** 20 · **Tipo:** COMP  
**Tema:** 5.3 For + condición

## Enunciado

Completa el pseudocódigo para contar los múltiplos de 3 entre 1 y N.

```text
READ N
contador = 0
FOR i = 1 TO N DO
  IF i MOD 3 _____ 0 THEN
    contador = _____
  END IF
END FOR
WRITE contador
```

## Respuesta

`==` / `contador + 1` — se incrementa el contador cada vez que el residuo es cero.