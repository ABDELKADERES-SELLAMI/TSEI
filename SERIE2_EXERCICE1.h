int SERIE2_EXERCICE1(){
    int q,s;
    printf("Entrer une somme d'argent:");
    scanf("%d",&s);
    printf("\n Resultat:\n");

    q=s/200;
    s=s%200;
    if(q>0){
    if(q == 1)
        printf("%d billet de 200 DH\n",q);
    else
        printf("%d billets de 200 DH\n",q);

    }

    q=s/100;
    s=s%100;
    if(q>0){
    if(q == 1)
        printf("%d billet de 100 DH\n",q);
    else
        printf("%d billets de 100 DH\n",q);

    }

    q=s/50;
    s=s%50;
    if(q>0){
    if(q == 1)
        printf("%d billet de 50 DH\n",q);
    else
        printf("%d billets de 50DH\n",q);

    }

    q=s/20;
    s=s%20;
    if(q>0){
    if(q == 1)
        printf("%d billet de 20 DH\n",q);
    else
        printf("%d billets de 20 DH\n",q);

    }

    q=s/10;
    s=s%10;
    if(q>0){
    if(q == 1)
        printf("%d piece de 10 DH\n",q);
    else
        printf("%d pieces de 10 DH\n",q);

    }

    if(s>0){
        if(s==1)
            printf("%d peice de 1 DH\n",s);
        else
            printf("%d peicde 1 DH\n",s);
    }
}

