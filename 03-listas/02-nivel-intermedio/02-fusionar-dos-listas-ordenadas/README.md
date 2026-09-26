# Fusionar Dos Listas Ordenadas

## Enunciado

Dadas dos listas ordenadas de forma ascendente, implementa una función que las 
combine en una sola lista, también ordenada de forma ascendente.

## Ejemplo de ejecución

Para una lista 1 con los valores `11, 15, 17, 20` y una lista 2 con los valores 
`12, 14, 16, 22`, el programa debería mostrar el resultado:

```
Lista 1: 11 15 17 20 
Lista 2: 12 14 16 22 
Lista fusionada: 11 12 14 15 16 17 20 22 
```

## Restricciones

- **No se deben crear nuevos nodos**: la fusión debe realizarse manipulando 
  únicamente las referencias (enlaces) de los nodos existentes.
- Ambas listas de entrada deben estar previamente **ordenadas de forma ascendente**.
- La lista resultante debe mantener el **orden ascendente**.
- Ambas listas deben terminar vacías.
- La complejidad temporal del algoritmo debe ser **O(n + m)**, donde `n` y `m` 
  son las longitudes de las listas 1 y 2 respectivamente.

[Volver al nivel intermedio](..)