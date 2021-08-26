/*
Archivo: ejemplo1.c
Fecha: 26/08/2021

Enunciado: 
Este programa sirve para calcular la serie Fibonacci.

Comando de compilacion:
gcc -Wall ejemplo1.c -o ejemplo1.out
*/

#include <stdio.h>

/* Constantes */
#define TRUE 1
#define FALSE 0

/* Declaracion de funciones */
int fibonacci(int n);


// Funcion de pruebas 
void tests(void); 

/* Funcion main */
int main() {
    // Variables locales
    int num_terminos;



    /* Codigo de la aplicacion */
    printf("Bienvenido\n");
    printf("Digite el numero de terminos a mostrar (-1 para terminar): ");
    scanf("%d",&num_terminos);
    while(num_terminos > -1) {
        // Despliegue de los numeros de la serie
        printf("Terminos:\n");
        switch(num_terminos) {
            case 1:
                printf("%d\n", fibonacci(0));
                break;
            case 0:
                printf("No se muestran terminos");
                break;
            default:
                for(int i = 0; i < num_terminos; i++) {
                    printf("%d\n", fibonacci(i));
                }
                break;
            }
        printf("Digite el numero de terminos a mostrar (-1 para terminar): ");
        scanf("%d",&num_terminos);
    }
    printf("chao bambino\n");

    /* 
    Pruebas
     Se comenta cuando las pruebas dan
    */
    // tests();
   
    return 0;
}

/* Definicion de funciones */
void tests(void) {
    printf("Pruebas...\n");
    printf("%d\n",fibonacci(0));
    printf("%d\n",fibonacci(1));
    printf("%d\n",fibonacci(2));
    printf("%d\n",fibonacci(7));
}

int fibonacci(int n) {
    // Coloque su codigo...
    int t_n2 = 0;  // Termino t(n-2)
    int t_n1 = 1;  // Termino t(n-1)
    int t_n;       // Termino t(n)

    if(n == 0) {
        return t_n2;     
    }
    else if(n == 1) {
        return t_n1;
    }
    else {
        for(int i = 2; i <= n; i++) {
            t_n = t_n1 + t_n2;
            t_n2 = t_n1;
            t_n1 = t_n;
        }
        return t_n;
    }
}
