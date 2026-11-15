# 🧮 Evaluar una Expresión Postfija

🔴 **Dificultad:** Avanzada · 🧠 **Técnica:** Pila y procesamiento de expresiones · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(n)

## 📝 Enunciado

Dada una expresión en **notación postfija**, implementa una función en C++ que calcule su resultado utilizando tu propia `BibliotecaPila`.

En esta notación, cada operador aparece después de sus dos operandos. Por ejemplo:

```text
Notacion habitual: 12 + (3 * 4)
Notacion postfija: 12 3 4 * +
Resultado: 24
```

Los tokens están separados por uno o más espacios. Cada token puede ser:

- Un número entero, con signo negativo opcional: `12`, `0`, `-3`.
- Un operador binario: `+`, `-`, `*`, `/`.

El token `-` representa una resta; el token `-3` representa un número negativo.

La función debe indicar si la expresión es válida y proporcionar el resultado únicamente cuando lo sea.

## 🧪 Ejemplos de ejecución

```text
Expresion: 12 3 4 * +
Resultado: 24
```

```text
Expresion: 8 3 -
Resultado: 5
```

```text
Expresion: -7 2 /
Resultado: -3
```

```text
Expresion: -3 5 +
Resultado: 2
```

Una expresión también puede contener un único número:

```text
Expresion: 42
Resultado: 42
```

Debes detectar los siguientes errores:

| Expresión | Error |
|---|---|
| `2 +` | Operandos insuficientes |
| `2 3` | Operandos sobrantes |
| `5 0 /` | División entre cero |
| `2 x +` | Token inválido |
| `12x` | Token inválido |
| Cadena vacía o solo espacios | Expresión vacía |

## 🚧 Restricciones

- Utiliza **una sola pila** de tu propia `BibliotecaPila`.
- La solución debe ser **iterativa**, sin recursión.
- Accede a la pila únicamente mediante sus operaciones públicas, sin manipular directamente sus nodos ni enlaces.
- Puedes utilizar cadenas y herramientas como `strtok` para separar los tokens, pero no otra estructura que sustituya la pila de evaluación.
- Todos los tokens serán **enteros válidos**, positivos, negativos o cero, u operadores de un solo carácter: `+`, `-`, `*`, `/`. No es necesario validar su formato.
- Los tokens estarán separados por uno o más espacios y deben procesarse de izquierda a derecha.
- Respeta el orden de los operandos en la resta y la división.
- La división es **entera y trunca hacia cero**, como en C++.
- Puedes asumir que los operandos y resultados intermedios caben en `int`, y que no ocurre el caso `INT_MIN / -1`.
- Detecta operandos insuficientes, división entre cero y expresiones que no dejen exactamente un resultado.
- No consultes el tope ni desapiles cuando la pila esté vacía.
- No utilices un valor numérico especial para indicar errores, pues podría ser un resultado válido.
- Libera los recursos utilizados, incluso cuando se detecte un error.
- La complejidad temporal debe ser **O(n)** y el espacio auxiliar **O(n)** en el peor caso, donde `n` es la longitud del texto de entrada.

## 📖 Apoyo: separar una expresión con `strtok`

La función `strtok`, disponible en `<cstring>`, permite separar una cadena en **tokens** utilizando caracteres delimitadores. En este ejercicio, el delimitador será el espacio.

```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Debe ser un arreglo modificable: strtok cambia su contenido.
    char cursos[] = "progra2,algoritmia,bd,funsis,requisitos";

    // Imprimimos antes de que strtok modifique la cadena.
    cout << "Cursos: " << expresion << endl;

    // La primera llamada recibe la cadena que queremos separar.
    // El segundo parámetro es el delimitador.
    char* token = strtok(expresion, ",");

    while (token != nullptr) {
        cout << "curso: " << token << endl;

        // Las siguientes llamadas reciben nullptr para continuar
        // recorriendo la misma cadena.
        token = strtok(nullptr, ",");
    }

    return 0;
}
```

### Salida esperada

```text
Cursos: progra2,algoritmia,bd,funsis,requisitos
curso: progra2
curso: algoritmia
curso: bd
curso: funsis
curso: requisitos
```

### Consideraciones

- La primera llamada recibe el arreglo; las siguientes reciben `nullptr`.
- Cuando no quedan tokens, la función devuelve `nullptr`.
- Los espacios consecutivos se omiten: no generan tokens vacíos.
- `strtok` modifica el arreglo original, reemplazando separadores por `'\0'`.
- El puntero devuelto apunta dentro del mismo arreglo; no crea una copia del token.
- No utilices un literal como `strtok("hola 123 mundo")`: la cadena debe ser modificable.
- Evita iniciar otra separación con `strtok` dentro del mismo recorrido, porque la función mantiene internamente la posición de la secuencia actual.
  
⬅️ [Volver a pilas](..)