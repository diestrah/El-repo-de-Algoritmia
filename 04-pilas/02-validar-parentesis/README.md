# ✅ Validar Paréntesis

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Pila · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Dada una expresión de texto, implementa una función en C++ que determine si los símbolos `()`, `[]` y `{}` están **balanceados y correctamente anidados**.

Cada símbolo de cierre debe corresponder a una apertura del mismo tipo y respetar el orden de anidamiento. Ignora los demás caracteres de la expresión.

Una cadena vacía o sin estos símbolos se considera válida.

## 🧪 Ejemplos de ejecución

```text
Expresion: a + (b * [c - d])
Resultado: Valida
```

```text
Expresion: {[()]}
Resultado: Valida
```

```text
Expresion: ([)]
Resultado: Invalida
```

Aunque cada apertura tiene un cierre del mismo tipo, el orden de anidamiento es incorrecto.

```text
Expresion: (()
Resultado: Invalida
```

```text
Expresion: )(
Resultado: Invalida
```

```text
Expresion: abc
Resultado: Valida
```

## 🚧 Restricciones

- Utiliza **una sola pila** de tu propia `BibliotecaPila`, sin `std::stack`.
- Puedes usar un arreglo para almacenar la expresión. No se permiten otras estructuras auxiliares (lista, cola, árbol).
- La solución debe ser **iterativa**, sin recursión.
- Accede a la pila únicamente mediante sus operaciones públicas, sin manipular directamente sus nodos ni enlaces.
- Puedes adaptar `ElementoPila` para almacenar caracteres o representarlos mediante enteros.
- No consultes el tope ni desapiles cuando la pila esté vacía.
- La función debe devolver un **valor booleano**; el programa principal muestra el resultado.
- Libera los recursos utilizados, incluso cuando detectes una expresión inválida antes de terminar el recorrido.
- La complejidad temporal debe ser **O(n)** y el espacio auxiliar **O(n)** en el peor caso, donde `n` es la longitud de la expresión.

⬅️ [Volver a pilas](..)