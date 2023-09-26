#include <stdio.h>
int main
{
char operador;
printf ("Ingresa un operador\n")
scanf ("%c",&operador);

switch (operador) {
case '+'
printf ("es una suma\n");
break;
case '-'
printf ("es una resta\n");
break;
case '*'
printf ("es una multiplicación\n");
break;
case '\'
printf ("es una división\n");
break;
default:
("Error, ingresa un operador válido\n");

}
  return 0;
}
