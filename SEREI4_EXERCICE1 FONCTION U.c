/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float
U_n (int n)
{
  int k;
  float s;
  s = 0.0;
  for (k = 1; k <= n; k++)
    {
      s = s + (float) 1 / (pow (n, 2) + k);
      return s;
    }
}

int
main ()
{
  int n;
  float U;
  printf ("veuillez saisir la valeur de n\n");
  scanf ("%d", &n);
  U = U_n (n);
  printf ("la somme de U_n est %f", U);
  return 0;
}
