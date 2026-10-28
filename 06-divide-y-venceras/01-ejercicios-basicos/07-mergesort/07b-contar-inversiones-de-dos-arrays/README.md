
## 🧩 Parte B: Contar inversiones de dos arrays (merge)

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Fusión con conteo · ⏱️ **Tiempo:** O(n + m) · 💾 **Espacio:** O(n + m)

### 📝 Enunciado

Dados dos arreglos de enteros **ordenados de forma ascendente**, `A` y `B`, cuenta cuántas **inversiones** existen entre ellos. Una inversión es un par formado por un elemento de `A` y otro de `B` en el que el elemento de `A` es **estrictamente mayor** que el de `B`.

Mientras cuentas, inserta los valores ordenadamente en un nuevo arreglo. Al final, imprime ese arreglo y la cantidad de inversiones.

### 🧪 Ejemplo de ejecución

Para los arreglos `A = [2, 4]` y `B = [1, 3, 5]`, el programa debería imprimir:

```text
1 2 3 4 5
3 inversiones
```

Las inversiones son `(2, 1)`, `(4, 1)` y `(4, 3)`.

### 🚧 Restricciones

- Ambos arreglos de entrada deben estar **ordenados de forma ascendente**.
- Las inversiones deben contarse **durante la fusión**, sin comparar todos los pares posibles (no se permite una solución de tipo O(n · m)).
- Dos elementos iguales **no** forman una inversión.
- El resultado de la fusión debe almacenarse en un **nuevo arreglo** ordenado.
- La complejidad temporal del algoritmo debe ser **O(n + m)**.
- La complejidad espacial del algoritmo debe ser **O(n + m)**.

[Siguiente ejercicio](07c-contar-inversiones-completo-(mergesort))