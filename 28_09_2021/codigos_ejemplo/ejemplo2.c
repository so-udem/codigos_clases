#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_LETRAS 20

/*
Programa que lee el archivo informe1.txt y lo imprime en pantalla
*/



int main()
{

    FILE *ptrIn; // Puntero al archivo que lee
    char ch;
    char buffer[NUM_LETRAS + 1]; // Almacena: 20 (caracteres) + 1 (null)

    // 1. Abrir
    ptrIn = fopen("informe1.txt", "r");

    // 2. Procesar (leer/escribir) -- Un fgets: char *fgets(char *str, int n, FILE *fp);
    while (fgets(buffer, 201, ptrIn) != NULL)    {        
        printf("%s", buffer);
        printf("-------------------------------------------------\n");
    }

    // Muestra en pantalla

    // 3. Cerrar
    fclose(ptrIn);

    return 0;
}