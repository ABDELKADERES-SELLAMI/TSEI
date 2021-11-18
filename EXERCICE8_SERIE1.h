int EXERCICE8_SERIE1(){
    int nb, remise;
    float PU,TTC,PF,sum;
    printf("nb d'article:\n");
    scanf("%d\n",&nb);
    printf(" le prix unitaire:\n");
    scanf("%f\n",&PU);
    TTC=(1+0.2)*PU*nb;
    printf("le montant TTC est : %f ",TTC);
    sum=nb*PU;
    sum+=sum*0.2;
    if(sum>1000){
        remise=5;}
PF=sum-((sum*remise)/100);
printf("TTC final est:%.2fDH\n LA REMISE EST :%.2dDH\n LE PRIX FINAL EST :%.2fDH\n",sum,remise,PF);

}


