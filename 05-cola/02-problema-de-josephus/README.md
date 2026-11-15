# 🔄 Problema de Josephus

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Rotación de una cola · ⏱️ **Tiempo:** O(nk) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Hay `n` participantes numerados del **1 al `n`**, ubicados en círculo. Comenzando por el participante `1`, se cuenta hasta `k` y se elimina al participante que recibe ese número.

El conteo vuelve a comenzar desde **1 en el participante siguiente al eliminado**. El proceso continúa hasta que queda un único sobreviviente.

Implementa una función en C++ que simule este proceso utilizando tu propia `BibliotecaCola`. Muestra el orden de eliminación y el número del sobreviviente.

## 🧪 Ejemplos de ejecución

```text
Participantes: 5
Conteo: 2
Orden de eliminacion: 2 4 1 5
Sobreviviente: 3
```

En este ejemplo, el conteo inicial comienza en el participante `1`: el participante `2` recibe el segundo turno y es eliminado. Luego se comienza a contar desde el participante `3`.

```text
Participantes: 7
Conteo: 3
Orden de eliminacion: 3 6 2 7 5 1
Sobreviviente: 4
```

```text
Participantes: 4
Conteo: 1
Orden de eliminacion: 1 2 3
Sobreviviente: 4
```

```text
Participantes: 1
Conteo: 3
Orden de eliminacion: ninguno
Sobreviviente: 1
```

## 🚧 Restricciones

- Puedes asumir que `n >= 1` y `k >= 1`.
- Utiliza **una sola cola** de tu propia `BibliotecaCola`, sin `std::queue`.
- Cada elemento debe almacenar el identificador entero de un participante.
- La solución debe ser **iterativa**, sin recursión.
- Accede a la cola únicamente mediante sus operaciones públicas, sin manipular directamente sus nodos ni enlaces.
- No se permiten pilas, colas adicionales ni arreglos o listas auxiliares.
- Debes **simular el proceso mediante la cola**; no se permite reemplazar la simulación por una fórmula matemática.
- Los participantes eliminados no deben regresar a la cola.
- El conteo debe continuar correctamente aunque `k` sea mayor que la cantidad de participantes restantes.
- El sobreviviente no forma parte del orden de eliminación.
- No consultes el frente ni desencoles cuando la cola esté vacía.
- Libera todos los recursos utilizados al terminar.
- La complejidad temporal debe ser **como máximo O(nk)** y el espacio auxiliar **O(n)**.

⬅️ [Volver a colas](..)