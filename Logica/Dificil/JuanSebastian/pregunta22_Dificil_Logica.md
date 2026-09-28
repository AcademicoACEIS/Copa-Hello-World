# Pregunta 22 — Encontrar el error

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** ERR  
**Tema:** 5.6 Ciclos infinitos + break

## Enunciado

El pseudocódigo busca encontrar el primer número divisible por 7 entre 1 y 100. ¿Cuál es el error?

```text
i = 1
WHILE TRUE DO
  IF i MOD 7 == 0 THEN
    WRITE i
  END IF
  i = i + 1
END WHILE
```

## Respuesta

Error: nunca usa BREAK al encontrar el primer divisible, por lo que sigue imprimiendo TODOS los múltiplos de 7 en un ciclo infinito. Debe agregar BREAK después del WRITE.
