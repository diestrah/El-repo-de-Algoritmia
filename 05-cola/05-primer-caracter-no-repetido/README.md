# 🔤 Primer Carácter No Repetido

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Cola y arreglo de frecuencias · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(1)

## 📝 Enunciado

Dada una secuencia de letras minúsculas, implementa una función en C++ que determine el **primer carácter que no se ha repetido después de cada ingreso**, utilizando tu propia `BibliotecaCola`.

Los caracteres se procesan de izquierda a derecha. Después de leer cada uno, debes mostrar el carácter que:

- Aparece exactamente una vez en la parte de la secuencia procesada hasta ese momento.
- Llegó primero entre los que cumplen esa condición.

Si no existe ninguno, muestra `-`.

Por ejemplo, al procesar `aabc`:

- Llega `a`: el primer carácter no repetido es `a`.
- Llega otro `a`: ya no existe un carácter no repetido.
- Llega `b`: el primer carácter no repetido es `b`.
- Llega `c`: sigue siendo `b`, porque llegó antes que `c`.

## 🧪 Ejemplos de ejecución

```text
Entrada: aabc
Resultado: a - b b
```

```text
Entrada: abcabc
Resultado: a a a b c -
```

```text
Entrada: aabbcd
Resultado: a - b - c c
```

```text
Entrada: z
Resultado: z
```

Para una cadena vacía, no se muestra ningún resultado.

## 🚧 Restricciones

- La entrada será un **arreglo de caracteres terminado en `'\0'`**, compuesto únicamente por letras minúsculas de `a` a `z`.
- No se puede utilizar la biblioteca `string`.
- Solo se puede utilizar **una cola**. 
- No se permiten pilas, colas adicionales ni otras estructuras auxiliares.
- Puedes adaptar `ElementoCola` para almacenar un carácter.
- Se permite un **arreglo auxiliar de 26 posiciones** para registrar frecuencias. Puedes relacionar cada letra con su posición mediante `caracter - 'a'`.
- Registra cada carácter en la cola **únicamente en su primera aparición**.
- La solución debe ser **iterativa**, sin recursión.
- Procesa cada carácter una sola vez y muestra su respuesta antes de continuar con el siguiente.
- No vuelvas a recorrer el prefijo procesado ni las 26 frecuencias para buscar la respuesta después de cada ingreso.
- No se pueden manipular nodos ni enlaces.
- No consultes el frente ni desencoles cuando la cola esté vxacía.
- La complejidad temporal debe ser **O(n)**: cada carácter se procesa una vez y cada candidato se encola y desencola como máximo una vez.
- El espacio auxiliar es **O(1)** respecto de `n`, porque el alfabeto tiene un tamaño fijo de 26 letras.


## 🔀 Versiones de la solución

El ejercicio incluye dos implementaciones:

| Archivo | Ejecutable | Enfoque |
|---|---|---|
| `main.cpp` | `primer_caracter_no_repetido` | Sin consultar el frente: conserva el candidato actual en una variable y utiliza la cola para los siguientes candidatos. |
| `main_cima.cpp` | `primer_caracter_no_repetido_con_cima` | Utiliza `cima` para consultar el frente sin retirarlo. Desencola únicamente los candidatos repetidos. |

Ambas versiones generan los mismos resultados y utilizan un arreglo de frecuencias. Su complejidad es **O(n) de tiempo y O(1) de espacio auxiliar**, considerando el alfabeto fijo de 26 letras.

> En esta biblioteca, `cima` consulta el elemento ubicado al **frente de la cola**, sin eliminarlo.

Puedes compilar y ejecutar cada versión seleccionando su ejecutable correspondiente en el proyecto CMake.

⬅️ [Volver a colas](..)