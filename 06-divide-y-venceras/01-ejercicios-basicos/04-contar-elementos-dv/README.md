# Contar Ocurrencias con Divide y Vencerás

## Enunciado

Dado un arreglo de números enteros no necesariamente ordenado, implementa una 
función recursiva en C++ que cuente cuántas veces aparece un número `x` dentro 
del arreglo, utilizando la técnica de **divide y vencerás**.

## Ejemplo de ejecución

Para el array `[2, 4, 7, 4, 15, 4, 31]` y `x = 4`, el programa debería imprimir:

3


## Restricciones

- La solución debe implementarse **únicamente utilizando recursión**, siguiendo el enfoque de **divide y vencerás** (dividir el problema en subproblemas más pequeños y combinar sus resultados).
- El arreglo de entrada **no necesita estar ordenado**.
- El caso base de la recursión corresponde a cuando el índice inicial es igual al índice final del subarreglo.
- La complejidad temporal del algoritmo debe ser **O(n)**.

[Volver al nivel básico](..)
