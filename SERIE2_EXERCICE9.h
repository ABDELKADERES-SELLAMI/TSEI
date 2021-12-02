int SERIE2_EXERCICE9(){
    int main(){
    int i,n;
    double u;
    int factorial(int n)
    {
        if(n==1)
            return 1;
            else return n*factorial(n-1);
    }
    printf("donner n");
    scanf("%d",&n);
    u=0.0;
    for(i=1;i<=n;i++)
        u=u+factorial((int)pow(i,2*i));
    if(n==0)
        printf("la valeur de u l'ordre %d est %d",n,0);
    else
        printf("la valeur de u l'ordre %d est %d",n,u);
    return 0;
    }
}
