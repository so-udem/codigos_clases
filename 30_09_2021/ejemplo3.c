#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    FILE *file;
    char ch;
    char linea[201];
    // ------------------------------------------- Abriendo el archivo ------------------------------------------- 
    file = fopen("ensayo.txt","r");
    if(file == NULL) {
        printf("No se puede abrir el archivo\n");
        return 1; // Terminacion anormal
    }

    // ------------------------------------------ Procesando el archivo ------------------------------------------   
    printf("*************************************************************************************************\n");
    printf("Ejemplo usando gets\n\n");
    // Usando buffer: char *fgets(char *str, int n, FILE *fp);

    while(fgets(linea, 201, file) != NULL) {
        //printf("%-5d",numLinea++);
        printf("%s",linea);
    } 
    printf("*************************************************************************************************\n");
    // ------------------------------------------- Cerrando el archivo ------------------------------------------- 
    
    fclose(file);
    return 0; // Terminacion normal
}
