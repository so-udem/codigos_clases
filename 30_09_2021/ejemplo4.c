#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    FILE *file_notas;
    char id[21];
    float notas[4];

    // ------------------------------------------- Abriendo el archivo ------------------------------------------- 
    file_notas = fopen("notas.csv","r");
    if(file_notas == NULL) {
        printf("No se puede abrir el archivo\n");
        return 1; // Terminacion anormal
    }

    // ------------------------------------------ Procesando el archivo ------------------------------------------   
    printf("*************************************************************************************************\n");
    printf("Ejemplo usando fscanf\n\n");
    // Usando buffer: int fscanf(FILE *fp, const char *format, ...)
    // ---> Formato: 10001;1.0;2.3;0.5;3.3
    
    printf("%-20s%-10s%-10s%-10s%-10s\n","Identificación", "Nota 1", "Nota 2", "Nota 3", "Nota 4");
    while(fscanf(file_notas, "%s;%f;%f;%f;%f", id, &notas[0], &notas[1], &notas[2], &notas[3]) !=EOF) {
        //printf("%-5d",numLinea++);
        printf("%-20s%-10f%-10f%-10f%-10f\n", id, notas[0], notas[1], notas[2], notas[3]);
    } 
    printf("*************************************************************************************************\n");
    // ------------------------------------------- Cerrando el archivo ------------------------------------------- 
    
    fclose(file_notas);
    return 0; // Terminacion normal
}
