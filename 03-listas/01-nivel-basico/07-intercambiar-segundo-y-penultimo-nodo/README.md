# 🔀 Intercambiar el Segundo y Penúltimo Nodo de una Lista

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Manipulación de enlaces (segundo, penúltimo y antepenúltimo nodo) · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(1)

## 📝 Enunciado

Dada una lista, implementa una función que intercambie el segundo nodo con el 
penúltimo nodo de la misma.

## 🧪 Ejemplo de ejecución

**Ejemplo con una lista de 4 nodos**

Insertando los valores `3, 7, 5, 9` al final de la lista (en ese orden), el 
programa debería imprimir:

```text
Lista 1:
3 7 5 9 
3 5 7 9 
```

**Ejemplo con una lista de más de 4 nodos**

Insertando los valores `45, 48, 52, 59, 67, 70` al final de la lista (en ese orden), el programa debería imprimir:

```text
Lista 2:
45 48 52 59 67 70 
45 67 52 59 48 70 
```

En ambos casos, la primera línea corresponde a la lista antes del intercambio, 
y la segunda a la lista luego de intercambiar el segundo y penúltimo nodo.

## 🚧 Restricciones

- Se requiere que la lista tenga **al menos 4 nodos** para que el segundo y el penúltimo sean nodos diferentes; en caso contrario, la lista no se modifica.
- No se deben crear **nuevos nodos**.
- No se debe realizar un **intercambio de datos** entre nodos.
- La solución debe manipular **exclusivamente los enlaces** (punteros) entre los nodos.
- La complejidad temporal del algoritmo debe ser **O(n)**.
- La complejidad espacial del algoritmo debe ser **O(1)**.

⬅️ [Volver al nivel básico](..)