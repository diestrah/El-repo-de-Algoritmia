# ⛰️ Buscar el Pico de un Arreglo Bitónico

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Divide y vencerás (descartar la mitad sin el pico) · ⏱️ **Tiempo:** O(log n) · 💾 **Espacio:** O(log n)

## 📝 Enunciado

Un arreglo **bitónico** es aquel cuyos valores primero **crecen** y luego **decrecen**. Dado un arreglo bitónico de enteros, implementa una función recursiva en C++ que encuentre su **pico**, es decir, el valor máximo del arreglo, utilizando la técnica de **divide y vencerás**.

## 🧪 Ejemplo de ejecución

Para el array `[1, 3, 17, 12, 9, 5, 2]`, el programa debería imprimir:

```text
pico: 17
```

## 🚧 Restricciones

- La solución debe implementarse **únicamente utilizando recursión**, siguiendo el enfoque de **divide y vencerás**.
- El arreglo debe ser **bitónico**: sus valores crecen hasta el pico y luego decrecen.
- No pueden existir **dos picos** en el arreglo, es decir, no hay valores repetidos que lo empaten.
- No se debe recorrer todo el arreglo: en cada llamada se debe **descartar una mitad**.
- El caso base de la recursión corresponde a cuando el índice inicial es igual al índice final.
- La complejidad temporal del algoritmo debe ser **O(log n)**.

⬅️ [Volver a ejercicios básicos](..)