# Pregunta 21 — ¿Qué imprime?

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** IMP  
**Tema:** 5.4 Ciclos anidados

## Enunciado

¿Qué imprime el siguiente pseudocódigo?

```text
FOR i = 1 TO 3 DO
  FOR j = i TO 3 DO
    WRITE i + "," + j + " "
  END FOR
  WRITE salto_de_línea
END FOR
```

## Respuesta

Imprime:

```
1,1 1,2 1,3
2,2 2,3
3,3
```

El ciclo interno empieza en j=i, no en 1, por lo que cada fila tiene menos elementos.
