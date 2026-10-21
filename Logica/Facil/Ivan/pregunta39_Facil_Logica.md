# Pregunta 39 — Encontrar el error

**Nivel:** Fácil · **Puntos:** 15 · **Tipo:** ERR  
**Tema:** 3.3 Comparación en una condición

## Enunciado

El algoritmo debe mostrar "Adulto" cuando la edad sea 18 o más. ¿Cuál es el error?

```text
READ edad
IF edad == 18 THEN
  WRITE "Adulto"
END IF
```

## Respuesta

La condición solo acepta la edad exactamente igual a 18. Debe ser `edad >= 18` para incluir todas las edades desde 18 en adelante.