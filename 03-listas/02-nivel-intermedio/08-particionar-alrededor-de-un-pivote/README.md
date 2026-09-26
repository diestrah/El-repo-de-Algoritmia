# Particionar una Lista Alrededor de un Pivote

## Enunciado

Dada una lista y un valor pivote, implementa una función que reorganice la 
lista de modo que todos los nodos con valor **menor** al pivote queden antes 
que los nodos con valor **mayor o igual** al pivote. Se debe conservar el 
**orden relativo original** de los elementos dentro de cada uno de los dos 
grupos.

## Ejemplo de ejecución

Para una lista con los valores `9, 3, 8, 4, 5, 2, 7` y un pivote `5`, el 
programa debería mostrar el resultado:

```
Lista original: 9 3 8 4 5 2 7 
Lista particionada (pivote 5): 3 4 2 9 8 5 7 
```

## Restricciones

- **No se deben crear nuevos nodos**: la partición debe realizarse manipulando 
  únicamente las referencias (enlaces) de los nodos existentes.
- Se debe conservar el **orden relativo original** de los nodos dentro de cada 
  grupo (menores y mayores o iguales al pivote).
- La complejidad temporal del algoritmo debe ser **O(n)**.

[Volver al nivel intermedio](..)