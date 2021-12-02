int SERIE2_EXERCICE7(){
int V0,V,n,i;
int som_v;
V=2;
som_v=2;
printf("donner n\n");
scanf("la valeur de v a l'ordre\t 0 est \t%d\n",V);
for (i=1;i<=n;i++);
{
    if (i%2==0)
        V=V+2;
else
    V=V+4;
printf(" la somme de Vn a l'ordre\t %d est \t %d\n",i,V);
som_v=som_v+V;
}
printf(" la somme de Vn a l'ordre\t %d est \t %d\n",n,som_v);
return 0;
}
