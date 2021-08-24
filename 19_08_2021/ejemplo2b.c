/*
Archivo: ejemplo2a.c
Fecha: 19/08/2021
Enunciado: Este programa permite calcular la distancia entre 2 puntos

Comando de compilacion:

gcc ejemplo2b.c -lm -o ejemplo2b.out

*/

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
    scanf("(%lf,%lf)",&x1, &y1);  // // Se debe respetar la forma como se solicitan los datos (x1,y1)
    printf("El punto 1 es: (%.1lf, %.1lf)\n\n", x1, y1);

    printf("Digite las coordenadas del punto 2 (x2,y2): ");
    scanf("(%lf,%lf)",&x2, &y2);  // // Se debe respetar la forma como se solicitan los datos (x2,y2)
    printf("El punto 1 es: (%.1lf, %.1lf)\n\n", x2, y2);

    d = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));   // sqrt --> raiz
                                                 // pow(x,y) --> x^y
    printf("La distancia entre (%.1lf,%.1lf) y (%.1lf,%.1lf) es %.2lf\n", x1, y1, x2, y2, d);
    return 0;
}