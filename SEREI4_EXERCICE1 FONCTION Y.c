/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int
factoriel (int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * factoriel (n - 1);
}

float
Y_n (int n)
{
  int i;
  float s;
  s = 0;
  for (i = 1; i <= n; i++)
    {
      s = (s + (float) factoriel (i)) / factoriel (n);
    }
  return s;
}

int
main ()
{
  int n;
  float s;
  printf ("veuillez saisir la valeur de n\n");
  scanf ("%d", &n);
  s = Y_n (n);
  printf ("la somme de Y_n est %f", s);
}
