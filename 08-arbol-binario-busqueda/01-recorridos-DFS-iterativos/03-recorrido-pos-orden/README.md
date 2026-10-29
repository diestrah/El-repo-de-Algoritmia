# ⬆️ Recorrido Posorden Iterativo

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** DFS con una pila · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(h)

## 📝 Enunciado

Dado un árbol binario de búsqueda, implementa la función `recorrerPosOrdenIterativo` para recorrerlo en **posorden** (primero su subárbol izquierdo, luego su subárbol derecho y por último el nodo) de forma **iterativa**, utilizando **una sola pila**.

Cada nodo debe imprimirse después de haber procesado todos los nodos de sus subárboles. La raíz debe ser el último nodo impreso.

## 🧪 Ejemplo de ejecución

Insertando los valores `10, 8, 12, 4, 9, 14, 1, 6, 5, 13` (en ese orden), se obtiene el siguiente árbol:

<p align="center">
  <img src="img/arbol"
       alt="Árbol binario de búsqueda con raíz 10"
       width="600">
</p>

El recorrido en posorden debe imprimir:

```text
1 5 6 4 9 8 13 14 12 10
```

El programa principal ejecuta primero la versión recursiva como referencia y luego la versión iterativa. Ambas deben producir el mismo resultado:

```text
1 5 6 4 9 8 13 14 12 10
1 5 6 4 9 8 13 14 12 10
```

## 🚧 Restricciones

- **No se puede utilizar recursión** en el recorrido solicitado ni llamar a los recorridos recursivos de la biblioteca.
- Se debe utilizar **una sola pila**, de la biblioteca proporcionada, para almacenar punteros a los nodos pendientes de procesar.
- Se debe trabajar con los **nodos del árbol**, no con copias de sus valores.
- Cada nodo debe imprimirse **una sola vez por recorrido**.
- No se debe modificar la estructura ni los valores del árbol.
- Si el árbol está vacío, no se deben imprimir valores.
- La complejidad temporal debe ser **O(n)**, donde `n` es la cantidad de nodos.
- El espacio auxiliar debe ser **O(h)**, donde `h` es la altura del árbol.

⬅️ [Volver a recorridos DFS iterativos](..)