/*
Archivo: ejercicio9.c
Fecha: 24/08/2021

Enunciado: 
Los conductores se preocupan acerca del kilometraje de sus automóviles. Un conductor ha llevado el registro de varios viajes, 
anotando los kilómetros conducidos y los litros usados en cada viaje. 

Desarrolle un programa en C que utilice una instrucción 
while para recibir como entrada los kilómetros conducidos y los litros usados por cada viaje, y que imprima el total de kilómetros por 
litro obtenidos en todos los reabastecimientos hasta este punto.

Escriba los kilometros usados (-1 para salir): 287
Escriba los litros: 13
KPL en este reabastecimiento: 22.076923
Total KPL: 22.076923

Escriba los kilometros usados (-1 para salir): 200
Escriba los litros: 10
KPL en este reabastecimiento: 20.000000
Total KPL: 42.076923

Escriba los kilometros usados (-1 para salir): 120
Escriba los litros: 5
KPL en este reabastecimiento: 24.000000
Total KPL: 66.076923

Escriba los kilometros usados (-1 para salir): -1


Comando de compilacion:
gcc ejercicio9.c -o ejercicio9.out
*/

#include <stdio.h>



/* Declaracion de funciones */
double obtener_KPL(int, int);


// Funcion de pruebas 
void test(void);


/* Funcion main */
int main() {
    /* Variables locales */
    

    /* Codigo de la aplicacion */


    /* Codigo test */
    test();

  
   
    return 0;
}

/* Definicion de funciones */
double obtener_KPL(int km, int litros) {
    return (double)km/litros;
}

void test(void) {
    printf("Prueba funcion obtener_KPL\n");
    printf("%lf\n",obtener_KPL(287,13));
    printf("%lf\n",obtener_KPL(200,10));
    printf("%lf\n",obtener_KPL(120,5));

}

