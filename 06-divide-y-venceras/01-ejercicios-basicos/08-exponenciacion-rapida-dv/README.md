# ⚡ Exponenciación Rápida con Divide y Vencerás

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Divide y vencerás (reducir el exponente a la mitad) · ⏱️ **Tiempo:** O(log n) · 💾 **Espacio:** O(log n)

## 📝 Enunciado

Dados una base y un exponente, implementa una función recursiva en C++ que calcule la **potencia** (base elevada al exponente) utilizando la técnica de **divide y vencerás**. Los parámetros que recibe la función son la base y el exponente.

## 🧪 Ejemplo de ejecución

Para `base = 2` y `exp = 10`, el programa debería imprimir:

```text
1024
```

## 🚧 Restricciones

- La solución debe implementarse **únicamente utilizando recursión**, siguiendo el enfoque de **divide y vencerás**: calcular la potencia de la mitad del exponente y combinar el resultado.
- El exponente debe ser **mayor o igual que `0`**.
- El caso base de la recursión corresponde a cuando el exponente es `0`.
- No se puede utilizar la librería `<cmath>`.
- La complejidad temporal del algoritmo debe ser **O(log n)**, donde `n` es el exponente.

⬅️ [Volver a ejercicios básicos](..)