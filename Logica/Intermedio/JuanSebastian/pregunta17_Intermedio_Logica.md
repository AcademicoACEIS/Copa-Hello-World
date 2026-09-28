# Pregunta 17 — Encontrar el error

**Nivel:** Medio · **Puntos:** 20 · **Tipo:** ERR  
**Tema:** 5.2 Do-while

## Enunciado

El pseudocódigo busca pedir un número hasta que sea positivo. ¿Cuál es el error?

```text
DO
  READ n
WHILE n > 0
```

## Respuesta

Error lógico: la condición debería ser WHILE n <= 0 para repetir mientras el número NO sea positivo. Tal como está, hace lo contrario.
