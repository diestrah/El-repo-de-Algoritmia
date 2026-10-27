# ⏭️ Mover el Nodo Inicial al Final de una Lista

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Manipulación de enlaces (inicio y último nodo) · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(1)

## 📝 Enunciado

Dada una lista, implementa una función que mueva el nodo inicial de la lista 
hacia el final de la misma.

## 🧪 Ejemplo de ejecución

Insertando los valores `12, 13, 14, 15, 16` al inicio de la lista (en ese orden), el programa debería imprimir:

```text
16 15 14 13 12 
15 14 13 12 16 
```

La primera línea corresponde a la lista antes de mover el nodo inicial, y la 
segunda a la lista luego de moverlo al final.

## 🚧 Restricciones

- No se deben crear **nuevos nodos**.
- No se debe realizar un **intercambio de datos** entre nodos.
- La solución debe manipular **exclusivamente los enlaces** (punteros) entre los nodos.
- Si la lista está vacía o tiene un solo elemento, la lista no debe modificarse.
- La complejidad temporal del algoritmo debe ser **O(n)**.
- La complejidad espacial del algoritmo debe ser **O(1)**.

⬅️ [Volver al nivel básico](..)