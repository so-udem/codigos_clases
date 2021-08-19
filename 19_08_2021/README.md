# Codigo de clases

**Fecha**: 19/08/2021

## Enunciados

1. Escriba un programa que solicite su nombre y realice lo que se solicita a continuación:
   * Imprima su nombre encerrado entre comillas dobles.
   * Imprima su nombre en un campo de 20 caracteres de ancho con el nombre desplegado a la derecha.
   * Imprima su nombre en un campo de 20 caracteres de ancho con el nombre desplegado a la izquierda.
   * Imprima un campo de un tamaño de 3 caracteres mas amplio que el nombre.

* **Solución**:

2. Escriba un programa que lea un valor de punto flotante e imprima en formato de notación cientifica del valor leido. Por ejemplo:

   ```
   El valor de 21.3 en notacion cientifica es 2.1e+001.
   ```

* **Solución**:

3. Escriba un programa que solicite su altura en centimetros y su nombre y despliegue la información de la siguiente manera:

   ```
   Chespirito, usted tiene una altura de 1.73 metros.
   ```

4. Escriba un programa que reciba tres enteros del teclado e imprima la suma, promedio, producto, menor y mayor de estos números. El diálogo de la pantalla debe aparecer de la siguiente
manera:

   ```
   Introduzca tres enteros distintos: 13 27 14
   La suma es 54
   El promedio es 18
   El producto es 4914
   El menor es 13
   El mayor es 27
   ```

* **Solución**:

5. Escriba un programa que solicite la velocidad de descarga en megabits por segundo (Mbps) y el tamaño de un archivo en Megabytes (MB). El programa deberá calcular el tiempo de descarga del archivo. Dentro de este contexto, 1 byte = 8 bits. Use el tipo ```float```, y use ```/``` para la división. El programa deberá mostrar todos los tres valores (velocidad de descarga, tamaño del archivo, y tiempo de descarga) mostrando dos digitos a la derecha del punto decimal, tal y como se muestra a continuación:

   ```
   A 18.12 megabits por segundo, un archivo de 2.20 megabytes se descarga en 0.97 segundos.
   ```

* **Solución**:

6. Escriba un programa que lea un entero, determine e imprima si es impar o par.

7. Escriba un programa que lea dos enteros, determine e imprima si el primero es múltiplo del segundo.

8. Escriba un programa que reciba como entrada un entero de cinco dígitos, que separe ese número en sus dígitos individuales y los imprima, cada uno separado de los demás por tres espacios. (**Sugerencia**: use los operadores de división entera y módulo). Por ejemplo, si el usuario escribe el número ```42339```, el
programa debe imprimir:

   ```
   4 2 3 3 9
   ```

9. Los conductores se preocupan acerca del kilometraje de sus automóviles. Un conductor ha llevado el registro de varios viajes, anotando los kilómetros conducidos y los litros usados en cada viaje. Desarrolle un programa en C++ que utilice una instrucción ```while``` para recibir como entrada los kilómetros conducidos y los litros usados por cada viaje, y que imprima el total de kilómetros por litro obtenidos en todos los reabastecimientos hasta este punto.

   ```
   Escriba los kilometros usados (-1 para salir): 287
   Escriba los litros: 13
   KPL en este reabastecimiento: 22.076923
   Total KPL: 22.076923

   Escriba los kilometros usados (-1 para salir): 200
   Escriba los litros: 10
   KPL en este reabastecimiento: 20.000000
   Total KPL: 21.173913
   
   Escriba los kilometros usados (-1 para salir): 120
   Escriba los litros: 5
   KPL en este reabastecimiento: 24.000000
   Total KPL: 21.678571
   
   Escriba los kilometros usados (-1 para salir): -1
   ```

10. Desarrolle una aplicación que determine si alguno de los clientes de una tienda de departamentos se ha excedido del límite de crédito en una cuenta. Para cada cliente se tienen los siguientes datos:
    *  Número de cuenta (un entero)
    *  Saldo al inicio del mes
    *  Total de todos los artículos cargados por el cliente en el mes
    *  Total de todos los créditos aplicados a la cuenta del cliente en el mes
    *  Límite de crédito permitido.

    El programa debe usar una instrucción while para recibir como entrada cada uno de estos datos, debe calcular el nuevo saldo (= saldo inicial + cargos – créditos) y determinar si éste excede el límite de crédito del cliente. Para los clientes cuyo límite de crédito se ha excedido, el programa debe mostrar el número de cuenta del cliente, su límite de crédito, el nuevo saldo y el mensaje "Se excedio el limite de su credito".

    ```
    Introduzca el numero de cuenta (o -1 para salir): 100
    Introduzca el saldo inicial: 5394.78
    Introduzca los cargos totales: 1000.00
    Introduzca los creditos totales: 500.00
    Introduzca el limite de credito: 5500.00
    El nuevo saldo es 5894.78
    Cuenta: 100
    Limite de credito: 5500.00
    Saldo: 5894.78
    Se excedio el limite de su credito.

    Introduzca el numero de cuenta (o -1 para salir): 200
    Introduzca el saldo inicial: 1000.00
    Introduzca los cargos totales: 123.45
    Introduzca los creditos totales: 321.00
    Introduzca el limite de credito: 1500.00
    El nuevo saldo es 802.45

    Introduzca el numero de cuenta (o -1 para salir): -1
    ```

12. Escriba un programa que utilice una instrucción que solicite un valor de N para imprimir una salida como la que se muestra a continuación:

    ```
    N       10*N        100*N       1000*N
    1       10          100         1000
    2       20          200         2000
    3       30          300         3000
    4       40          400         4000
    5       50          500         5000
    ```

13. Escriba un programa que utilice una instrucción for para encontrar el menor de varios enteros. Suponga que el primer valor leído especifica el número de valores restantes.

14. Escriba un programa que utilice una instrucción for para calcular e imprimir el producto de los enteros impares del 1 al 15.

15. La función factorial se utiliza frecuentemente en los problemas de probabilidad. Escriba un programa que utilice una función for para evaluar los factoriales de los enteros del 1 al 5. Muestre los resultados en formato tabular. ¿Qué dificultad podría impedir que usted calculara el factorial de 20?

16. Una aplicación interesante de las computadoras es dibujar gráficos convencionales y de barra. Escriba un programa que lea cinco números (cada uno entre 1 y 30). Suponga que el usuario sólo introduce valores válidos. Por cada número leído, su programa debe imprimir una línea que contenga ese número de
asteriscos adyacentes. Por ejemplo, si su programa lee el número 7, debe mostrar *******.

17. Para jugar al PUM los N jugadores se sientan en círculo y van diciendo números consecutivos a partir del 1 (1, 2, 3, ...). Para el juego se escoge un número X menor que 10 (por ejemplo 7) y a la persona a la que le corresponda decir un múltiplo de ese número (en el caso del 7: 7, 14, 21, 28, ...), debe decir, en vez del número, la palabra PUM. Escriba una función que escriba, a partir del número de jugadores N y del número escogido para el PUM, X, el desarrollo del juego para los primeros 500 números, indicando el número del jugador y lo que dijo. Por ejemplo, si son 3 jugadores y X es el 4 el juego comenzaría así:

    ```
    jugador             jugada
    1                   1
    2                   2
    3                   3
    1                   pum
    2                   5
    3                   6
    1                   7
    2                   pum ...
    ```

17. En matemáticas, la sucesión o serie de Fibonacci es la siguiente sucesión infinita de números naturales: 

    ```
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597 ...
    ```
    La sucesión comienza con los números 0 y 1, y a partir de estos, cada término es la suma de los dos anteriores

    Cree una función que reciba un número que indica la cantidad de términos de la sucesión que se quieren ver, y los imprima en pantalla. Por ejemplo, la sucesión que se muestra arriba sería el
resultado de la función si se pasa como parámetro el número 18.
