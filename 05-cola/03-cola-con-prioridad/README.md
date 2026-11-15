# 🎟️ Atención con Prioridades

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Múltiples colas FIFO · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Un centro de atención recibe pacientes con tres niveles de prioridad:

| Prioridad | Nivel | Cuota por ciclo |
|---|---|---|
| 1 | Alta | Hasta 3 pacientes |
| 2 | Media | Hasta 2 pacientes |
| 3 | Baja | Hasta 1 paciente |

Implementa una simulación en C++ utilizando **una cola por nivel de prioridad** de tu propia `BibliotecaCola`.

La entrada será un arreglo de pacientes. Cada registro contiene un identificador y una prioridad, y su posición en el arreglo representa el **orden de llegada**.

Primero registra a todos los pacientes en sus colas correspondientes. Después, realiza la atención por ciclos:

1. Atiende hasta **3 pacientes de prioridad alta**.
2. Atiende hasta **2 pacientes de prioridad media**.
3. Atiende hasta **1 paciente de prioridad baja**.

Si una cola tiene menos pacientes que su cuota, atiende únicamente a los disponibles. Las cuotas no utilizadas **no se transfieren** a otras prioridades ni se acumulan para el siguiente ciclo.

Repite los ciclos hasta atender a todos los pacientes. Dentro de cada prioridad, debes respetar el orden de llegada.

Muestra el ciclo, la categoría y el turno de cada paciente atendido. Los turnos deben numerarse consecutivamente desde `1`, sin reiniciarse entre categorías ni ciclos.

## 🧪 Ejemplo de ejecución

### Entrada

```cpp
struct Paciente {
    int id;
    int prioridad;
};

Paciente pacientes[] = {
    {101, 1}, {201, 2}, {301, 3},
    {102, 1}, {202, 2}, {302, 3},
    {103, 1}, {203, 2},
    {104, 1}, {105, 1}, {204, 2},
    {303, 3}, {205, 2}, {206, 2}
};
```

### Salida esperada

```text
=========== Ciclo 1 ===========
Alta:
Turno 1: Cliente #101 - Prioridad: 1
Turno 2: Cliente #102 - Prioridad: 1
Turno 3: Cliente #103 - Prioridad: 1
Media:
Turno 4: Cliente #201 - Prioridad: 2
Turno 5: Cliente #202 - Prioridad: 2
Baja:
Turno 6: Cliente #301 - Prioridad: 3

=========== Ciclo 2 ===========
Alta:
Turno 7: Cliente #104 - Prioridad: 1
Turno 8: Cliente #105 - Prioridad: 1
Media:
Turno 9: Cliente #203 - Prioridad: 2
Turno 10: Cliente #204 - Prioridad: 2
Baja:
Turno 11: Cliente #302 - Prioridad: 3

=========== Ciclo 3 ===========
Media:
Turno 12: Cliente #205 - Prioridad: 2
Turno 13: Cliente #206 - Prioridad: 2
Baja:
Turno 14: Cliente #303 - Prioridad: 3
```

En el segundo ciclo solo quedan dos pacientes de prioridad alta. Se atienden ambos y se continúa con prioridad media, sin aumentar su cuota.

En el tercer ciclo, la cola de prioridad alta está vacía y se omite su encabezado.

## 🚧 Restricciones

- Utiliza exactamente **tres colas FIFO**, una por nivel de prioridad, sin `std::queue` ni `std::priority_queue`.
- Puedes utilizar un arreglo de estructuras `Paciente` como entrada. No se requieren un menú ni lectura de comandos.
- Los identificadores serán enteros positivos únicos y las prioridades siempre estarán entre `1` y `3`. No necesitas validar estos datos.
- Adapta `ElementoCola` para almacenar el identificador y la prioridad.
- Registra a todos los pacientes antes de comenzar la atención.
- Conserva el orden de llegada dentro de cada nivel de prioridad.
- Respeta las cuotas fijas de **3, 2 y 1** pacientes por ciclo.
- Cada paciente debe ser atendido exactamente una vez.
- No imprimas categorías vacías ni ciclos sin pacientes.
- La solución debe ser **iterativa**, sin recursión.
- No se puede utilizar pilas, colas adicionales ni estructuras auxiliares para almacenar pacientes, aparte del arreglo de entrada.
- No se pueden manipular nodos ni enlaces.
- No consultes el frente ni desencoles cuando una cola esté vacía.
- Para `n` pacientes, la complejidad temporal debe ser **O(n)** y el espacio auxiliar **O(n)**, suponiendo.

⬅️ [Volver a colas](..)