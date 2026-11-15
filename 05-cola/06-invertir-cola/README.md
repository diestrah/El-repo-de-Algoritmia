# ↩️ Invertir una Cola

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Recursión y colas · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Dada una cola de números enteros, implementa una función recursiva en C++ que **invierta el orden de sus elementos**.

El resultado debe quedar en la **misma cola recibida como argumento**: el elemento que estaba al frente debe quedar al final, y viceversa.

No debes utilizar ningún **TAD auxiliar**. 

Debes conservar todos los elementos, incluidos los repetidos.

## 🧪 Ejemplos de ejecución

Todas las colas se muestran **desde el frente hacia el final**.

```text
Cola original: 10 20 30 40
Cola invertida: 40 30 20 10
```

```text
Cola original: 7 7 3
Cola invertida: 3 7 7
```

```text
Cola original: 5
Cola invertida: 5
```

Una cola vacía debe permanecer vacía.

## 🚧 Restricciones

- Utiliza tu propia **BibliotecaCola**, sin `std::queue`.
- No se permite crear pilas, colas adicionales, listas, arreglos ni otras estructuras auxiliares para almacenar los elementos.
- Se permiten variables locales y el espacio de la pila de llamadas de la recursión.
- No se pueden manipular nodos ni enlaces.
- No modifiques la biblioteca para agregar operaciones que inviertan los enlaces o permitan insertar al frente.
- No consultes el frente ni desencoles cuando la cola esté vacía.
- El resultado debe quedar en la cola original.
- La restricción de no utilizar ciclos aplica a la función de inversión y a sus posibles auxiliares. El programa principal puede utilizarlos para cargar, mostrar y vaciar la cola.
- La complejidad temporal debe ser **O(n)**, suponiendo encolado y desencolado O(1).
- El espacio auxiliar debe ser **O(n)**, contando las llamadas recursivas.

⬅️ [Volver a colas](..)