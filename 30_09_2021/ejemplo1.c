#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    printf("Este ejemplo muestra como crear un archivo de texto\n");
    // Abriendo el archivo
    FILE *archivo;
    char buffer[201];
    archivo = fopen("ensayo.txt","w");
        // Verificando que el archivo se haya abierto
        if(archivo == NULL) {
            printf("No se puede abrir lista.txt\n");
            exit(1);
        }

    // Procesando el archivo

    // Usando putc: int putc(int ch, FILE *fp);
    printf("Usamos putc...\n");
    putc('U',archivo);
    putc('d',archivo);
    putc('e',archivo);
    putc('M',archivo);
    putc('\n',archivo);
    for(char ch = 'a'; ch <= 'z'; ch++) {
        putc(ch,archivo);
    }
    putc('\n',archivo);

    // Usando puts: char fputs(char *str, FILE *fp);
    printf("Usamos puts...\n");
    strcpy(buffer,"Curso de Sistemas operativos\n");
    fputs(buffer, archivo);

    strcpy(buffer,"Debo estudiar fuiciso\n");
    for(int i = 0; i < 9; i++) {
        fputs(buffer, archivo);
    }
    putc('\n', archivo);

    // Usando fprint: int fprintf(FILE *fp, const char *format, ...)
    printf("Usamos fprint...\n");
    float prom = 0;
    for(int i = 1; i <= 20; i++) {
        fprintf(archivo, "i = %d\n", i);
        prom += (float)i;
    }
    prom /= 20;
    fprintf(archivo, "promedio = %f\n", prom);








    



    // Cerrando el archivo
    fclose(archivo);
    return 0;
}
