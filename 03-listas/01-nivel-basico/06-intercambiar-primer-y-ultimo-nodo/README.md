# Intercambiar el Primer y Último Nodo de una Lista

## Enunciado

Dada una lista, implementa una función que intercambie el nodo inicial con el 
nodo final de la misma.

## Ejemplo de ejecución

**Caso 1: lista con dos elementos**

Insertando los valores `4, 6` al inicio de la lista (en ese orden), el programa 
debería imprimir:

```
Lista 1: 
6 4 
4 6 
```

**Caso 2: lista con más de dos elementos**

Insertando los valores `22, 23, 24, 27, 29` al inicio de la lista (en ese orden), 
el programa debería imprimir:

```
Lista 2:
29 27 24 23 22 
22 27 24 23 29 
```

En ambos casos, la primera línea corresponde a la lista antes del intercambio, 
y la segunda a la lista luego de intercambiar el primer y último nodo.

## Restricciones

- No se deben crear **nuevos nodos**.
- No se debe realizar un **intercambio de datos** entre nodos.
- La solución debe manipular **exclusivamente los enlaces** (punteros) entre los nodos.
- Si la lista está vacía o tiene un solo elemento, la lista no debe modificarse.

[Volver al nivel básico](..)
