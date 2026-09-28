# Pregunta 16 — ¿Qué imprime?

**Nivel:** Medio · **Puntos:** 20 · **Tipo:** IMP  
**Tema:** 4.4 Condicionales anidados

## Enunciado

¿Qué imprime el siguiente pseudocódigo si x = 4 e y = 7?

```text
IF x > 3 THEN
  IF y > 10 THEN
    WRITE "A"
  ELSE
    WRITE "B"
  END IF
ELSE
  WRITE "C"
END IF
```

## Respuesta

Imprime "B" — x > 3 es verdadero (entra al IF externo), pero y > 10 es falso (entra al ELSE interno).
