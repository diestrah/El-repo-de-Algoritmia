## 🧩 Parte A: Insertar ordenadamente dos arrays (merge)

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Fusión de dos arreglos ordenados · ⏱️ **Tiempo:** O(n + m) · 💾 **Espacio:** O(n + m)

### 📝 Enunciado

Dados dos arreglos de enteros ya **ordenados de forma ascendente**, implementa un programa que inserte ordenadamente todos sus valores en un **nuevo arreglo**, de modo que este también quede ordenado de forma ascendente. Finalmente, imprime el nuevo arreglo.

### 🧪 Ejemplo de ejecución

Para los arreglos `A = [2, 4]` y `B = [1, 3, 5]`, el programa debería imprimir:

```text
1 2 3 4 5
```

### 🚧 Restricciones

- Ambos arreglos de entrada deben estar **ordenados de forma ascendente**.
- El resultado debe almacenarse en un **nuevo arreglo** de tamaño `n + m`.
- No se permite ordenar el nuevo arreglo después de llenarlo: los valores deben insertarse **ya ordenados**, avanzando con un índice por cada arreglo.
- Debe contemplarse el caso en que uno de los arreglos se agota antes que el otro.
- La complejidad temporal del algoritmo debe ser **O(n + m)**, donde `n` y `m` son los tamaños de los arreglos.
- La complejidad espacial del algoritmo debe ser **O(n + m)**.


[Siguiente ejercicio](07b-contar-inversiones-de-dos-arrays)