# Potencia Recursiva

## Enunciado

Realiza un programa que calcula la potencia de un número (base elevada a un exponente) 
ingresados por el usuario, utilizando recursión. El cálculo se repite en un bucle, 
permitiendo ingresar múltiples pares de valores hasta que el usuario decide 
detener la ejecución.

## Ejemplo de ejecución

Ingrese número y base: 3 4 <br>
La potencia es: 81 <br>
<br>
Ingrese número y base: 7 0 <br>
La potencia es: 1 <br>
<br>
Ingrese número y base: 2 6 <br>
La potencia es: 64 <br>
<br>
Ingrese número y base: 0 5 <br>
La potencia es: 0 <br>
<br>

El programa continúa pidiendo valores mientras la base ingresada sea distinta de `0`.

## Restricciones

- La solución debe implementarse **únicamente utilizando recursión** (no se permiten bucles para el cálculo de la potencia en sí).
- La función encargada de calcular la potencia debe declararse con **dos parámetros** (base y exponente).
- No se puede utilizar la librería `<cmath>`.
- No se puede utilizar el operador `^`.
- El caso base de la recursión corresponde a exponente `0`.

[Volver al nivel básico](..)
