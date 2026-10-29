# ⬇️ Recorrido En-orden Iterativo

🟢 **Dificultad:** Básica · 🧠 **Técnica:** DFS con pila · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(h)

## 📝 Enunciado

Dado un árbol binario de búsqueda, implementa la función `recorrerEnOrdenIterativo` para recorrerlo en **en-orden** (primero su subárbol izquierdo, luego el nodo y por último su subárbol derecho) de forma **iterativa**, utilizando una **pila**.

El recorrido debe imprimir los valores del árbol en **orden ascendente**.

## 🧪 Ejemplo de ejecución

Insertando los valores `10, 8, 12, 4, 9, 14, 1, 6, 5, 13` (en ese orden), se obtiene el siguiente árbol:

<p align="center">
  <img src="img/arbol"
       alt="Árbol binario de búsqueda con raíz 10"
       width="600">
</p>
El recorrido en en-orden debe imprimir:

```text
1 4 5 6 8 9 10 12 13 14
```

El `main.cpp` ejecuta primero la versión recursiva como referencia y luego la versión iterativa, por lo que la salida completa es:

```text
1 4 5 6 8 9 10 12 13 14
1 4 5 6 8 9 10 12 13 14
```

## 🚧 Restricciones

- **No se puede utilizar recursión** en la función solicitada ni recurrir a los recorridos recursivos de la biblioteca.
- Se debe utilizar la **pila proporcionada** para almacenar los nodos pendientes de procesar.
- Se debe trabajar con los **nodos del árbol (punteros)**, no con copias de sus valores.
- Cada nodo debe imprimirse **una sola vez por recorrido**.
- No se debe modificar la estructura ni los valores del árbol.
- Si el árbol está vacío, no se deben imprimir valores.
- La complejidad temporal debe ser **O(n)**, donde `n` es la cantidad de nodos.
- El espacio auxiliar debe ser **O(h)**, donde `h` es la altura del árbol.

⬅️ [Volver a recorridos DFS iterativos](..)