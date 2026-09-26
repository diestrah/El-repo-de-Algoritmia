# Insertar Antes de un Elemento en una Lista

## Enunciado

Dada una lista, implementa una función que inserte un nuevo elemento justo 
antes de la primera aparición de un elemento dado. Si el elemento buscado no 
existe en la lista, el nuevo elemento debe insertarse al final.

## Ejemplo de ejecución

Insertando los valores `12, 16, 12, 17, 19, 13, 14` al inicio de la lista (en ese orden), el programa debería imprimir:

```
14 13 19 17 12 16 12 
```

Luego de:
- Insertar `20` antes de `14` (primer elemento de la lista).
- Insertar `21` antes de `17` (elemento intermedio).
- Insertar `22` antes de `100` (no existe, por lo que se inserta al final).

El programa debería imprimir:

```
20 14 13 19 21 17 12 16 12 22 
```

## Restricciones

- La inserción debe realizarse **antes de la primera aparición** del elemento buscado.
- Si el elemento buscado **no existe** en la lista, el nuevo elemento debe insertarse **al final**.
- Si la lista está vacía, el nuevo elemento se convierte en el único elemento de la lista.

[Volver al nivel básico](..)
