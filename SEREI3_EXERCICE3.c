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
  int V0, V1, V2, V, SM, i, n;
  V0 = 1;
  V1 = 10;
  V2 = 20;
  SM = V0 + V1 + V2;
  printf ("donner n\n");
  scanf ("%d", &n);
  switch (n)
    {
    case 0:
      printf ("la somme de V est %d\n", V0);
      break;
    case 1:
      printf ("la somme de V est %d\n", V1);
      break;
    case 2:
      printf ("la somme de V est %d\n", V2);
      break;
    }
  for (i = 3; i <= n; i++)
    {
      V = (1 / ((2 * V1) + V2)) * V0;
      printf ("la valeur de V est %d\n", V);
      SM = SM + V;
      V0 = V1;
      V1 = V2;
      V2 = V;
    }
  printf ("----------------------------\n");
  printf ("la sommen de V est %d \n", SM);
}
