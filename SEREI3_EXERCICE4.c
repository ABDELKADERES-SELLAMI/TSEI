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
  int W, n;
  printf ("donner n\n");
  scanf ("%d", &n);
  if (n == 1)
    {

      W = 2;
      printf ("la valeur de W est %d\n", W);
    }
  else if (n == 2)
    {
      W = 1;
      printf ("la valeur de W est %d\n", W);
    }
  else if (n == 3)
    {
      W = 6;
      printf ("la valeur de W est %d\n", W);
    }
  else if (n == 4)
    {
      W = 7;
      printf ("la valeur de W est %d\n", W);
    }

  W = (n * n) - (3 * n) + 3;
  printf ("la valur de W est ---------------->%d\n", W);
}
