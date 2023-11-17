#include <stdio.h>
#include <math.h>

void leer_arreglo(int arr[], int n);
int sumar_arreglo(int arr[], int n);
int suma (int a, int b);
int resta (int a, int b);
double division (int num1, int num2); 
int factorial (int n);
int factorial_rec(int numero);
void eq_cuadr(int a, int b, int c, int*r1, int*r2);


int main() {
    char operador;
    int numeros[10];
    int num1, num2, numero;
    double v1,v2,v3,res1,res2;
    
    printf("Ingresa un operador\n");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("Es una suma\n");
            printf ("Ingresa dos números enteros positivos: ");
            scanf ("%d %d", &num1,&num2);
            suma (num1,num2);
            break;
        case '-':
            printf("Es una resta\n");
            printf ("Ingresa dos números enteros positivos: ");
            scanf ("%d %d", &num1,&num2);
            resta (num1,num2);
            break;
        case '*':
            printf("Es una multiplicación\n");
            printf ("Ingresa dos números enteros positivos: ");
            scanf ("%d %d", &num1,&num2);
            multiplicacion (num1,num2);
            break;
        case '/':
            printf("Es una división\n");
            break;
        case 'e':
        
         break;  
        case 'c':
        printf ("Ingresa tus variables")
        scanf ("%ls %ls %ls", &v1, &v2, &v3);
        printf ("%p", &res1);
        eq_cuadr(v1, v2,v3, &res1, &res2);
        
        break; 
        case 'F':
        printf ("Introduce un número: ");
        scanf ("%d", &numero);
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
    
    
    
    
    return 0;
}

// Función para leer 10 números ingresados por el usuario en un arreglo
void leer_arreglo(int arr[], int n) {
    printf("Ingresa %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Función para calcular la suma de los números en un arreglo
int sumar_arreglo(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

//Función que reciba dos números, los sume y de el resultado
int suma (int a, int b){
int suma, a, b;
suma= num1+num2;
    printf ("La suma de los número es: %d", &suma);
    }

//Función que reciba dos números, los reste y de el resultado
int resta (int a, int b){
int resta, a,b;
resta=num1-num2;
printf ("La resta de los números es: %d", &resta);}

//Función que reciba dos números y los multiplique
int multiplicacion (int a, int b){
int multiplicacion, a,b;
multiplicacion= num1*num2;
printf ("La multiplicación de los números es: %d", &multiplicacion);
}

//Función que cambie de double a float
double division (int num1, int num2){
int a_d;
a_d= (double) a;
}

//Función factorial

int factorial (int numero) {
if (numero==0 || numero==1){
return 1;
}else {
return numero*factorial (numero-1);
}
}

//Función de repercusión 
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

//Función que calcula el euler de dos números 



//Función para calcular raíz cuadrada
void eq_cuadr(double a,double b, double c, double *r1, double *r2){
*r1=(-b+sqrt (b*b-4*a*c))/(2*a);
*r2=(-b-sqrt (b*b-4*a*c))/(2*a);
printf ("%p", r1);
}
