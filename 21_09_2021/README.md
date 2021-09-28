# Codigo de clases

**Fecha**: 21/09/2021

## Material de estudio

Para comprender el ejemplo revise la teoria disponible en el enlace [Estructuras en C](https://github.com/dannymrock/UdeA-SO-Lab/blob/master/lab0/lab0b/parte4/estructuras.ipynb)

## Ejemplos analizados en clase

### Simulaciones online

* **Ejemplo 1** ([link](https://pythontutor.com/c.html#code=%0A%0Atypedef%20struct%20_Fecha%20%7B%0A%20%20unsigned%20d%3B%0A%20%20unsigned%20m%3B%0A%20%20unsigned%20a%3B%0A%7D%20Fecha%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20%0A%20%20char%20*nombres%5B5%5D%20%3D%20%7B%0A%20%20%20%20%20%20%20%20%22Ernesto%22,%0A%20%20%20%20%20%20%20%20%22Andres%22,%0A%20%20%20%20%20%20%20%20%22Alvaro%22,%0A%20%20%20%20%20%20%20%20%22Juan%20Manuel%22,%0A%20%20%20%20%20%20%20%20%22Ivan%22%0A%20%20%20%20%7D%3B%0A%20%20%20%20%0A%20%20char%20*apellidos%5B%5D%20%3D%20%7B%0A%20%20%20%20%20%20%20%20%22Samper%22,%0A%20%20%20%20%20%20%20%20%22Pastrana%22,%0A%20%20%20%20%20%20%20%20%22Uribe%22,%0A%20%20%20%20%20%20%20%20%22Santos%22,%0A%20%20%20%20%20%20%20%20%22Duque%22%0A%20%20%20%20%7D%3B%0A%0A%20%20int%20edades%5B%5D%20%3D%20%7B71,67,69,70,45%7D%3B%0A%20%20%0A%20%20Fecha%20fechas_nacimiento%5B%5D%20%3D%20%7B%0A%20%20%20%20%20%20%20%20%7B3,%208,%201950%7D,%0A%20%20%20%20%20%20%20%20%7B17,%208,%201954%7D,%0A%20%20%20%20%20%20%20%20%7B4,%207,%201952%7D,%0A%20%20%20%20%20%20%20%20%7B10,%208,%201951%7D,%0A%20%20%20%20%20%20%20%20%7B1,%208,%201976%7D%0A%20%20%7D%3B%0A%20%20%20%20%0A%20%20return%200%3B%0A%7D&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D))

### Codigos

A continuación se muestran los archivos analizados en la clase:
* [ejemplo1.c](ejemplo1.c)

  ```
  gcc -Wall ejemplo1.c -o ejemplo1.out
  ```

* [ejemplo2.c](ejemplo2.c) 

  ```
  gcc -Wall ejemplo2.c -o ejemplo2.out
  ```




