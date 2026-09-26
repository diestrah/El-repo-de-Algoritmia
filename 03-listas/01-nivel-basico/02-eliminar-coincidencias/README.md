# Eliminar Coincidencias en una Lista

## Enunciado

Dada una lista, implementa una función que elimine todos los elementos de la 
lista que coincidan con un dato dado.

## Ejemplo de ejecución

Insertando los valores `12, 17, 12, 18, 17, 12, 12, 19, 20, 12` al inicio de la 
lista (en ese orden), y eliminando las coincidencias con el valor `12`, el 
programa debería imprimir:

```
12 20 19 12 12 17 18 12 17 12 
20 19 17 18 17 
```

La primera línea corresponde a la lista antes de eliminar, y la segunda a la 
lista luego de eliminar todas las coincidencias con `12`.

## Restricciones

- La función debe eliminar **todas** las ocurrencias del dato indicado, sin importar en qué posición se encuentren (inicio, medio o final de la lista).
- La lista debe mantenerse correctamente enlazada después de cada eliminación.

[Volver al nivel básico](..)
