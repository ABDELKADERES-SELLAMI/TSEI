/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int
main ()
{
  int k = 1, n;
  float F;
  F = 0.0;
  printf ("donner une valeur n\n");
  scanf ("%d", &n);
  while (k < n)
    {
      F = F + sqrt (1 - pow (k / n, 2));
      k = k + 1;
    }
  F = F / n;
  printf ("\n-------------------------------\n");
  printf ("la somme de f est %f", F);
}
