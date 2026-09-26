# Intercalar Dos Listas por Posición

## Enunciado

Dadas dos listas, implementa una función que las intercale por posición, 
alternando un nodo de la primera lista y un nodo de la segunda en cada paso 
(sin importar los valores que contengan). Si una de las listas es más larga 
que la otra, los nodos restantes deben agregarse al final de la lista 
resultante.

## Ejemplo de ejecución

Para una lista 1 con los valores `1, 3, 5, 7, 9` y una lista 2 con los valores 
`2, 4, 6`, el programa debería mostrar el resultado:

```
Lista 1: 1 3 5 7 9 
Lista 2: 2 4 6 
Lista intercalada: 1 2 3 4 5 6 7 9 
```

## Restricciones

- **No se deben crear nuevos nodos**: la intercalación debe realizarse 
  manipulando únicamente las referencias (enlaces) de los nodos existentes.
- Si una lista es más corta que la otra, los nodos restantes de la lista más 
  larga deben agregarse al final de la lista resultante.
- Ambas listas originales deben quedar vacías luego de la intercalación.
- La complejidad temporal del algoritmo debe ser **O(n + m)**, donde `n` y `m` 
  son las longitudes de las listas 1 y 2 respectivamente.

[Volver al nivel intermedio](..)