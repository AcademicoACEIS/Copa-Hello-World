# Pregunta 65 — Diagrama de flujo

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** DF  
**Tema:** 5.2 Centinela + validación

## Enunciado

Dibuja el diagrama de flujo de un algoritmo que lea edades hasta recibir `-1`. Debe contar únicamente edades válidas entre 0 y 120, inclusive, y mostrar el total al final.

## Respuesta

Debe incluir: Inicio → `contador=0` → READ edad → rombo `edad != -1` → si no: WRITE contador y Fin; si sí: comprobar `edad >= 0 AND edad <= 120`, incrementar contador solo si es válida, volver a READ edad.