/*
Ejemplo: 1
Fecha: 19/08/2021
Enunciado: Este programa pide el nombre y el apellido de una persona y los imprime en orden inverso

Comando de compilacion:

gcc ejemplo1.c -o ejemplo1.out

*/

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