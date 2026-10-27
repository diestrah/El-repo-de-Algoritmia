# ➕ Suma de Matriz Recursiva

🔴 **Dificultad:** Avanzada · 🧠 **Técnica:** Recursión (dos índices y resultado por referencia) · ⏱️ **Tiempo:** O(n · m) · 💾 **Espacio:** O(n · m)

## 📝 Enunciado

Implementa una función que calcule la suma de los elementos de una matriz, 
utilizando recursión.

## 🧪 Ejemplo de ejecución

Para la matriz:

```text
20 21 22 23
24 25 26 27
28 29 30 31
32 33 34 35
36 37 38 39
40 41 42 43
```

El programa debería imprimir:

```text
La suma de los elementos de la matriz es: 756
```

## 🚧 Restricciones

- La solución debe implementarse **únicamente utilizando recursión** (no se permiten bucles para el recorrido de la matriz).
- El resultado debe obtenerse a través de un parámetro pasado por referencia (`suma`), ya que la función es `void`.
- El caso base de la recursión corresponde a haber recorrido todas las filas de la matriz.

⬅️ [Volver al nivel avanzado](..)