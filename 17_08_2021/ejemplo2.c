/*
Ejemplo: 2
Fecha: 17/08/2021
Enunciado: Este programa imprimira: Hola soy Salomon, tengo 15 años, vivo en Titiribi, peso 79 kg, mido 1.65 m y soy de sexo M.
*/

#include <stdio.h>


int main() {
    char nom[] = "Salomon";
    int edad = 15;
    char ciudad[] = "Titiribí";
    int peso = 79;
    double estatura = 1.65;
    char sexo = 'M';

    printf("Hola soy Salomon, tengo 15 años, vivo en Titiribi, peso 79 kg, mido 1.65 m y soy de sexo M.\n"); 
    printf("\n"); 
    printf("Hola soy %s, tengo %d años, vivo en %s, peso %d kg, mido %lf m y soy de sexo %c.\n", nom, edad, ciudad, peso, estatura, sexo); 
    
    return 0;
}
