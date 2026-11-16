# Ejercicios de Colas en C++

Colección de ejercicios progresivos para aprender y practicar el uso de colas en C++, utilizando una implementación propia.

El objetivo es comprender el principio **FIFO** (*First In, First Out*: el primero en entrar es el primero en salir) y aplicarlo en problemas de generación, simulación, procesamiento de caracteres, recursión y exploración de matrices.

## Estructura de los ejercicios

- `main.cpp`: contiene el programa de prueba y la solución del ejercicio.
- `BibliotecaCola`: biblioteca de apoyo para manipular las colas.
- `README.md`: contiene el enunciado, ejemplos y restricciones.

Algunos ejercicios incluyen versiones adicionales, descritas en su propio README.

## Ruta de aprendizaje

### 🟢 Generación y operaciones básicas

Introducción al orden FIFO y al uso de una cola para mantener elementos pendientes de procesar.

| N.º | Ejercicio | Objetivo |
|---|---|---|
| 01 | [Generar números binarios](./01-generar-numeros-binarios) | Generar las primeras `n` representaciones binarias utilizando una cola de enteros. |

### 🟡 Rotación, planificación y procesamiento

Aplicaciones que requieren rotar elementos, distribuir turnos, administrar prioridades y conservar candidatos en orden de llegada.

| N.º | Ejercicio | Objetivo |
|---|---|---|
| 02 | [Problema de Josephus](./02-problema-de-josephus) | Simular la eliminación circular de participantes hasta encontrar al sobreviviente. |
| 03 | [Atención con prioridades y cuotas](./03-cola-con-prioridad) | Organizar pacientes en tres colas y atenderlos por ciclos con cuotas de 3, 2 y 1. |
| 04 | [Planificación Round Robin](./04-planificacion-round-robin) | Repartir tiempo entre tareas y reencolar las que todavía tengan trabajo pendiente. |
| 05 | [Primer carácter no repetido](./05-primer-caracter-no-repetido) | Identificar el primer carácter no repetido después de cada ingreso, utilizando una cola y un arreglo de frecuencias. |

> El ejercicio 05 incluye dos versiones: una conserva el candidato actual en una variable y otra utiliza `cima` para consultar el frente de la cola sin retirarlo.

### 🟡 Recursión aplicada a colas

Uso de las llamadas recursivas para reorganizar una cola sin crear estructuras auxiliares explícitas.

| N.º | Ejercicio | Objetivo |
|---|---|---|
| 06 | [Invertir cola](./06-invertir-cola) | Invertir el orden de los elementos mediante recursión, sin pilas ni colas adicionales. |



### 🔴 Exploración de matrices con BFS

Introducción a la búsqueda en anchura: la cola permite procesar posiciones por distancia o por tiempo de llegada.

| N.º | Ejercicio | Objetivo |
|---|---|---|
| 07 | [Camino mínimo en un laberinto](./07-camino-minimo-laberinto) | Encontrar la menor cantidad de movimientos desde una posición inicial hasta la esquina inferior derecha. |
| 08 | [Propagación en una matriz](./08-propagacion-en-matriz) | Calcular el tiempo necesario para alcanzar las celdas pendientes desde varios focos simultáneos. |

⬅️ [Volver al índice principal](..)