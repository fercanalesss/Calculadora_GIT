#include <stdio.h>
/* Fernanda Canales
- Programa que solicita al usuario un operador matemático y realiza la operación solicitada
- Entrada: un caracter y 2 enteros 
- Salida: su función */


//Declaración de estructura que va a almacenar un arreglo de tamaño 10 
typedef struct {
char operacion;
double resultado_doble1;
double resultado_double2;
double resultado_double3;
int resultado_int;
int op1;
int op2;
int op3;
}OPERACION;


//Declaración de funciones 
void leer_arreglo(int arr[], int n); // Función para leer 10 números ingresados por el usuario en un arreglo
int sumar_arreglo(int arr[], int n); // Función para calcular la suma de los números en un arreglo
int suma (int a, int b);
int resta (int a, int b);
double division (int num1, int num2); 
int factorial (int n);
int factorial_rec(int numero);
void estadistica (int arr [],int size, double *media, double *mediana, int *moda); //Función que va a calcular la media, moda y mediana 
void circulo_esfera (double r, double *peri,double *area, double*vol); //Función que calcula el área, perímetro y volumen de un circulo


//Declaraciones función fibonacci
int ingresarnumero(); // Función que va a pedir ingresar un número
int fibonacci(int n); // Función para calcular el número de Fibonacci en la posición 'n'
void imprimirfibonacci(int n); //Función que va a imprimir la serie de números Fibonacci

int main(void) {
    char operador;
    int numeros[10];
    int num1, num2, numero;
    
    while (1){
    printf("Ingresa un operador\n");
    scanf(" %c", &operador);
    switch (operador) {
        case '+':
            printf("Es una suma\n");
            suma(a,b); //Llamo a función de suma
            break;
        case '-':
            printf("Es una resta\n");
            resta (a,b); //Llamo a función de resta
            break;
        case '*':
            printf("Es una multiplicación\n");
            multiplicacion(a,b); //Llamo a función de multiplicación
            break;
        case '/':
            printf("Es una división\n");
            division (a,b); //Llamo a la función división
            break;
        case 'e':
           e=euler(a); //Se llama a la función euler
           printf ("%f\n", e);
           break; 
        case 'm':
        estadistica (arr [], size, *media, *mediana, *moda)
        break; 
        case 'i':
           int n = ingresarnumero(); //Se obtiene el valor del número desde la función ingresarnumero
           printf("La serie de Fibonacci es:\n");
           imprimirfibonacci(n); // Imprimir la serie de Fibonacci
           // Imprimir el valor en la posición 'n'
           printf("El número en f(%d) es %d\n", n, fibonacci(n));
           break;  
         case 'F':
         int factorial_rec (int numero); 
         break;
         case 'f':
            printf ("Introduce un número para calcular el factorial: ");
            scanf ("%d", &numero);
            if (numero<0){
            printf ("El número tiene que ser mayor a 0");
            }else {
            int resultado= factorial (numero);
            printf ("El factorial de %d es %d\n", numero, resultado);
            }
           break; 
         case 'p':
         calcularpi(n); //Llamar a función que calcula pi
           break;  
         case 'a':
            {
                int n = 10; // Número de elementos a ingresar

                // Llama a la función para leer los números
                leer_arreglo(numeros, n);

                // Llama a la función para calcular la suma
                int suma = sumar_arreglo(numeros, n);

                // Imprime la suma
                printf("La suma de los 10 números es: %d\n", suma);
            }
            break;
        default:
            printf("Error, ingresa un operador válido\n");
    }
}
        
    return 0;
}

/*************************************************************************************
 Función para leer 10 números ingresados por el usuario en un arreglo
@param  int arr[] -> arreglo que va a almacenar los 10 números del usuario 
@param int n --> el número de elementos que se deben de ingresar
************************************************************************************/
void leer_arreglo(int arr[], int n) {
    printf("Ingresa %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

/************************************************************************************
Función para calcular la suma de los números en un arreglo
@param int arr[] -->
@param n -->
************************************************************************************/
int sumar_arreglo(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

/************************************************************************************
Función que reciba dos números, los sume y de el resultado
@param a--> primer entero
@param b --> segundo entero
************************************************************************************/
int suma (int a, int b){
int suma, a, b;
printf ("Ingresa dos números enteros positivos: ");
 scanf ("%d %d", &a,&b);
suma= a+b;
    printf ("La suma de los número es: %d", suma);
    return suma;
}
    
/************************************************************************************
Función que reciba dos números, los reste y de el resultado
@param a--> primer entero
@param b --> segundo entero
************************************************************************************/
int resta (int a, int b){
int resta, a,b;
printf ("Ingresa dos números enteros positivos: ");
scanf ("%d %d", &a,&b);
resta=a-b;
printf ("La resta de los números es: %d", &resta);
return resta;
}

/************************************************************************************
Función que reciba dos números, los multiplique y de el resultado
@param a--> primer entero
@param b --> segundo entero
************************************************************************************/
int multiplicacion(int a, int b) {
int multiplicacion,a, b;
printf ("Ingresa dos números enteros positivos: ");
scanf ("%d %d", &a,&b);
multiplicacion=a*b;
printf ("La multiplicación de los números ingresados es: ",multiplicacion);
return multiplicacion;

/************************************************************************************
Función que reciba dos números, los divida y de el resultado
@param a--> primer entero
@param b --> segundo entero
************************************************************************************/
int division (int a, int b) {
int division,a,b;
printf ("Ingresa dos números enteros positivos: ");
scanf ("%d %d", &a,&b);
division=a/b;
printf ("La división de los números ingresados es: ",division);
}

//Función que cambie de double a float
double division (int num1, int num2){
a_d= (double) a;
}

//Función factorial que empieza en 1 porque si no, no corre. 
//i es el contador que llega hasta número.
int factorial (int a){
int i;
int res=1;
for (i=1;i<=a; i++){
res= res*i;  //res=res*i porque se va sumando y guardando el resultado.
}
return res;
}

//Función para calcular euler sumando res para que se guarde con 1/sobre el factorial.
double euler (int a){ //double porque euler no es número entero
int i;
double res=0;
for (i=0;i<=a;i++){
res= res + (1/(double)factorial(i));
}
return res;
}

/************************************************************************************
Función de repercusión
@param numero --> primer entero
************************************************************************************/
int factorial_rec (int numero){
int res; 
if (numero==0)
{
return 1;
} else{
res=factorial_rec (numero-1);
return numero*res;
}
}

/***************************
    Funciones Fibonacci 
****************************/
//Función que pide ingresar un número, y verifica si es mayor o igual a 0. 
//@return --> Número ingresado divertido 
//@ejemplo --> Si se ingresa un -1 el programa imprime "Error" y vuelve a pedir el número, y si el número ingresado es 2, el programa devuelve 2.

int ingresarnumero() { 
    int n; //variable que va a almacenar el número ingresado por el usuario
    printf("Ingresa un número mayor o igual a 0:\n"); //Pide al usuario un número
    scanf("%d", &n); // Almacena el valor ingresado en la variable 'n'
    if(n < 0) { //verifica si el número ingresado es menor a 0
        printf("Error: Debes ingresar un número entero positivo o 0. Inténtalo de nuevo:\n"); //Si es así, imprime mensaje de error
        scanf("%d", &n); //Vuelve a pedir de nuevo el número
    }else{ //Si el número si es mayor:
    return n; // Devuelve el número ingresado
}
}

//Calcula el número de Fibonacci en una posición específica, establecida por n (ocupamos recursión)
//@param n --> número ingresado 
int fibonacci(int n) {
    if (n == 0) { //  Verifica si n es igual a 0. 
        return 0; //Si es así, devuelve 0, porque el primer número de Fibonacci es 0.
    } else if (n == 1) { //Verifica si n es igual a 1. 
        return 1; //Si es así, devuelve 1, ya que el segundo número de Fibonacci es 1.
    } else { //si no es ni 0 ni 1, la función se llama así misma (recursión)
        return fibonacci(n - 1) + fibonacci(n - 2); //Suma los resultados de las dos llamadas recursivas. Devuelve ese valor como el número de Fibonacci en la posición n.
        //fibonacci(n - 1): Esto calcula el número de Fibonacci en la posición n - 1.
        //fibonacci(n - 2): Esto calcula el número de Fibonacci en la posición n - 2.
    }
}

/************************************************************************************
Función que crea la serie de números de Fibonacci.
//@param n --> número entero ingresado 
/*@ejemplo Si el usuario introduce un 3. El programa imprime:
0
0 1
0 1 1
0 1 1 2
El número en f(3) es 2 
************************************************************************************/

void imprimirfibonacci(int n) { 
    int i,j;
    for (i = 0; i <= n; i++) { // Genera n + 1 filas de números de Fibonacci.
        for (j = 0; j <= i; j++) { //Genera los números de Fibonacci en cada fila.
            printf("%d ", fibonacci(j)); //Calcular el número de Fibonacci en la posición j y se imprime ese número.
        }
        printf("\n"); //Salto de línea a la siguiente fila 
    }
}

//Función pi --> serie de leibniz
double calcularpi (int n){
int i;
int num;
double pi;
printf ("Ingresa un número entero positivo:  ");
scanf ("%d",&num1);
if (num>0) {
 printf ("El número debe ser mayor a 0");
 } else{
for (i=0;i<n;i++) {
double x = (double)i/n;
double fx= 4.0/(1.0+x*x);
pi+=fx/n; 
 }
 return pi;
}

/**********************************************************************
Función que calcula el área, perímetro y volumen de un circulo
//@param double r --> radio del círculo
//@param double *peri --> perímetro del círculo
//@param double *area --> área del círculo
//@param double*vol --> volumen de la esfera 
**********************************************************************/
void circulo_esfera (double r, double *peri,double *area, double *vol){
double r, *peri, *area, *vol;
printf ("Ingresa el radio de tu circulo  ");
scanf ("%lf", &r);
if (r<0) {
printf ("El radio debe ser mayor o igual a 0);
}else{
//Calcularemos el perímetro del círculo
peri=2*


//Calcularemos el área del círculo
area=pi*r^2


//Calcularemos el volumen de la esfera 
vol= 4/3*pi* r^3 

}


/*************************************************************************************
Función que va a calcular la media, moda y mediana de una cantidad de números ingresados
//@param int arr[] --> arreglo que guardará los números ingresados
//@param int size --> cantidad de números en el arreglo
//@param double *media --> puntero que regresará el valor de la media
//@param double *mediana --> puntero que regresará el valor de la mediana
//@param int *moda --> puntero que regresará el valor de la moda
*************************************************************************************/
void estadistica (int arr [],int size, double *media, double *mediana, int *moda) {
  
// Función para calcular la moda
void calcularModa(int arr[], int size, int *moda) {
    int maxCount = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            *moda = arr[i];
        }
    }
}

// Función para calcular la mediana
void calcularMediana(int arr[], int size, double *mediana) {
    // Primero, ordena el arreglo
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Calcula la mediana
    if (size % 2 == 0) {
        // Si el tamaño del arreglo es par, la mediana es el promedio de los dos valores del medio
        *mediana = (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        // Si el tamaño del arreglo es impar, la mediana es el valor del medio
        *mediana = arr[size / 2];
    }
}

// Función para calcular la media
void calcularMedia(int arr[], int size, double *media) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    *media = sum / size;
}

void estadistica(int arr[], int size, double *media, double *mediana, int *moda) {
    calcularModa(arr, size, moda);
    calcularMediana(arr, size, mediana);
    calcularMedia(arr, size, media);
}

int lim
if (cuenta_historial>10){
lim=10;
}else{
lim=cuenta_historial;
} 
for (i=0;i<lim;i++){
printf ("Operacion#%d\n Tipo:%c\n Operandos: %d %d %d\n Resultado int:%d\n Resultado floats %lf %lf %lf\n", i, 
historial
