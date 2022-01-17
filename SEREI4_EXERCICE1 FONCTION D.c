/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14
float
D_n (int n)
{
  int k;
  float s;
  s = 0;
  for (k = n; k <= 2 * n; k++)
    {
      s = s + ((float) (sin (pi / k) * exp (1 / (k + n))) - n);
    }
  return s;
}

int
main ()
{
  int n;
  float SM;
  printf ("veuillez saisir la valeur de n");
  scanf ("%d", &n);
  SM = D_n (n);
  printf ("la somme de Dn est %f\n", SM);
  return 0;
}
