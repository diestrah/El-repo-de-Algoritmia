# 🌳 Recorrido por Niveles Iterativo

🟢 **Dificultad:** Básica · 🧠 **Técnica:** BFS con cola · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(w)

## 📝 Enunciado

Dado un árbol binario de búsqueda, implementa la función `recorrerPorNiveles` para recorrerlo de forma **iterativa**, visitando sus nodos **nivel por nivel, de izquierda a derecha**.

El recorrido comienza en la raíz y continúa con todos los nodos del segundo nivel, luego los del tercero y así sucesivamente.

Utiliza una **cola** para procesar los nodos en el mismo orden en que son descubiertos.

## 🧪 Ejemplo de ejecución

Insertando los valores `10, 8, 12, 4, 9, 14, 1, 6, 5, 13` (en ese orden), se obtiene el siguiente árbol:

<p align="center">
  <img src="img/arbol-por-niveles"
       alt="Árbol binario de búsqueda organizado en cinco niveles"
       width="800">
</p>

Los nodos se visitan en el siguiente orden:

| Nivel | Nodos de izquierda a derecha |
| :---: | :--- |
| 1 | `10` |
| 2 | `8, 12` |
| 3 | `4, 9, 14` |
| 4 | `1, 6, 13` |
| 5 | `5` |

El programa debe imprimir todos los valores en una sola línea:

```text
10 8 12 4 9 14 1 6 13 5
```

## 🚧 Restricciones

- **No se puede utilizar recursión** en el recorrido solicitado.
- Se debe utilizar la **cola proporcionada** para almacenar los nodos pendientes de procesar.
- Se deben manipular directamente los **nodos del árbol (punteros)**, no copias de sus valores.
- Los nodos deben procesarse **nivel por nivel y de izquierda a derecha**.
- Cada nodo debe imprimirse **una sola vez**.
- No se debe modificar la estructura ni los valores del árbol.
- Si el árbol está vacío, no se deben imprimir valores.
- La complejidad temporal debe ser **O(n)**, donde `n` es la cantidad de nodos.
- El espacio auxiliar debe ser **O(w)**, donde `w` es la cantidad máxima de nodos en un mismo nivel.

⬅️ [Volver a recorridos BFS iterativos](..)