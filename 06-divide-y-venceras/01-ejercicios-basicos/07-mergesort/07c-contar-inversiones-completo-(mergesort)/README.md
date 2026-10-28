

## 🧩 Parte C: Contar inversiones completo (mergesort)

🔴 **Dificultad:** Avanzada · 🧠 **Técnica:** Divide y vencerás (mergesort con conteo) · ⏱️ **Tiempo:** O(n log n) · 💾 **Espacio:** O(n)

### 📝 Enunciado

Dado **un solo arreglo** de enteros, no necesariamente ordenado, implementa una función que cuente cuántas **inversiones** contiene, utilizando la técnica de **divide y vencerás**. Una inversión es un par de posiciones `i < j` tales que `A[i] > A[j]`.

Al terminar, el arreglo original debe quedar **ordenado de forma ascendente**, y se debe imprimir junto con la cantidad de inversiones.

### 🧪 Ejemplo de ejecución

Para el arreglo `[2, 4, 1, 3, 5]`, el programa debería imprimir:

```text
1 2 3 4 5
Hay 3 inversiones
```

Las inversiones son `(2, 1)`, `(4, 1)` y `(4, 3)`.

### 🚧 Restricciones

- La solución debe implementarse utilizando **recursión** con el enfoque de **divide y vencerás**: dividir el arreglo, resolver cada mitad y fusionar.
- La cantidad de inversiones debe obtenerse mediante un **parámetro pasado por referencia**.
- Las inversiones entre las dos mitades deben contarse durante la **fusión**, aprovechando que ambas mitades ya están ordenadas.
- El caso base de la recursión corresponde a cuando el índice inicial es igual al índice final.
- La complejidad temporal del algoritmo debe ser **O(n log n)**.
- La complejidad espacial del algoritmo debe ser **O(n)**.

[Volver al indice](01-ejercicios-basicos)