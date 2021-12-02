int SERIE2_EXERCICE2(){
    float PA;
    float CA,Fr,FV,HT,TVA,TTC;
    char Type;
    system("color 4A");
    printf("Donner le type de produit \n");
    scanf("%c",&Type);
    printf("donner le prix d'achat\n");
    scanf("%f",&PA);
    if(PA>9000)
    {
        {
            Fr=PA*4/100;
        }
    if(PA>2000){
        Fr=PA*0.1;
    }
    else{
        Fr=0.0;
    }
    }
    CA=PA+Fr;
    FV=CA*0.1;
    if(Type =='X' || Type =='x' ){
        TVA=30./100.;
    }
    if(Type =='Y' || Type =='y' ){
        TVA=38./100.;
    }
    if(Type =='Z' || Type =='z' ){
        TVA=43./100.;
    }
    if(Type =='T' || Type =='t' ){
        TVA=47./100.;
    }
    if(Type =='U' || Type =='u' ){
        TVA=49./100.;
    }
    HT=CA+FV;
    TTC=HT+HT*TVA;
    printf("\n le prix d'achat est %f",PA);
    printf("\n le frais de vente est %f",FV);
    printf("\n le TVA est %f",TVA);
    printf("\n le prix de vente est %f",HT);
    printf("\n les fraix est %f",Fr);
    printf("\n le prix totale TTC est %f",TTC);
}
