# 🌳 Recorrido de Frontera Iterativo

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Recorrido de bordes y hojas con pila · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(h)

## 📝 Enunciado

Dado un árbol binario de búsqueda, implementa la función `recorrerFrontera` para imprimir su **frontera exterior** de forma **iterativa**, en sentido **antihorario**.

El recorrido debe seguir este orden:

1. **La raíz**.
2. **El borde izquierdo**, de arriba hacia abajo, sin incluir las hojas.
3. **Todas las hojas**, de izquierda a derecha.
4. **El borde derecho**, de abajo hacia arriba, sin incluir las hojas.

El borde izquierdo comienza en el hijo izquierdo de la raíz y desciende dando preferencia al hijo izquierdo; si no existe, continúa por el derecho. El borde derecho comienza en el hijo derecho de la raíz y sigue el criterio contrario.

Cada nodo de la frontera debe imprimirse **una sola vez**.

## 🧪 Ejemplo de ejecución

Insertando los valores `10, 8, 12, 4, 9, 14, 1, 6, 13, 15` (en ese orden), se obtiene el siguiente árbol:

<p align="center">
  <img src="img/arbol-frontera"
       alt="Árbol binario de búsqueda con raíz 10 y hojas 1, 6, 9, 13 y 15"
       width="700">
</p>

La frontera se compone de las siguientes partes:

| Parte | Orden de visita |
| :--- | :--- |
| Raíz | `10` |
| Borde izquierdo, sin hojas | `8, 4` |
| Hojas de izquierda a derecha | `1, 6, 9, 13, 15` |
| Borde derecho, sin hojas, de abajo hacia arriba | `14, 12` |

El programa debe imprimir:

```text
10 8 4 1 6 9 13 15 14 12
```

## 🚧 Restricciones

- **No se puede utilizar recursión** en el recorrido solicitado.
- Se debe utilizar la **pila proporcionada** como estructura auxiliar.
- Se deben manipular directamente los **nodos del árbol (punteros)**, no copias de sus valores.
- Las hojas deben imprimirse únicamente en la etapa correspondiente a las hojas.
- La raíz debe imprimirse **una sola vez**, incluso si es el único nodo del árbol.
- No se debe modificar la estructura ni los valores del árbol.
- Si el árbol está vacío, no se deben imprimir valores.
- La complejidad temporal debe ser **O(n)**, donde `n` es la cantidad de nodos.
- El espacio auxiliar debe ser **O(h)**, donde `h` es la altura del árbol.

⬅️ [Volver a recorridos especiales iterativos](..)