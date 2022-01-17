/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int
main ()
{
  int U0, U1, U, SM, i, n;
  printf ("donner n\n");
  scanf ("%d", &n);
  if (n == 0)
    {
      U0 = 1;
      printf ("la somme de U0 est:%d\n", U0);
    }
  else if (n == 1)
    {
      U1 = 2;
      printf ("la somme de U est:%d\n", U1);
    }
  U0 = 1;
  U1 = 2;
  SM = U0 + U1;
  for (i = 2; i <= n; i++)
    {
      if (i % 2 != 0)
	{
	  U = U0 + U1;
	}
      else
	U = U1 + 3 * U0;
      printf ("la valeur de U est------>%d\n", U);
      SM = SM + U;
    }
  printf ("la somme de U est %d\n", SM);
}
