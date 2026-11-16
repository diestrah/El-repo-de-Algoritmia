# ⏱️ Planificación Round Robin

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Rotación y actualización de una cola · 💾 **Espacio:** O(n)
📖 ¿Qué es Round Robin?

Imagina una fila de personas que necesitan usar una computadora. Cada persona tiene una tarea que puede requerir más o 
menos tiempo.

Para que una persona no ocupe la computadora hasta terminar toda su tarea, se establece un tiempo máximo por turno. Si 
termina, se retira; si no, vuelve al final de la fila y espera otra oportunidad.

Round Robin aplica esta misma idea para repartir el tiempo de ejecución entre varios procesos:

Un proceso es un programa en ejecución. En este ejercicio, lo representaremos únicamente mediante un identificador y el 
tiempo que le falta para terminar.

El procesador es el componente que ejecuta las instrucciones. En nuestra simulación, puede atender un solo proceso a la 
vez.

El quantum es el tiempo máximo que un proceso puede ejecutarse durante un turno.

Por ejemplo, con un quantum de 2, un proceso que necesita 5 unidades de tiempo se ejecutará en tres turnos: 2, 2 y 1. 
Entre esos turnos podrán ejecutarse otros procesos.

La cola representa la fila de espera: se retira el proceso del frente y, si todavía tiene trabajo pendiente después de
su turno, se coloca al final.

No necesitas conocimientos de sistemas operativos para resolver el ejercicio: basta con simular estos turnos y 
actualizar los tiempos. No hay que ejecutar programas reales ni hacer que el programa espere; el tiempo se 
representa mediante una variable entera.

## 📝 Enunciado

Un procesador debe ejecutar `n` procesos. Cada proceso tiene un identificador y un tiempo total de ejecución, expresado
en unidades enteras.

Implementa una simulación de **Round Robin** utilizando tu propia `BibliotecaCola`.

Todos los procesos están disponibles desde el instante `0`. Su posición en el arreglo de entrada determina el orden 
inicial de la cola.

En cada turno, el procesador debe:

1. Retirar el proceso del frente.
2. Ejecutarlo durante un máximo de `quantum` unidades de tiempo, sin exceder su tiempo restante.
3. Actualizar el tiempo restante y el tiempo total transcurrido.
4. Si el proceso terminó, informar su instante de finalización. En caso contrario, colocarlo al final de la cola.

Repite el procedimiento hasta completar todos los procesos.

Muestra cada intervalo de ejecución y el tiempo restante del proceso atendido. Al finalizar la simulación, muestra el 
tiempo total transcurrido.

## 🧪 Ejemplo de ejecución

### Entrada

```cpp
struct Proceso {
    int id;
    int tiempoRestante;
};

Proceso procesos[] = {
    {101, 5},
    {102, 3},
    {103, 1}
};

int quantum = 2;
```

### Salida esperada

```text
Proceso #101: de 0 a 2 - Restante: 3
Proceso #102: de 2 a 4 - Restante: 1
Proceso #103: de 4 a 5 - Restante: 0
Finaliza proceso #103 en tiempo 5
Proceso #101: de 5 a 7 - Restante: 1
Proceso #102: de 7 a 8 - Restante: 0
Finaliza proceso #102 en tiempo 8
Proceso #101: de 8 a 9 - Restante: 0
Finaliza proceso #101 en tiempo 9

Tiempo total: 9
```

El proceso `103` solo necesita una unidad, por lo que su turno termina en el instante `5`. El siguiente proceso comienza inmediatamente, sin esperar a completar el quantum.

## 🚧 Restricciones

- Utiliza **una sola cola** de tu propia `BibliotecaCola`.
- Puedes utilizar un arreglo de estructuras como entrada.
- Cada elemento de la cola debe almacenar el identificador y el tiempo restante de un proceso.
- Puedes asumir que los identificadores son positivos y únicos, los tiempos de ejecución son positivos y `quantum >= 1`.
- Todos los procesos llegan en el instante `0`.
- Solo se ejecuta un proceso a la vez.
- La solución debe ser **iterativa**, sin recursión.
- No utilices pilas, colas adicionales ni estructuras auxiliares para almacenar procesos, aparte del arreglo de entrada.
- No se pueden manipular nodos ni enlaces.
- El espacio auxiliar debe ser **O(n)**.
- La complejidad temporal debe ser **O(n + t)**, donde `t` es la cantidad total de turnos ejecutados:

  ```text
  t = suma de ceil(tiempoInicial / quantum) para cada proceso
  ```

  `ceil` representa el redondeo hacia arriba. Por ejemplo, un proceso de `5` unidades con quantum `2` requiere `3` turnos.

⬅️ [Volver a colas](..)