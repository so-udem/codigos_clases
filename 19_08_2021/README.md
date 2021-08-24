# Codigo de clases

**Fecha**: 19/08/2021

## Enunciados

1. Hacer un programa programa pida el nombre y el apellido de una persona y los imprima en orden inverso
   
   ```
   Digite el nombre: Ramon
   Digite el apellido: Valdez

   Hola Valdez, Ramon
   ```

* **Solución**: [ejemplo1.c](ejemplo1.c)

```C
#include <stdio.h>


int main() {
    // Variables locales
    char nom[51];   // 50 letras + null
    char apell[51]; // 50 letras + null

    printf("Digite el nombre: ");
    scanf("%s", nom);  // char[] --> %s   
    printf("Digite el apellido: ");
    scanf("%s", apell);  // char[] --> %s   
    printf("\nHola %s, %s\n", apell, nom);
    return 0;
}
```

2. Este programa que permita calcular la distancia entre 2 puntos

**Forma 1**:

```
Digite las coordenadas del punto 1: 0 0
El punto 1 es: (0.0, 0.0)

Digite las coordenadas del punto 2: 3 4
El punto 2 es: (3.0, 4.0)

La distancia entre (0.0, 0.0) y (3.0, 4.0) es 5.00
```


* **Solución**: [ejemplo2a.c](ejemplo2a.c)

```C
#include <stdio.h>
#include <math.h>  // Funciones matematicas (incluir -lm en el gcc cuando se incluya math.h)


int main() {
    /* Variables locales */
    double x1, y1; // Coordenada punto 1
    double x2, y2; // Coordenada punto 2
    double d;      // Diatancia

    /* Proceso */
    // Pedir la coordenadas
    printf("Digite las coordenadas del punto 1: ");
    scanf("%lf,%lf",&x1, &y1);  // Un enter se comporta como un espacio
    printf("El punto 1 es: (%.1lf, %.1lf)\n\n", x1, y1);

    printf("Digite las coordenadas del punto 2: ");
    scanf("%lf,%lf",&x2, &y2);  // Un enter se comporta como un espacio
    printf("El punto 1 es: (%.1lf, %.1lf)\n\n", x2, y2);

    d = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));   // sqrt --> raiz
                                                 // pow(x,y) --> x^y
    printf("La distancia entre (%.1lf,%.1lf) y (%.1lf,%.1lf) es %.2lf\n", x1, y1, x2, y2, d);
    return 0;
}
```

**Forma 2**:

```
Digite las coordenadas del punto 1 (x1,y1): (0,0)
El punto 1 es: (0.0, 0.0)

Digite las coordenadas del punto 2 (x2,y2): (3,4)
El punto 2 es: (3.0, 4.0)

La distancia entre (0.0, 0.0) y (3.0, 4.0) es 5.00
```

* **Solución**: [ejemplo2b.c](ejemplo2b.c)

```C
#include <stdio.h>
#include <math.h>  // Funciones matematicas (incluir -lm en el gcc cuando se incluya math.h)


int main() {
    /* Variables locales */
    double x1, y1; // Coordenada punto 1
    double x2, y2; // Coordenada punto 2
    double d;      // Diatancia

    /* Proceso */
    // Pedir la coordenadas
    printf("Digite las coordenadas del punto 1 (x1,y1): ");
    scanf("(%lf,%lf)",&x1, &y1);  // Se debe respetar la forma como se solicitan los datos (x1,y1)
    printf("El punto 1 es: (%.1lf, %.1lf)\n\n", x1, y1);

    printf("Digite las coordenadas del punto 2 (x2,y2): ");
    scanf("(%lf,%lf)",&x2, &y2);  // Se debe respetar la forma como se solicitan los datos (x2,y2)
    printf("El punto 1 es: (%.1lf, %.1lf)\n\n", x2, y2);

    d = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));   // sqrt --> raiz
                                                 // pow(x,y) --> x^y
    printf("La distancia entre (%.1lf,%.1lf) y (%.1lf,%.1lf) es %.2lf\n", x1, y1, x2, y2, d);
    return 0;
}
```