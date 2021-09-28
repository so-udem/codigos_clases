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
// typedef don_ramon roro;


typedef struct _Persona {
  char nom[51];
  char apell[51];
  int edad;
  Fecha fecha_nac;
} Persona;






int main() {
    // struct Persona persona1, persona2; // locales
    Persona persona1 = {
        .nom = "Don Ramon"
    };
    Persona persona2 = {
        .nom = "Ramon",
        .apell = "Valdez",
        .edad = 64,
        .fecha_nac = {
            .d = 2,
            .a = 1923,
            .m = 9
        }
    };

    Persona persona3, persona4;
    // persona3.nom = "El Chompiras";
    strcpy(persona3.nom,"El Chompiras");
    //persona4.nom = "Ruben";
    //persona4.apell = "Aguirre";
    strcpy(persona4.nom,"Ruben");
    strcpy(persona4.apell,"Aguirre");
    persona4.edad = 82;
    persona4.fecha_nac.d = 15;
    persona4.fecha_nac.m = 6;
    persona4.fecha_nac.a = 1934;

    // Maria Antonieta de las Nieves
    Persona persona5 = {
        .nom = "Maria Antonieta",
        .apell = "Gomez"
    }; 
    
    Fecha nac_persona5 = {
        .d = 22,
        .m = 12,
        .a = 1950
    };

    persona5.fecha_nac = nac_persona5;


    
    
    Persona presidentes[5];
    Persona *ptr_persona;

    


    return 0;

}