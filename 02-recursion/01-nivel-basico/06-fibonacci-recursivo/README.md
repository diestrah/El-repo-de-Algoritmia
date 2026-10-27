# 🐇 Serie de Fibonacci Recursiva

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Recursión (dos llamadas por paso) · ⏱️ **Tiempo:** O(2ⁿ) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Implementa un programa que, al ingresar una posición `n`, calcule el número 
correspondiente de la serie de Fibonacci utilizando recursión. El programa debe 
repetir el cálculo en un bucle, permitiendo ingresar múltiples posiciones hasta 
que el usuario decida detener la ejecución.

## 🧪 Ejemplo de ejecución
```
Ingrese posicion n de la serie de fibonacci: 1 
El numero de Fibonacci es: 0 

Ingrese posicion n de la serie de fibonacci: 2 
El numero de Fibonacci es: 1 

Ingrese posicion n de la serie de fibonacci: 7 
El numero de Fibonacci es: 8 
```
El programa continúa pidiendo posiciones mientras el valor ingresado sea distinto de `0`.

## 🚧 Restricciones

- La solución debe implementarse **únicamente utilizando recursión**.
- Los casos base de la recursión corresponden a `n = 1` (retorna `0`) y `n = 2` (retorna `1`).

⬅️ [Volver al nivel básico](..)