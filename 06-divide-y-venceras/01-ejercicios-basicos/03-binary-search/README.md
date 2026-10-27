# 🔍 Búsqueda Binaria Recursiva

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Divide y vencerás (descartar una mitad) · ⏱️ **Tiempo:** O(log n) · 💾 **Espacio:** O(log n)

## 📝 Enunciado

Dado un arreglo ordenado de números enteros, implementa una función recursiva 
en C++ que determine si un número `x` se encuentra dentro del arreglo, 
utilizando búsqueda binaria.

## 🧪 Ejemplo de ejecución

Para el array `[2, 4, 7, 10, 15, 20, 31]` y `x = 1`, el programa debería imprimir:

```text
No existe
```

Para el array `[2, 4, 7, 10, 15, 20, 31]` y `x = 7`, el programa debería imprimir:

```text
Existe
```

## 🚧 Restricciones

- La solución debe implementarse **únicamente utilizando recursión**.
- El arreglo de entrada debe estar **ordenado**.
- El caso base de la recursión corresponde a cuando el índice inicial supera al índice final.
- La complejidad temporal del algoritmo debe ser **O(log n)**.

⬅️ [Volver a ejercicios básicos](..)