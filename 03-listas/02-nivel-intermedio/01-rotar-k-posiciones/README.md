# Rotar una Lista k Posiciones (Izquierda o Derecha)

## Enunciado

Dada una lista, un número entero `k` y una dirección de rotación, implementa 
una función que rote la lista `k` posiciones hacia la **izquierda** o hacia la 
**derecha**, según se indique.

- **Rotación a la izquierda**: los primeros `k` nodos pasan a formar el final 
  de la lista.
- **Rotación a la derecha**: los últimos `k` nodos pasan a formar el inicio 
  de la lista.

## Ejemplo de ejecución

Para una lista con los valores `10, 20, 30, 40, 50, 60` y `k = 2`:

```
Lista original: 10 20 30 40 50 60 
Lista rotada a la izquierda (k=2): 30 40 50 60 10 20 
Lista rotada a la derecha (k=2): 50 60 10 20 30 40 
```

## Restricciones

- **No se deben crear nuevos nodos**: la rotación debe realizarse manipulando 
  únicamente las referencias (enlaces) de los nodos existentes.
- El valor de `k` puede ser mayor que la longitud de la lista, en cuyo caso 
  debe tratarse como `k % longitud`.
- Si la lista está vacía o tiene un solo elemento, la lista no debe modificarse.
- La complejidad temporal del algoritmo debe ser **O(n)**.

[Volver al nivel intermedio](..)