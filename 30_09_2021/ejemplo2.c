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
    // Caracter por caracter: int getc(FILE *fp) 
    printf("*************************************************************************************************\n");
    printf("Ejemplo usando getc\n\n");

    do {
        ch = getc(file);    
        printf("%c", ch);
    } while(ch != EOF);  // EOF: End Of File
    
    // ------------------------------------------- Cerrando el archivo ------------------------------------------- 
    
    fclose(file);
    return 0; // Terminacion normal
}
