#include <stdio.h>
#include <math.h>

/** Macros */
#define PI 3.14

// Converts degrees to radians.
#define degreesToRadians(angleDegrees) (angleDegrees * PI / 180.0)

// Converts radians to degrees.
#define radiansToDegrees(angleRadians) (angleRadians * 180.0 / PI)

/** Declaracion de  estructuras */
typedef struct complejo {
  float re;
  float im;
} complejo;

/** Declaracion de funciones */
void imprimirComplejo(complejo); // void imprimirComplejo(complejo num)
double calcularMagnitud(complejo);
complejo sumarComplejos(complejo c1, complejo c2);
void test1(void);
void test2(void);

/** Funcion main */
int main() {
  /* Creando los numeros */
  // test1();  ---> Comentado por que ya se probo que dio bien
  // test2();

  /*
  Usando el operador flecha (->) Es empleado cuando se hace uso de punteros a estructuras, su sintaxis es de la siguiente forma:
  
  <puntero_estructura>-><nombre_miembro> = datos;
  */
 complejo c1 = {2, -11};
 complejo c2 = {.re = 8, 
                .im = 9};
/*
 imprimirComplejo(c1);
 printf("\n");
 imprimirComplejo(c2);
 printf("\n");
 
 */

complejo *ptr1 = &c1;

 complejo *ptr2;
 ptr2 = &c2;

 /* Imprimiento con el operador . */
 printf("----- c1 ----\n");
 printf("-> parte real: %f\n", c1.re);
 printf("-> parte imaginaria: %f\n", c1.im);
 /* Imprimiento con el operador . */
 printf("----- c1 usado el apuntador ----\n");
 printf("-> parte real: %f\n", ptr1->re);
 printf("-> parte imaginaria: %f\n", ptr1->im);
 // Para el llamado a la funcion
 printf("\n----- c2 ----\n");
 imprimirComplejo(c2); 
 printf("\n");
 imprimirComplejo(*ptr2); 
 printf("\n");
  return 0;
}

/** Definicion de funciones */
void imprimirComplejo(complejo num) {
  if (num.im == 0) {
    // Real puro
    printf("%.2f",num.re);
  }
  else if (num.re == 0) {
    // Imaginario puro
    printf("%.2f*i",num.im);
  }
  else if (num.im < 0) {
    // Complejo con parte imaginaria negativa
    printf("%.2f - %.2f*i",num.re,(-1)*num.im);
  }
  else {
    // Complejo con parte imaginaria positiva
    printf("%.2f + %.2f*i",num.re,num.im);
  }  
}

double calcularMagnitud(complejo num) {
  return sqrt(pow(num.re,2) + pow(num.im,2));
}

double obtenerAngulo(complejo num) {
  if (num.re >= 0 & num.im >= 0) {
    // Cuadrante I
    return radiansToDegrees(atan2(num.im,num.re));
  }
  else if(num.re < 0 & num.im >= 0) {
    // Cuadrante II
    return 180 - radiansToDegrees(atan2(-num.im,num.re));
  }
  else if(num.re < 0 & num.im < 0) {
    // Cuadrante III
    return 180 + radiansToDegrees(atan2(-num.im,-num.re));
  }
  else {
    // Cuadrante IV
    return 360 - radiansToDegrees(atan2(-num.im,num.re));
  }  
}

complejo sumarComplejos(complejo c1, complejo c2) {
    complejo solucion;
    solucion.re = c1.re + c2.re;
    solucion.im = c1.im + c2.im;
    return solucion;
}

void test1(void) {
  complejo c1 = {2, -11}, c2 = {8, 9};
  complejo c3 = sumarComplejos(c1,c2);
  imprimirComplejo(c1);
  printf("\n");
  imprimirComplejo(c2);
  printf(" + \n-------------------\n");
  imprimirComplejo(c3);
}

void test2(void) {
  complejo c1 = {sqrt(3),1};
  complejo c2 = {-1,1};
  complejo c3 = {-sqrt(3),-1};
  complejo c4 = {1,-1};
  printf("mag(c1) = %.1lf, ang(c1) = %.1lf\n",calcularMagnitud(c1),obtenerAngulo(c1));
  printf("mag(c2) = %.1lf, ang(c2) = %.1lf\n",calcularMagnitud(c2),obtenerAngulo(c2));
  printf("mag(c3) = %.1lf, ang(c3) = %.1lf\n",calcularMagnitud(c3),obtenerAngulo(c3));
  printf("mag(c4) = %.1lf, ang(c4) = %.1lf\n",calcularMagnitud(c4),obtenerAngulo(c4));
}