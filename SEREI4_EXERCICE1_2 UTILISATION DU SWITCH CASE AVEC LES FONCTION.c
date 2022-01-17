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
int
factoriel (int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * factoriel (n - 1);
}

float
U_n (int n)
{
  int k;
  float U;
  U = 0.0;
  for (k = 1; k <= n; k++)
    {
      U = U + (float) 1 / (pow (n, 2) + k);
      return U;
    }
}

float
Z_n (int n)
{
  int k;
  float Z;
  Z = 0;
  for (k = 0; k <= n; k++)
    {
      Z = (Z + (float) (factoriel (n - k) * factoriel (k)) / factoriel (n));
    }
  return Z;
}

float
Y_n (int n)
{
  int i;
  float Y;
  Y = 0;
  for (i = 1; i <= n; i++)
    {
      Y = (Y + (float) factoriel (i)) / factoriel (n);
    }
  return Y;
}

float
F_n (int n)
{
  char alpha;
  int k;
  float F;
  for (k = 1; k <= n; k++)
    {
      F =
	F +
	(float) (pow (k, 1 / n) *
		 (pow (n, alpha - 1 / n) + pow (k, alpha - 1 / n)));
      return F / pow (n, alpha + 1);
    }
}

float
D_n (int n)
{
  int k;
  float D;
  D = 0;
  for (k = n; k <= 2 * n; k++)
    {
      D = D + ((float) (sin (pi / k) * exp (1 / (k + n))) - n);
    }
  return D;
}

int
main ()
{
  float s = 0;
  int n;
  float U, Z, Y, D, F;
  char fonction;
  printf ("donner la valeur de n\n");
  scanf ("%d", &n);
  printf ("saisir le nom de la  fonction U,D,Z,F,Y\n");
  fonction = getch ();
  printf ("la fonction que vous voulez calculer est %c\n", fonction);
  switch (fonction)
    {
    case 'U':
      U = U_n (n);
      printf ("la somme Un est = %f", U);
      break;
    case 'F':
      F = F_n (n);
      printf ("la somme Fn est = %f", F);
      break;
    case 'Z':
      Z = Z_n (n);
      printf ("la somme Zn est = %f", Z);
      break;
    case 'Y':
      Y = Y_n (n);
      printf ("la somme Yn est = %f", Y);
      break;
    case 'D':
      D = D_n (n);
      printf ("la somme Dn est = %f", D);
      break;
    default:
      printf ("Il y'a une faute au niveau du saisie de l'information");
      break;
    }
  getch ();

}
