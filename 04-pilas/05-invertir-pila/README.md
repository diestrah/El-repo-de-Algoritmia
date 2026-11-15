# ↩️ Invertir una Pila sin Pila Auxiliar

🔴 **Dificultad:** Avanzada · 🧠 **Técnica:** Recursión y pilas · ⏱️ **Tiempo:** O(n²) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Dada una pila de números enteros, implementa una función recursiva en C++ que **invierta el orden de sus elementos sin utilizar otra pila**.

El resultado debe quedar en la **misma pila recibida como argumento**: el elemento que estaba en la base debe quedar en el tope, y viceversa.

Debes conservar todos los elementos, incluidos los repetidos.

## 🧪 Ejemplos de ejecución

Todas las pilas se muestran **desde el tope hacia la base**.

```text
Pila original: 40 30 20 10
Pila invertida: 10 20 30 40
```

```text
Pila original: 7 7 3
Pila invertida: 3 7 7
```

```text
Pila original: 5
Pila invertida: 5
```

Una pila vacía debe permanecer vacía.

## 🚧 Restricciones

- Utiliza tu propia **BibliotecaPila**, sin `std::stack`.
- La solución debe implementarse mediante **recursión**. Puedes definir funciones auxiliares recursivas.
- **No se permite crear otra pila**, ni utilizar arreglos, listas, cadenas u otras estructuras para almacenar los elementos.
- Se permiten variables locales y el espacio de la pila de llamadas de la recursión.
- Accede a la pila únicamente mediante sus operaciones públicas, sin manipular directamente sus nodos ni enlaces.
- No modifiques la biblioteca para agregar operaciones que accedan directamente a la base o inviertan sus enlaces.
- No consultes el tope ni desapiles cuando la pila esté vacía.
- El resultado debe quedar en la pila original.
- La solución debe tomar **como máximo O(n²) de tiempo** y utilizar **O(n) de espacio auxiliar**, contando las llamadas recursivas.

⬅️ [Volver a pilas](..)