# ✖️ Multiplicación Rápida con Divide y Vencerás

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Divide y vencerás (reducir `b` a la mitad) · ⏱️ **Tiempo:** O(log n) · 💾 **Espacio:** O(log n)

## 📝 Enunciado

Dados dos números enteros `a` y `b`, implementa una función recursiva en C++ que calcule su **producto** utilizando la técnica de **divide y vencerás**, sin usar el operador `*`. El algoritmo debe funcionar tanto para valores **positivos** como **negativos**.

## 🧪 Ejemplo de ejecución

Para `a = 7` y `b = 6`, el programa debería imprimir:

```text
42
```

Para `a = 7` y `b = -6`, el programa debería imprimir:

```text
-42
```

## 🚧 Restricciones

- La solución debe implementarse **únicamente utilizando recursión**, siguiendo el enfoque de **divide y vencerás**: calcular el producto con la mitad de `b` y combinar el resultado.
- El algoritmo debe funcionar con valores **positivos y negativos** de `a` y `b`.
- No se puede utilizar el operador `*`.
- El caso base de la recursión corresponde a cuando `b` es igual a `0`.
- La complejidad temporal del algoritmo debe ser **O(log n)**, donde `n` es el valor absoluto de `b`.

⬅️ [Volver a ejercicios básicos](..)