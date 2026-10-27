# 🔄 Invertir Número Recursivo

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Recursión (acumulador en cada llamada) · ⏱️ **Tiempo:** O(log n) · 💾 **Espacio:** O(log n)

## 📝 Enunciado

Implementa un programa que, al ingresar un número, lo invierta utilizando 
recursión. El programa debe repetir el cálculo en un bucle, permitiendo 
ingresar múltiples números hasta que el usuario decida detener la ejecución.

## 🧪 Ejemplo de ejecución
```
Ingrese numero: 1234 
4 3 2 1 
El numero invertido es: 4321 

Ingrese numero: 500 
0 0 5 
El numero invertido es: 5 

Ingrese numero: 0 

El numero invertido es: 0 
```
El programa continúa pidiendo números mientras el valor ingresado sea distinto de `0`.

## 🚧 Restricciones

- La solución debe implementarse **únicamente utilizando recursión** (no se permiten bucles para el cálculo en sí).
- El caso base de la recursión corresponde a `0`.

⬅️ [Volver al nivel básico](..)