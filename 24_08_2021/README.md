# Codigo de clases

**Fecha**: 24/08/2021

## Enunciados

1. Escriba un programa que reciba tres enteros del teclado e imprima la suma, promedio, producto, menor y mayor de estos números. El diálogo de la pantalla debe aparecer de la siguiente manera:
   
   ```
   Introduzca tres enteros distintos: 13 27 14
   La suma es 54
   El promedio es 18
   El producto es 4914
   El menor es 13
   El mayor es 27
   ```

> * **Nota**: Antes de analizar el código solución, se recomienda que recuerde el concepto de **casting en C** analizando el código disponible en el siguiente [enlace](https://pythontutor.com/c.html#code=int%20main%28%29%20%7B%0A%0A%20%20double%20s%3B%0A%20%20s%20%3D%203/4%3B%0A%20%20printf%28%22%25lf%5Cn%22,s%29%3B%0A%20%20s%20%3D%203/4.0%3B%0A%20%20printf%28%22%25lf%5Cn%22,s%29%3B%0A%20%20s%20%3D%203.0/4%3B%0A%20%20printf%28%22%25lf%5Cn%22,s%29%3B%0A%20%20s%20%3D%203.0/4.0%3B%0A%20%20printf%28%22%25lf%5Cn%22,s%29%3B%0A%20%20s%20%3D%20%28double%293/4%3B%0A%20%20printf%28%22%25lf%5Cn%22,s%29%3B%0A%20%20s%20%3D%203/%28double%294%3B%0A%20%20printf%28%22%25lf%5Cn%22,s%29%3B%0A%20%20s%20%3D%20%28double%29%283/4%29%3B%0A%20%20printf%28%22%25lf%5Cn%22,s%29%3B%0A%0A%20%20return%200%3B%0A%7D&curInstr=0&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D)


* **Solución**: [ejercicio4.c](ejercicio4.c)

```C
#include <stdio.h>


/*
return_type function_name (data type variable name list);
}
*/

/* Declaracion de funciones */
int suma(int n1, int n2, int n3);
int producto(int n1, int n2, int n3);
int menor(int n1, int n2, int n3);
int mayor(int n1, int n2, int n3); 
double promedio(int n1, int n2, int n3); 
int validar_numeros(int n1, int n2, int n3);

// Funcion de pruebas 
void tests(void); 

/* Funcion main */
int main() {
    // Variables locales
    int num1, num2, num3;
    int sum, prod, m, M;
    double prom;

    /* Codigo de la aplicacion */
    // Entrada de datos
    printf("Introduzca tres enteros distintos: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(validar_numeros(num1, num2, num3) == 1) {
        // Calculos
        sum = suma(num1, num2, num3);
        prod = producto(num1, num2, num3);
        m = menor(num1, num2, num3);
        M = mayor(num1, num2, num3);
        prom = promedio(num1, num2, num3);

        // Despliegue de la salida
        printf("La suma es %d\n", sum);
        printf("El promedio es %.1lf\n", prom);
        printf("El producto es %d\n", prod);
        printf("El menor es %d\n", m);
        printf("El mayor es %d\n", M);
    }
    else {
        printf("ERROR!!! Los numeros deben ser todos diferentes\n");
    }
    /* 
    Pruebas
    tests(); Se comenta cuando las pruebas dan
    */
   
    return 0;
}

/* Definicion de funciones */
int suma(int n1, int n2, int n3) {
    // Codigo de lo que hace la funcion
    int resultado = n1 + n2 + n3;
    return resultado;
}

int producto(int n1, int n2, int n3) {
    return n1*n2*n3;
}

void tests(void) {
    printf("13 + 27 + 14 = %d\n", suma(13,27,14));
    printf("13 * 27 * 14 = %d\n", producto(13,27,14));
    printf("El menor de: 13, 27 y 14 es %d\n", menor(13,27,14));
    printf("El mayor de: 13, 27 y 14 es %d\n", mayor(13,27,14));
    printf("El promedio de: 13, 27 y 14 es %.2lf\n", promedio(13,27,14));
}

int menor(int n1, int n2, int n3) {
    int menor;
    if((n1 < n2) && (n1 < n3)) {
        menor = n1;
    }
    else if ((n2 < n1) && (n2 < n3)) {
        menor = n2;
    }
    else {
        menor = n3;
    }
    return menor;
}


int mayor(int n1, int n2, int n3) {
    if((n1 > n2) && (n1 > n3)) {
        return n1;
    }
    else if ((n2 > n1) && (n2 > n3)) {
        return n2;
    }
    else {
        return n3;
    }
}

double promedio(int n1, int n2, int n3) {
    double prom = (n1 + n2 + n3)/3.0; 
    return prom;
}

int validar_numeros(int n1, int n2, int n3) {
    // Faltan validar casos
    if((n1 != n2) & (n2 != n3) ) {
        // numeros diferentes
        return 1; 
    }
    else {
        // numeros no cumplen que san diferentes
        return 0; 
    }

}

```

2. Los conductores se preocupan acerca del kilometraje de sus automóviles. Un conductor ha llevado el registro de varios viajes, anotando los kilómetros conducidos y los litros usados en cada viaje. Desarrolle un programa en C++ que utilice una instrucción while para recibir como entrada los kilómetros conducidos y los litros usados por cada viaje, y que imprima el total de kilómetros por litro obtenidos en todos los reabastecimientos hasta este punto.

> * **Nota**: Antes de analizar el código solución, se recomienda que recuerde el concepto de **variables globales** analizando el código disponible en el siguiente [enlace](
https://pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20incrementar%28void%29%3B%0A%0Aint%20global%20%3D%203%3B%0A%0A%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20local_main%20%3D%203%3B%0A%20%20printf%28%22---%20Antes%20---%20%5Cn%22%29%3B%0A%20%20printf%28%22local_main%20%3D%20%25d%5Cn%22,%20local_main%29%3B%0A%20%20printf%28%22global%20%3D%20%25d%5Cn%22,%20global%29%3B%0A%20%20//%20Invocacion%20de%20la%20funcion%0A%20%20incrementar%28%29%3B%0A%20%20incrementar%28%29%3B%0A%20%20printf%28%22---%20Despues%20---%20%5Cn%22%29%3B%0A%20%20printf%28%22local_main%20%3D%20%25d%5Cn%22,%20local_main%29%3B%0A%20%20printf%28%22global%20%3D%20%25d%5Cn%22,%20global%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20incrementar%28void%29%20%7B%0A%20%20global%2B%2B%3B%20%20%0A%7D&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D)


```
Escriba los kilometros usados (-1 para salir): 287
Escriba los litros: 13
KPL en este reabastecimiento: 22.076923
Total KPL: 22.076923

Escriba los kilometros usados (-1 para salir): 200
Escriba los litros: 10
KPL en este reabastecimiento: 20.000000
Total KPL: 42.076923

Escriba los kilometros usados (-1 para salir): 120
Escriba los litros: 5
KPL en este reabastecimiento: 24.000000
Total KPL: 66.076923

Escriba los kilometros usados (-1 para salir): -1
```


* **Solución**: [ejercicio9.c](ejercicio9.c)

```C
#include <stdio.h>



/* Declaracion de funciones */
double obtener_KPL(int, int);


// Funcion de pruebas 
void test(void);


/* Funcion main */
int main() {
    /* Variables locales */
    

    /* Codigo de la aplicacion */


    /* Codigo test */
    test();

  
   
    return 0;
}

/* Definicion de funciones */
double obtener_KPL(int km, int litros) {
    return (double)km/litros;
}

void test(void) {
    printf("Prueba funcion obtener_KPL\n");
    printf("%lf\n",obtener_KPL(287,13));
    printf("%lf\n",obtener_KPL(200,10));
    printf("%lf\n",obtener_KPL(120,5));

}
```



