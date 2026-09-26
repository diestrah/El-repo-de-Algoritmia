# Separar una Lista en Dos (Pares e Impares)

## Enunciado

Dada una lista, implementa una función que la separe en dos listas distintas 
según la paridad del valor almacenado en cada nodo: los nodos con valores 
**impares** deben formar la primera lista, y los nodos con valores **pares** 
deben formar la segunda lista. La lista original queda vacía luego de la 
separación.

## Ejemplo de ejecución

Para una lista con los valores `10, 23, 34, 45, 56, 67` (en ese orden), 
el programa debería mostrar el resultado:

```
Lista original: 10 23 34 45 56 67
Lista 1 (impares): 23 45 67
Lista 2 (pares): 10 34 56
```

## Restricciones

- **No se deben crear nuevos nodos**: la separación debe realizarse manipulando 
  únicamente las referencias (enlaces) de los nodos existentes.
- Los nodos deben mantener su **orden relativo original** dentro de cada nueva lista.
- La lista original debe quedar vacía al finalizar la operación.
- La complejidad temporal del algoritmo debe ser **O(n)**.

[Volver al nivel intermedio](..)