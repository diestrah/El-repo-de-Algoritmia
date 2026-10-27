# 🔀 Mergesort

Tres ejercicios progresivos para entender cómo funciona **mergesort**: primero se aprende a **fusionar** dos arreglos ordenados, luego a **contar inversiones** mientras se fusiona y, al final, a aplicar **divide y vencerás** sobre un solo arreglo. ✂️

> 🔀 Dividir → Ordenar cada mitad → Fusionar

## 📚 Partes

| # | Parte | Dificultad | Tiempo |
|---|-------|------------|--------|
| A | [Insertar ordenadamente dos arrays (merge)](#-parte-a-insertar-ordenadamente-dos-arrays-merge) | 🟢 Básica | O(n + m) |
| B | [Contar inversiones de dos arrays (merge)](#-parte-b-contar-inversiones-de-dos-arrays-merge) | 🟡 Intermedia | O(n + m) |
| C | [Contar inversiones completo (mergesort)](#-parte-c-contar-inversiones-completo-mergesort) | 🔴 Avanzada | O(n log n) |

---

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

---

## 🧩 Parte B: Contar inversiones de dos arrays (merge)

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Fusión con conteo · ⏱️ **Tiempo:** O(n + m) · 💾 **Espacio:** O(n + m)

### 📝 Enunciado

Dados dos arreglos de enteros **ordenados de forma ascendente**, `A` y `B`, cuenta cuántas **inversiones** existen entre ellos. Una inversión es un par formado por un elemento de `A` y otro de `B` en el que el elemento de `A` es **estrictamente mayor** que el de `B`.

Mientras cuentas, inserta los valores ordenadamente en un nuevo arreglo. Al final, imprime ese arreglo y la cantidad de inversiones.

### 🧪 Ejemplo de ejecución

Para los arreglos `A = [2, 4]` y `B = [1, 3, 5]`, el programa debería imprimir:

```text
1 2 3 4 5
3 inversiones
```

Las inversiones son `(2, 1)`, `(4, 1)` y `(4, 3)`.

### 🚧 Restricciones

- Ambos arreglos de entrada deben estar **ordenados de forma ascendente**.
- Las inversiones deben contarse **durante la fusión**, sin comparar todos los pares posibles (no se permite una solución de tipo O(n · m)).
- Dos elementos iguales **no** forman una inversión.
- El resultado de la fusión debe almacenarse en un **nuevo arreglo** ordenado.
- La complejidad temporal del algoritmo debe ser **O(n + m)**.
- La complejidad espacial del algoritmo debe ser **O(n + m)**.

---

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

---

⬅️ [Volver a ejercicios básicos](..)