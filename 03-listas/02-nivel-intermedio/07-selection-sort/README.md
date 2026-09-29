# Selection Sort en una Lista (Manipulando Nodos)

## Enunciado

Dada una lista con datos desordenados, implementa una función que la ordene 
de forma ascendente utilizando el algoritmo de **Selection Sort**. A diferencia 
de otros ejercicios de ordenamiento de listas, aquí el ordenamiento debe 
realizarse **manipulando los nodos** de la lista (reenlazando sus referencias), 
no intercambiando los datos almacenados en ellos.

## Ejemplo de ejecución

Para una lista con los valores `7, 12, 8, 6, 5, 86, 2`, el programa debería 
mostrar el resultado:

```
Lista original: 7 12 8 6 5 86 2 
Lista ordenada: 2 5 6 7 8 12 86 
```

## Restricciones

- El ordenamiento debe realizarse mediante el algoritmo de **Selection Sort**.
- **Se deben manipular los nodos** de la lista (reenlazar sus referencias); 
  no se permite intercambiar únicamente los datos/elementos entre nodos.
- No se deben crear nuevos nodos: solo se reordenan los nodos ya existentes.
- La complejidad temporal del algoritmo debe ser **O(n²)**.

## Nota
- No es necesario intercambiar los nodos, pero sí se debe insertar el menor nodo al inicio de la lista.

[Volver al nivel intermedio](..)