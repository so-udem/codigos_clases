#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Programa que lee el archivo informe1.txt y lo imprime en pantalla
*/


int main() {

    FILE *ptrIn; // Puntero al archivo que lee
    char ch;

    // 1. Abrir
    ptrIn = fopen("informe1.txt","r");

    // 2. Procesar (leer/escribir)
    // Muestra en pantalla
    do
    {
        ch = getc(ptrIn);  // Lee un caracter
        printf("%c", ch);  // Imprime en pantalla
    } while (ch != EOF);

    // 3. Cerrar
    fclose(ptrIn);


    return 0;    
}