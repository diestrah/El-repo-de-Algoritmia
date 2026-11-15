# 🔢 Generar Números Binarios

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Cola de enteros · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Dado un entero positivo `n`, implementa una función en C++ que muestre las representaciones binarias de los números del **1 al `n`**, en orden ascendente, utilizando tu propia `BibliotecaCola`.

La cola almacenará **enteros cuyos dígitos representan una secuencia binaria**. Por ejemplo, el entero decimal `101` se utilizará para almacenar y mostrar la representación binaria del número `5`.

Debes generar nuevas representaciones a partir de las anteriores, sin convertir individualmente cada número decimal a binario.

## 🧪 Ejemplos de ejecución

```text
Cantidad: 5
Binarios: 1 10 11 100 101
```

```text
Cantidad: 8
Binarios: 1 10 11 100 101 110 111 1000
```

```text
Cantidad: 1
Binarios: 1
```

## 🚧 Restricciones

- Considera entradas entre **1 y 100**.
- Utiliza **una sola cola** de tu propia `BibliotecaCola`, sin `std::queue`.
- Los elementos de la cola deben ser de tipo **`int`**. No se permite utilizar `string` ni arreglos de caracteres.
- Los enteros que almacenes o generes deben caber en un `int` de 32 bits. No generes representaciones adicionales que excedan ese límite.
- La solución debe ser **iterativa**, sin recursión.
- Accede a la cola únicamente mediante sus operaciones públicas, sin manipular directamente sus nodos ni enlaces.
- No se permiten pilas, colas adicionales ni arreglos o listas auxiliares.
- Se permiten variables escalares y operaciones aritméticas para construir nuevas representaciones.
- No utilices divisiones sucesivas, operaciones de bits ni funciones de conversión para obtener la representación binaria de cada entero.
- Muestra exactamente las primeras `n` representaciones, comenzando por `1` y sin ceros a la izquierda.
- No consultes el frente ni desencoles cuando la cola esté vacía.
- Libera los recursos de la cola al terminar, incluidos los elementos que pudieran quedar pendientes.
- La complejidad temporal debe ser **O(n)** y el espacio auxiliar, como máximo, **O(n)**.

⬅️ [Volver a colas](..)