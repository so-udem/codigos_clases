#include <stdio.h>

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

struct Fecha {
  unsigned d;
  unsigned m;
  unsigned a;
};

struct Persona {
  char nom[51];
  char apell[51];
  struct Fecha fecha_nac;
};


int main() {
    struct Persona persona1, persona2; // locales
    struct Persona presidentes[5];
    struct Persona *ptr_persona;

    


    return 0;

}