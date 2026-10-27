# 🗑️ Eliminar Coincidencias en una Lista

🟢 **Dificultad:** Básica · 🧠 **Técnica:** Recorrido con `actual` y `anterior` · ⏱️ **Tiempo:** O(n) · 💾 **Espacio:** O(1)

## 📝 Enunciado

Dada una lista, implementa una función que elimine todos los elementos de la 
lista que coincidan con un dato dado.

## 🧪 Ejemplo de ejecución

Insertando los valores `12, 17, 12, 18, 17, 12, 12, 19, 20, 12` al inicio de la 
lista (en ese orden), y eliminando las coincidencias con el valor `12`, el 
programa debería imprimir:

```text
12 20 19 12 12 17 18 12 17 12 
20 19 17 18 17 
```

La primera línea corresponde a la lista antes de eliminar, y la segunda a la 
lista luego de eliminar todas las coincidencias con `12`.

## 🚧 Restricciones

- La función debe eliminar **todas** las ocurrencias del dato indicado, sin importar en qué posición se encuentren (inicio, medio o final de la lista).
- La lista debe mantenerse correctamente enlazada después de cada eliminación.
- Los nodos eliminados deben **liberarse de memoria**.
- La complejidad temporal del algoritmo debe ser **O(n)**.
- La complejidad espacial del algoritmo debe ser **O(1)**.

⬅️ [Volver al nivel básico](..)