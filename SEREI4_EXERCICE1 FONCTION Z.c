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
Z_n (int n)
{
  int k;
  float s;
  s = 0;
  for (k = 0; k <= n; k++)
    {
      s = (s + (float) (factoriel (n - k) * factoriel (k)) / factoriel (n));
    }
  return s;
}

int
main ()
{
  int n, Sm;
  printf ("donner n");
  scanf ("%d", &n);
  Sm = Z_n (n);
  printf ("la somme z_n est %f", Sm);
  return 0;
}
