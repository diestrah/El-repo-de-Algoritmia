# ⬇️ Recorrido Pre-orden Iterativo

🟢 **Dificultad:** Básica · 🧠 **Técnica:** DFS con pila · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(h)

## 📝 Enunciado

Dado un árbol binario de búsqueda, implementa una función que lo recorra en **pre-orden** (primero el nodo, luego su subárbol izquierdo y por último su subárbol derecho) de forma **iterativa**, utilizando una **pila**.

## 🧪 Ejemplo de ejecución

Insertando los valores `10, 8, 12, 4, 9, 14, 1, 6, 5, 13` (en ese orden), se obtiene el siguiente árbol:

<p align="center">
  <img src="img/arbol"
       alt="Árbol binario de búsqueda con raíz 10"
       width="600">
</p>

El programa debería imprimir el recorrido en pre-orden:

```text
10 8 4 1 6 5 9 12 14 13
```

## 🚧 Restricciones

- **No se puede utilizar recursión**.
- Se debe utilizar una **pila** para guardar los nodos pendientes de visitar.
- Se debe trabajar con los **nodos** del árbol (punteros), no con copias de sus valores.
- Cada nodo debe visitarse **una sola vez**.
- La complejidad temporal del algoritmo debe ser **O(n)**, donde `n` es la cantidad de nodos.
- La complejidad espacial del algoritmo debe ser **O(h)**, donde `h` es la altura del árbol.
- Se debe utilizar la BibliotecaPila y BibliotecaArbolBinarioDeBusqueda

⬅️ [Volver a recorridos DFS iterativos](..)