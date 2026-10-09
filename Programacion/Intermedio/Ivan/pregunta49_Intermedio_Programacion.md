# Pregunta 49 — ¿Qué imprime?

**Nivel:** Medio · **Puntos:** 20 · **Tipo:** IMP  
**Tema:** 4.4 Condicionales anidados

## Enunciado

¿Qué imprime si `edad = 20` y `tieneCarnet = TRUE`?

```text
IF edad >= 18 THEN
  IF tieneCarnet THEN
    WRITE "Puede conducir"
  ELSE
    WRITE "Necesita carnet"
  END IF
ELSE
  WRITE "Es menor de edad"
END IF
```

## Respuesta

Imprime `Puede conducir` — se cumple la condición de edad y también la condición del carnet.