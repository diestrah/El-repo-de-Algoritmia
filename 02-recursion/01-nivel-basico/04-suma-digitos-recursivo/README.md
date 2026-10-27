# ➕ Suma de Dígitos Recursiva

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Recursión (descomponer dígito a dígito) · ⏱️ **Tiempo:** O(log n) · 💾 **Espacio:** O(log n)

## 📝 Enunciado

Implementa un programa que, al ingresar un número, calcule la suma de sus 
dígitos utilizando recursión. El programa debe repetir el cálculo en un bucle, 
permitiendo ingresar múltiples números hasta que el usuario decida detener la 
ejecución.

## 🧪 Ejemplo de ejecución
```
Ingrese numero: 1234 
La suma de digitos es: 10 

Ingrese numero: 507 
La suma de digitos es: 12 

Ingrese numero: 0 
La suma de digitos es: 0 
```
El programa continúa pidiendo números mientras el valor ingresado sea distinto de `0`.

## 🚧 Restricciones

- La solución debe implementarse **únicamente utilizando recursión** (no se permiten bucles para el cálculo de la suma en sí).
- El caso base de la recursión corresponde a `0`.

⬅️ [Volver al nivel básico](..)