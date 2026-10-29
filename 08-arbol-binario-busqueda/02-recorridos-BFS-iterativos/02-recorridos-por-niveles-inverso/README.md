# 🔼 Recorrido por Niveles Inverso Iterativo

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** BFS con cola y pila · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Dado un árbol binario de búsqueda, implementa la función `recorrerPorNivelesInverso` para recorrerlo de forma **iterativa**, visitando sus nodos **desde el nivel más profundo hasta la raíz**, manteniendo el orden **de izquierda a derecha dentro de cada nivel**.

Utiliza una **cola** para explorar el árbol y una **pila** para obtener el orden de impresión requerido.

## 🧪 Ejemplo de ejecución

Insertando los valores `10, 8, 12, 4, 9, 14, 1, 6, 5, 13` (en ese orden), se obtiene el siguiente árbol:

<p align="center">
  <img src="img/arbol-por-niveles"
       alt="Árbol binario de búsqueda organizado en cinco niveles"
       width="800">
</p>

El recorrido comienza en el quinto nivel y termina en el primero:

| Nivel | Nodos de izquierda a derecha |
| :---: | :--- |
| 5 | `5` |
| 4 | `1, 6, 13` |
| 3 | `4, 9, 14` |
| 2 | `8, 12` |
| 1 | `10` |

El programa debe imprimir todos los valores en una sola línea:

```text
5 1 6 13 4 9 14 8 12 10
```

## 🚧 Restricciones

- **No se puede utilizar recursión** en el recorrido solicitado.
- Se deben utilizar la **cola y la pila proporcionadas** para almacenar punteros a los nodos del árbol.
- Se deben manipular directamente los **nodos del árbol**, no copias de sus valores.
- Los niveles deben imprimirse **desde el más profundo hasta la raíz**.
- Dentro de cada nivel, se debe conservar el orden **de izquierda a derecha**.
- Cada nodo debe imprimirse **una sola vez**.
- No se debe modificar la estructura ni los valores del árbol.
- Si el árbol está vacío, no se deben imprimir valores.
- La complejidad temporal debe ser **O(n)**, donde `n` es la cantidad de nodos.
- El espacio auxiliar debe ser **O(n)**.

⬅️ [Volver a recorridos BFS iterativos](..)