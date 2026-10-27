# 📶 Verificar si un Array está Ordenado con Divide y Vencerás

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Divide y vencerás (verificar cada mitad y la unión) · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(log n)

## 📝 Enunciado

Dado un arreglo de números enteros, implementa una función recursiva en C++ que 
determine si el arreglo está ordenado de menor a mayor, utilizando la técnica 
de **divide y vencerás**.

## 🧪 Ejemplo de ejecución

Para el array `[1, 5, 3, 10]`, el programa debería imprimir:

```text
No esta ordenado
```

Para el array `[1, 3, 5, 10]`, el programa debería imprimir:

```text
Esta ordenado
```

## 🚧 Restricciones

- La solución debe implementarse **únicamente utilizando recursión**, siguiendo el enfoque de **divide y vencerás** (dividir el problema en subproblemas más pequeños y combinar sus resultados).
- El caso base de la recursión corresponde a cuando el índice inicial es igual al índice final del subarreglo.
- La complejidad temporal del algoritmo debe ser **O(n)**.

⬅️ [Volver a ejercicios básicos](..)