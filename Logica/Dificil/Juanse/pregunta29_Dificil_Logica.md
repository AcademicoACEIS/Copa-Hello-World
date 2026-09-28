# Pregunta 29 — Diagrama de flujo

**Nivel:** Difícil · **Puntos:** 30 · **Tipo:** DF  
**Tema:** 5.2 Do-while + validación

## Enunciado

Dibuja el diagrama de flujo de un validador de contraseña: la clave es "hw2024", el usuario tiene hasta 3 intentos. Si acierta muestra "Acceso concedido", si agota los intentos muestra "Bloqueado".

## Respuesta

Debe incluir: Inicio → intentos=0 → rombo intentos<3 → READ clave, intentos++ → rombo clave=="hw2024" → sí: WRITE "Acceso concedido" → Fin / no: volver → al salir: WRITE "Bloqueado" → Fin.
