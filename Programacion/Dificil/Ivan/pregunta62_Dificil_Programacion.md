# Pregunta 62 — ¿Qué imprime?

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** IMP  
**Tema:** 5.2 While + centinela

## Enunciado

¿Qué imprime si se ingresan, en orden, los valores `4, 7, 2, 0`?

```text
suma = 0
READ n
WHILE n != 0 DO
  IF n MOD 2 == 0 THEN
    suma = suma + n
  END IF
  READ n
END WHILE
WRITE suma
```

## Respuesta

Imprime `6` — suma los valores pares anteriores al centinela: `4 + 2`. El 0 solo termina el ciclo.