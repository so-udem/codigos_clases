#include <stdio.h>
#include <string.h>

/*
// Declaración de la estructura

struct nombre-estructura {
  tipo_1 miembro_1;
  tipo_2 miembro_2;
  tipo_3 miembro_3;
  ...
  tipo_N miembro_N;
};

// struct nombre-estructura nombre_variable
*/

struct _Fecha {
  unsigned d;
  unsigned m;
  unsigned a;
};

typedef struct _Fecha Fecha;

typedef struct _Persona {
  char nom[51];
  char apell[51];
  int edad;
  Fecha fecha_nac;
} Persona;

// Declaracion de funciones
void imprimirNombresCompletos(Persona personas[], int tam);
int obtenerEdad(Persona persona);
void imprimir_fecha(Fecha date);
void imprimirFechas(Persona personas[], int tam);


char *meses[12] = {
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre"
};

// Funcion main
int main() {   

    /*
    https://pythontutor.com/c.html#code=%0A%0Atypedef%20struct%20_Fecha%20%7B%0A%20%20unsigned%20d%3B%0A%20%20unsigned%20m%3B%0A%20%20unsigned%20a%3B%0A%7D%20Fecha%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20%0A%20%20char%20*nombres%5B5%5D%20%3D%20%7B%0A%20%20%20%20%20%20%20%20%22Ernesto%22,%0A%20%20%20%20%20%20%20%20%22Andres%22,%0A%20%20%20%20%20%20%20%20%22Alvaro%22,%0A%20%20%20%20%20%20%20%20%22Juan%20Manuel%22,%0A%20%20%20%20%20%20%20%20%22Ivan%22%0A%20%20%20%20%7D%3B%0A%20%20%20%20%0A%20%20char%20*apellidos%5B%5D%20%3D%20%7B%0A%20%20%20%20%20%20%20%20%22Samper%22,%0A%20%20%20%20%20%20%20%20%22Pastrana%22,%0A%20%20%20%20%20%20%20%20%22Uribe%22,%0A%20%20%20%20%20%20%20%20%22Santos%22,%0A%20%20%20%20%20%20%20%20%22Duque%22%0A%20%20%20%20%7D%3B%0A%0A%20%20int%20edades%5B%5D%20%3D%20%7B71,67,69,70,45%7D%3B%0A%20%20%0A%20%20Fecha%20fechas_nacimiento%5B%5D%20%3D%20%7B%0A%20%20%20%20%20%20%20%20%7B3,%208,%201950%7D,%0A%20%20%20%20%20%20%20%20%7B17,%208,%201954%7D,%0A%20%20%20%20%20%20%20%20%7B4,%207,%201952%7D,%0A%20%20%20%20%20%20%20%20%7B10,%208,%201951%7D,%0A%20%20%20%20%20%20%20%20%7B1,%208,%201976%7D%0A%20%20%7D%3B%0A%20%20%20%20%0A%20%20return%200%3B%0A%7D&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D
    */

    // Arreglos nombres
    char *nombres[5] = {
        "Ernesto",
        "Andres",
        "Alvaro",
        "Juan Manuel",
        "Ivan"
    };

    char *apellidos[] = {
        "Samper",
        "Pastrana",
        "Uribe",
        "Santos",
        "Duque"
    };

    int edades[] = {71,67,69,70,45};

    Fecha fechas_nacimiento[] = {
        {3, 8, 1950},
        {17, 8, 1954},
        {4, 7, 1952},
        {10, 8, 1951},
        {1, 8, 1976}
    };

    
    Persona presidentes[5];
    for(int i = 0; i < 5; i++) {
        strcpy(presidentes[i].nom,nombres[i]); // presidentes[i].nom = nombres[i]; OJO (Tenemos cadena de caracteres)
        strcpy(presidentes[i].apell,apellidos[i]); //  presidentes[i].apell = apellidos[i]; OJO (Tenemos cadena de caracteres)
        presidentes[i].edad = edades[i];
        presidentes[i].fecha_nac = fechas_nacimiento[i];
    }

    // Imprimientdo los nombres de los presidentes
    imprimirNombresCompletos(presidentes, 5);

    // Imprimir el promedio de edad
    int sum_edades = 0;
    double prom_edad;
    for(int i = 0; i < 5; i++) {
        sum_edades += obtenerEdad(presidentes[i]);
    }
    prom_edad = (double)sum_edades/5;
    printf("Promedio de las edades de los presidentes: %.1lf\n", prom_edad);

    // Imprimamos la edad de Samper
    printf("Edad de Samper: ");
    imprimir_fecha(presidentes[0].fecha_nac);

    // Fecha de nacimiento de los presidentes
    imprimirFechas(presidentes, 5);



    return 0;

}


// Definicion de funciones
void imprimirNombresCompletos(Persona personas[], int tam) {
    for(int i = 0; i < tam; i++) {
        printf("%s %s\n", personas[i].nom, personas[i].apell);
    }
}

int obtenerEdad(Persona persona) {
    return persona.edad;
}

void imprimir_fecha(Fecha date) {
    int day = date.d;
    int month = date.m;
    int year = date.a;
    char nombre_mes[15];
    strcpy(nombre_mes,meses[month - 1]);
    printf("%d de %s de %d\n",day, nombre_mes, year);
}

void imprimirFechas(Persona personas[], int tam) {
    for(int i = 0; i < tam; i++) {
        imprimir_fecha(personas[i].fecha_nac);
    }
}