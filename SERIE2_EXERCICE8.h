int SERIE2_EXERCICE8(){
    int w,w0,w1,w_0,n,i;
    int som_w;
    w0=0;
    w1=1;
    som_w=1;
    printf("donner n\n");
    scanf("%d",&n);
    printf("la valeur de wa l'ordre\t 0 est \t%d\n",w0);
    printf("la valeur de wa l'ordre\t 0 est \t%d\n",w1);
    for(i=2;i<=n;i++);
    {
        w=w+5*w1+w0+1;
        w0=w1;
        w1=w;
        printf("la valeur de w a l'ordre \t %d est \t%d\n",i,w);
        som_w=som_w+w;
    }
    printf("la somme de wn a l'ordre \t %d est \t%d",n,som_w);
    return 0;
}
