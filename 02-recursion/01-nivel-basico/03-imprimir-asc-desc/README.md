# ↕️ Impresión Recursiva Ascendente y Descendente

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Recursión (operar antes y después de la llamada) · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Implementa un programa que, al ingresar un número `n`, imprima primero los 
números desde `n` hasta `1` (descendente) y luego desde `1` hasta `n` 
(ascendente). El programa debe repetir el proceso en un bucle, permitiendo 
ingresar múltiples números hasta que el usuario decida detener la ejecución.

## 🧪 Ejemplo de ejecución
```
Ingrese numero 5 
5 4 3 2 1 
1 2 3 4 5 

Ingrese numero 3 
3 2 1 
1 2 3 

Ingrese numero 0 
```
El programa continúa pidiendo números mientras el valor ingresado sea distinto de `0`.

## 🚧 Restricciones

- Ambas impresiones (descendente y ascendente) deben implementarse **únicamente utilizando recursión**.
- El caso base de la recursión corresponde a `0`.

⬅️ [Volver al nivel básico](..)