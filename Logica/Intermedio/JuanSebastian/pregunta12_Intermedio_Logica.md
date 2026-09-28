# Pregunta 12 — Encontrar el error

**Nivel:** Medio · **Puntos:** 20 · **Tipo:** ERR  
**Tema:** 5.3 Ciclo for

## Enunciado

El siguiente pseudocódigo busca imprimir los números del 1 al 5. Encuentra y explica el error.

```text
FOR i = 1 TO 5 DO
  WRITE i
  i = i + 1
END FOR
```

## Respuesta

Error: modificar "i" dentro del FOR hace que salte de 2 en 2. La variable de control no debe modificarse manualmente dentro del ciclo.
