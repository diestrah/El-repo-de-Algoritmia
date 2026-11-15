# 🗼 Torres de Hanói con Pilas

🟡 **Dificultad:** Intermedia · 🧠 **Técnica:** Recursión y pilas · ⏱️ **Tiempo:** O(2ⁿ) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Representa las torres `A`, `B` y `C` mediante tres pilas de tu propia `BibliotecaPila`.

Inicialmente, la torre `A` contiene `n` discos, ordenados desde el más pequeño en el tope hasta el más grande en la base. Las torres `B` y `C` están vacías.

Cada disco se representa mediante un entero de `1` a `n`: cuanto mayor sea el número, mayor será el disco.

Implementa una solución recursiva que traslade todos los discos de **`A` a `C`**, utilizando `B` como torre auxiliar y realizando el **mínimo número de movimientos**.

Debes respetar estas reglas:

- Solo puedes mover un disco por vez.
- Solo puedes retirar el disco ubicado en el tope de una torre.
- Nunca puedes colocar un disco grande sobre uno más pequeño.

Cada movimiento debe modificar realmente las pilas y mostrarse por pantalla. Al terminar, muestra el estado final de las tres torres y la cantidad de movimientos realizados.

## 🧪 Ejemplo de ejecución

Para `n = 2`, mostrando las pilas **desde el tope hacia la base**:

```text
Estado inicial:
A: 1 2
B: vacia
C: vacia

Mover disco 1 de A a B
Mover disco 2 de A a C
Mover disco 1 de B a C

Estado final:
A: vacia
B: vacia
C: 1 2

Total de movimientos: 3
```

Para `n = 3`, el estado final debe ser:

```text
Estado final:
A: vacia
B: vacia
C: 1 2 3

Total de movimientos: 7
```

## 🚧 Restricciones

- Considera entradas entre **1 y 15 discos**.
- Utiliza exactamente **tres pilas** de tu `BibliotecaPila`, sin `std::stack`.
- La solución debe ser **recursiva**.
- No se permiten otras estructuras para almacenar los discos. Se permite la pila de llamadas de la recursión.
- No se pueden manipular nodos ni enlaces.
- Define una función para realizar un movimiento entre dos torres. Debe verificar que el origen no esté vacío y que el destino permita colocar el disco.
- Un movimiento inválido debe informarse sin modificar las torres.
- Cuenta únicamente los movimientos realizados correctamente.
- Para completar el ejercicio, deben realizarse exactamente **2ⁿ − 1 movimientos**.
- Libera los recursos de las tres pilas al terminar.
- La complejidad temporal debe ser **O(2ⁿ)** y el espacio total de almacenamiento de discos y llamadas recursivas **O(n)**, sin contar la salida.

⬅️ [Volver a pilas](..)