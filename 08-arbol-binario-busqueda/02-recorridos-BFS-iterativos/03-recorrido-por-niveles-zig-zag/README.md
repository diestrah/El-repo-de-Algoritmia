# ↔️ Recorrido por Niveles en Zigzag Iterativo

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Recorrido por niveles con dos pilas o pila y cola · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(w)

## 📝 Enunciado

Dado un árbol binario de búsqueda, implementa un recorrido por niveles en **zigzag** de forma **iterativa**.

El recorrido debe comenzar en la raíz y **alternar la dirección en cada nivel**: el primero se recorre de izquierda a derecha, el segundo de derecha a izquierda, el tercero de izquierda a derecha y así sucesivamente.

Desarrolla dos versiones que produzcan el mismo resultado:

- `recorrerPorNivelesZigZag`: utilizando **dos pilas**.
- `recorrerPorNivelesZigZagv2`: utilizando **una pila y una cola**.

## 🧪 Ejemplo de ejecución

Insertando los valores `10, 8, 12, 4, 9, 14, 1, 6, 5, 13` (en ese orden), se obtiene el siguiente árbol:

<p align="center">
  <img src="img/arbol-por-niveles"
       alt="Árbol binario de búsqueda organizado en cinco niveles"
       width="800">
</p>

Los nodos se visitan alternando la dirección de cada nivel:

| Nivel | Dirección | Orden de visita |
| :---: | :--- | :--- |
| 1 | Izquierda → derecha | `10` |
| 2 | Derecha → izquierda | `12, 8` |
| 3 | Izquierda → derecha | `4, 9, 14` |
| 4 | Derecha → izquierda | `13, 6, 1` |
| 5 | Izquierda → derecha | `5` |

Cada versión debe imprimir:

```text
10 12 8 4 9 14 13 6 1 5
```

El programa principal ejecuta ambas versiones, por lo que la salida completa es:

```text
10 12 8 4 9 14 13 6 1 5
10 12 8 4 9 14 13 6 1 5
```

## 🚧 Restricciones

- **No se puede utilizar recursión** en los recorridos solicitados.
- Cada versión debe utilizar **como máximo dos estructuras auxiliares de los TAD proporcionados**.
- La primera versión debe utilizar **dos pilas**; la segunda, **una pila y una cola**.
- Se deben manipular directamente los **nodos del árbol (punteros)**, no copias de sus valores.
- Se debe completar cada nivel antes de pasar al siguiente.
- La dirección debe cambiar **únicamente al terminar un nivel**.
- Cada nodo debe imprimirse **una sola vez por recorrido**.
- No se debe modificar la estructura ni los valores del árbol.
- Si el árbol está vacío, no se deben imprimir valores.
- La complejidad temporal debe ser **O(n)**, donde `n` es la cantidad de nodos.
- El espacio auxiliar debe ser **O(w)**, donde `w` es la cantidad máxima de nodos en un mismo nivel.

⬅️ [Volver a recorridos BFS iterativos](..)