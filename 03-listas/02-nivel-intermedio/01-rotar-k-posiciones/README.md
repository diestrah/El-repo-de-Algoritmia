# 🔄 Rotar una Lista k Posiciones (Izquierda o Derecha)

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Manipulación de enlaces · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(1)

## 📝 Enunciado

Dada una lista, un número entero `k` y una dirección de rotación, implementa 
una función que rote la lista `k` posiciones hacia la **izquierda** o hacia la 
**derecha**, según se indique.

- **Rotación a la izquierda**: los primeros `k` nodos pasan a formar el final 
  de la lista.
- **Rotación a la derecha**: los últimos `k` nodos pasan a formar el inicio 
  de la lista.
- **Si `k` es negativo**: se invierte la dirección de la rotación. Por ejemplo, rotar `-2` posiciones a la izquierda equivale a rotar `2` posiciones a la derecha, y viceversa.
- **Si `|k|` es mayor que la longitud de la lista**: se reduce usando el módulo de la longitud (`k % longitud`).
- La rotación debe conservar el orden relativo de los nodos que se desplazan.

## 🧪 Ejemplo de ejecución

Para una lista con los valores `10, 20, 30, 40, 50, 60`:

**Con `k = 2`:**

```text
Rotación a la izquierda: 30 40 50 60 10 20
Rotación a la derecha:   50 60 10 20 30 40
```

**Con `k = -2`:**

```text
Rotación a la izquierda: 50 60 10 20 30 40
Rotación a la derecha:   30 40 50 60 10 20
```

## 🚧 Restricciones

- **No se deben crear nuevos nodos**: la rotación debe realizarse manipulando 
  únicamente las referencias (enlaces) de los nodos existentes.
- Si `k` es negativo, se debe invertir la dirección de rotación.
- Si `|k|` es mayor que la longitud de la lista, se debe reducir su valor utilizando el módulo de la longitud.
- Si `k = 0` (o `k` es múltiplo de la longitud), la lista no debe modificarse.
- Si la lista está vacía o tiene un solo elemento, la lista no debe modificarse.
- La complejidad temporal del algoritmo debe ser **O(n)**.
- La complejidad espacial del algoritmo debe ser **O(1)**.

⬅️ [Volver al nivel