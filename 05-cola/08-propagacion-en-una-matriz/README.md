# 🌊 Propagación en una Matriz

🔴 **Dificultad:** Avanzada · 🧠 **Técnica:** BFS desde múltiples orígenes · ⏱️ **Tiempo:** O(n × m) · 💾 **Espacio:** O(n × m)

## 📖 ¿Qué cambia respecto al laberinto?

En el ejercicio anterior, la exploración comenzaba desde una sola posición. Aquí existen **varios focos iniciales que se propagan al mismo tiempo**.

Todos los focos comienzan en el instante `0`. En cada unidad de tiempo, la propagación avanza una celda hacia arriba, abajo, izquierda o derecha.

La cola permite procesar primero las posiciones alcanzadas en el tiempo `0`, después las alcanzadas en el tiempo `1`, y así sucesivamente. Esta técnica se conoce como **BFS desde múltiples orígenes**.

## 📝 Enunciado

Dada una matriz de `n` filas y `m` columnas, implementa una función en C++ que determine **cuánto tiempo tarda una propagación en alcanzar todas las celdas disponibles**, utilizando tu propia `BibliotecaCola`.

Cada celda contiene uno de estos valores:

| Valor | Significado |
|---|---|
| `0` | Obstáculo: no puede atravesarse ni recibir la propagación |
| `1` | Celda pendiente de alcanzar |
| `2` | Foco inicial de propagación |

Cada celda alcanzada puede propagar a sus vecinos a partir de la siguiente unidad de tiempo. Los focos iniciales actúan **simultáneamente**.

La función debe devolver:

- El **tiempo mínimo total** necesario para alcanzar todas las celdas que inicialmente tenían valor `1`.
- `-1` si alguna de esas celdas no puede alcanzarse.
- `0` si no existen celdas pendientes desde el inicio.

No necesitas mostrar cada etapa de la propagación.

## 🧪 Ejemplos de ejecución

### Ejemplo 1: propagación desde ambos extremos

```cpp
int matriz[1][5] = {
    {2, 1, 1, 1, 2}
};
```

La evolución es:

```text
Tiempo 0: 2 1 1 1 2
Tiempo 1: 2 2 1 2 2
Tiempo 2: 2 2 2 2 2
```

```text
Tiempo total de propagacion: 2
```

### Ejemplo 2: propagación con obstáculos

```cpp
int matriz[3][4] = {
    {2, 1, 0, 1},
    {1, 1, 0, 1},
    {0, 1, 1, 2}
};
```

```text
Tiempo total de propagacion: 2
```

### Ejemplo 3: celda inaccesible

```cpp
int matriz[3][3] = {
    {2, 1, 0},
    {0, 0, 0},
    {1, 1, 1}
};
```

```text
No es posible alcanzar todas las celdas
```

### Ejemplo 4: no hay celdas pendientes

```cpp
int matriz[2][2] = {
    {2, 0},
    {0, 2}
};
```

```text
Tiempo total de propagacion: 0
```

## 🚧 Restricciones

- Utiliza **una sola cola** de tu propia `BibliotecaCola`.
- La solución debe implementar **BFS de forma iterativa**, sin recursión.
- Puedes asumir que `n >= 1`, `m >= 1` y que la matriz contiene únicamente valores `0`, `1` y `2`.
- Puede haber cualquier cantidad de focos iniciales, incluso ninguno. Si hay celdas pendientes y ningún foco, el resultado es `-1`.
- Registra **todos los focos iniciales en la cola con tiempo `0` antes de comenzar la propagación**.
- Solo se permiten movimientos verticales y horizontales, sin diagonales ni desplazamientos fuera de la matriz.
- **Puedes modificar la matriz:** cambia una celda de `1` a `2` cuando la encoles para indicar que ya fue alcanzada.
- Cada celda debe encolarse como máximo una vez.
- No se necesita una matriz adicional de visitados.
- Se permiten arreglos de tamaño fijo para representar las cuatro direcciones.
- No se puede utilizar pilas, colas adicionales ni otras estructuras auxiliares.
- No se pueden manipular nodos ni enlaces.
- La complejidad temporal y el espacio auxiliar deben ser **O(n × m)**, suponiendo encolado y desencolado O(1).

⬅️ [Volver a colas](..)