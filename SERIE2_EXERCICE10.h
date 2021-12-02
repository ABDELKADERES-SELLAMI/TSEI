int SERIE2_EXERCICE10(){
int factorial(int n)
{
    if(n==1 || n==0)
        return 1;
    else return n*factorial(n-1);
}
int main()
{
    float u=0.0,v=0.0,w=0.0,x=0.0,y=0.0;
    int n,k;
    printf("donner n\n");
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        u=u+1./(n*n+k);
        v=v+1./sqrt(n+k);
        w=w+k/sqrt(n+k);
        x=x+k/(n+k);
        y=y+factorial(k);
        printf("la somme de u a l'ordre \t %d est \t%f\n",k,u);
        printf("la somme de v a l'ordre \t %d est \t%f\n",k,v);
        printf("la somme de w a l'ordre \t %d est \t%f\n",k,w);
        printf("la somme de x a l'ordre \t %d est \t%f\n",k,x);
        printf("la somme de y a l'ordre \t %d est \t%f\n",k,y);
    }
    y=y/factorial(n);
    printf("la somme de u a l'ordre \t %d est \t%f\n",n,u);
    printf("la somme de v a l'ordre \t %d est \t%f\n",n,v);
    printf("la somme de w a l'ordre \t %d est \t%f\n",n,w);
    printf("la somme de x a l'ordre \t %d est \t%f\n",n,x);
    printf("la somme de y a l'ordre \t %d est \t%f\n",n,y);
    return 0;
    }
}
