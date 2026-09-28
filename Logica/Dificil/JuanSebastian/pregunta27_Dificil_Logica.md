# Pregunta 27 — Encontrar el error

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** ERR  
**Tema:** 2.3 + 4.4 Lógica y condicionales

## Enunciado

El algoritmo asigna categorías a una nota: A (90-100), B (70-89), F (menor a 70). ¿Qué está mal?

```text
READ nota
IF nota >= 70 THEN
  WRITE "B"
ELSE IF nota >= 90 THEN
  WRITE "A"
ELSE
  WRITE "F"
END IF
```

## Respuesta

Error de orden: el IF nota >= 70 captura también las notas de 90 a 100 antes del ELSE IF. Los rangos deben evaluarse del mayor al menor: primero >= 90, luego >= 70.
