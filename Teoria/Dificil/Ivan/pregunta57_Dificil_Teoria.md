# Pregunta 57 — Verdadero / Falso

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** VF  
**Tema:** 3.2.1 Scope en ciclos

## Enunciado

Si `total` se declara como variable local dentro de la función `calcular`, el bloque principal puede leer `total` directamente cuando la función termina, aunque no lo retorne.

## Respuesta

Falso — una variable local solo está disponible dentro de su ámbito. Para usar el resultado fuera de `calcular`, la función debe retornarlo o comunicarlo de otra forma.