#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _adn_resumen
{
  /* data */
  int A;
  int T;
  int C;
  int G;
}adn_resumen;

void inicializar_adn_resumen(adn_resumen *adnp);
void actualizar_adn_resumen(adn_resumen *adnp, char l);
void imprimir_adn_resumen(adn_resumen adnp);


int main() {
  srand(time(NULL)); // Inicializacion del generador
  char filename[80];
  int tam;
  char ch;
  adn_resumen resumen_archivo;
  inicializar_adn_resumen(&resumen_archivo);
  /*
  resumen_archivo.A = 0;
  resumen_archivo.T = 0;
  resumen_archivo.C = 0;
  resumen_archivo.G = 0;
  */


  FILE *inputFile;
  printf("Ingrese el nombre de la cadena de ADN a leer: ");
  scanf("%[^\n]s",filename); // Formato para que la entrada pueda aceptar espacios
  inputFile = fopen(filename,"r");
  if (inputFile == NULL) {
    printf("Error al abrir el archivo %s\n", filename);
    exit(-1);
  }
  do {
    ch = getc(inputFile);
    printf("%c", ch);
    actualizar_adn_resumen(&resumen_archivo, ch);
  } while(ch != EOF);
  printf("\n");
  imprimir_adn_resumen(resumen_archivo);
  fclose(inputFile);
  exit(0);
}


void inicializar_adn_resumen(adn_resumen *adnp) {
  adnp->A = 0;
  adnp->T = 0;
  adnp->C = 0;
  adnp->G = 0;
}

void actualizar_adn_resumen(adn_resumen *adnp, char l) {
  switch (l)
  {
  case 'A':
    ++adnp->A; //adnp->A = adnp->A + 1;
    break;
  case 'T':
    ++adnp->T; //adnp->T = adnp->T + 1;
    break;
  case 'C':
    adnp->C += 1; //adnp->C = adnp->C + 1;
    break;
  case 'G':
    ++adnp->G; //adnp->G = adnp->G + 1;
    break;  
  default:
    break;
  }
}

void imprimir_adn_resumen(adn_resumen adnp) {
  printf("-> A: %d\n",adnp.A);
  printf("-> T: %d\n",adnp.T);
  printf("-> C: %d\n",adnp.C);
  printf("-> G: %d\n",adnp.G);
}
