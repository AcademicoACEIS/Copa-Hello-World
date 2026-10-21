# Pregunta 56 — Selección múltiple

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** SM  
**Tema:** 5.5 Break y continue

## Enunciado

Dentro de un ciclo, primero se ejecuta `break` si `i` es mayor que 7; si no, se ejecuta `continue` cuando `i` es par. ¿Qué sucede al llegar a `i = 8`?

- A) Se omite la iteración 8 y el ciclo continúa
- B) El ciclo termina
- C) Se reinicia el ciclo desde `i = 1`
- D) Se ejecutan las instrucciones restantes de la iteración

## Respuesta

B) Al ejecutarse `break`, el ciclo termina inmediatamente. `continue` solo omite el resto de la iteración actual.