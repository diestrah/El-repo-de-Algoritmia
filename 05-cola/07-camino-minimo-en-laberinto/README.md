# 🧭 Camino Mínimo en un Laberinto

🔴 **Dificultad:** Avanzada · 🧠 **Técnica:** Búsqueda en anchura (BFS) con cola · ⏱️ **Tiempo:** O(n × m) · 💾 **Espacio:** O(n × m)

## 📖 ¿Qué es BFS?

La **búsqueda en anchura**, o **BFS** (*Breadth-First Search*), explora posiciones por distancia desde un punto inicial.

Primero visita las posiciones que están a un movimiento del inicio; después, las que están a dos movimientos, y así sucesivamente.

Una **cola** permite conservar ese orden de exploración: las posiciones descubiertas primero se procesan primero.

Cuando todos los movimientos tienen el mismo costo, este recorrido permite encontrar la **menor cantidad de movimientos** para llegar a un destino.

## 📝 Enunciado

Dado un laberinto representado mediante una matriz de `n` filas y `m` columnas, implementa una función en C++ que determine la **menor cantidad de movimientos necesarios para llegar desde una posición inicial hasta la esquina inferior derecha**, utilizando tu propia `BibliotecaCola`.

Cada celda contiene uno de estos valores:

| Valor | Significado |
|---|---|
| `0` | Celda libre |
| `1` | Pared |

En cada movimiento puedes desplazarte una celda **arriba, abajo, izquierda o derecha**. No puedes atravesar paredes ni salir de los límites de la matriz.

Las coordenadas se expresan como **`(fila, columna)`**, con índices desde `0`. La posición inicial se recibe como argumento y la salida está siempre en **`(n - 1, m - 1)`**.

La función debe devolver la distancia mínima hasta esa salida. Si no existe una ruta, debe devolver `-1`.

**No necesitas mostrar ni reconstruir el camino recorrido.**

## 🧪 Ejemplos de ejecución

### Ejemplo 1: existe una ruta

```cpp
int laberinto[4][4] = {
    {0, 0, 1, 0},
    {1, 0, 1, 0},
    {0, 0, 0, 0},
    {0, 1, 1, 0}
};

// Inicio: (0, 0)
// Salida: (3, 3)
```

```text
Inicio: (0, 0)
Salida: (3, 3)
Minimo de movimientos: 6
```

La distancia cuenta los desplazamientos entre celdas, no la cantidad de celdas visitadas.

### Ejemplo 2: no existe una ruta

```cpp
int laberinto[3][3] = {
    {0, 1, 0},
    {0, 1, 0},
    {0, 1, 0}
};

// Inicio: (0, 0)
// Salida: (2, 2)
```

```text
Inicio: (0, 0)
Salida: (2, 2)
No existe una ruta
```

### Ejemplo 3: inicio y salida coinciden

Si la posición inicial ya es la esquina inferior derecha y corresponde a una celda libre:

```text
Inicio: (3, 3)
Salida: (3, 3)
Minimo de movimientos: 0
```

## 🚧 Restricciones

- Utiliza **una sola cola** de tu propia `BibliotecaCola`.
- La solución debe implementar **BFS de forma iterativa**, sin recursión.
- Puedes asumir que la matriz tiene al menos una fila y una columna, y contiene únicamente valores `0` y `1`.
- El inicio y la salida serán coordenadas válidas y corresponderán a celdas libres.
- Solo se permiten movimientos verticales y horizontales, sin diagonales.
- Cada movimiento tiene un costo de una unidad.
- No modifiques la matriz del laberinto.
- Se permite una matriz auxiliar de visitados, inicializada en falso, y arreglos de tamaño fijo para representar las cuatro direcciones.
- Marca cada posición como visitada **cuando la encoles**, para evitar registrarla varias veces.
- Cada celda debe encolarse como máximo una vez.
- No se permiten pilas, colas adicionales ni otras estructuras auxiliares.
- No se permiten manipular nodos ni enlaces.
- Para `f` filas y `c` columnas, la complejidad temporal y el espacio auxiliar deben ser **O(f × c)**, suponiendo encolado y desencolado O(1).

⬅️ [Volver a colas](..)
