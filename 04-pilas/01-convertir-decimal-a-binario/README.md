# 🔢 Convertir Decimal a Binario

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Pila · ⏱️ **Tiempo:** O(log n) · 💾 **Espacio:** O(log n), para n > 0

## 📝 Enunciado

Dado un número entero no negativo `n`, implementa una función en C++ que muestre su representación binaria utilizando 
una `pila`

Obtén los dígitos mediante divisiones sucesivas entre 2 y utiliza la pila para mostrarlos en el orden correcto.

La representación no debe contener ceros a la izquierda, salvo cuando el número ingresado sea cero.

## 🧪 Ejemplos de ejecución

```text
Decimal: 13
Binario: 1101
```

```text
Decimal: 8
Binario: 1000
```

```text
Decimal: 0
Binario: 0
```

## 🚧 Restricciones

- La entrada es un entero no negativo representable mediante `int`.
- Debes utilizar tu propia **BibliotecaPila**.
- Accede a la pila únicamente mediante sus operaciones públicas, sin manipular directamente sus nodos ni enlaces.
- No se permite almacenar los dígitos en un arreglo o cadena auxiliar.
- No se permite utilizar recursión ni funciones que conviertan directamente un número a binario.
- No consultes el tope ni desapiles cuando la pila esté vacía.
- Libera los recursos utilizados al terminar.
- Para `n > 0`, la complejidad temporal y el espacio auxiliar deben ser **O(log n)**. Para `n = 0`, ambos deben ser **O(1)**.

⬅️ [Volver a pilas](..)