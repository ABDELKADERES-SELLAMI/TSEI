int EXERCICE1_SERIE_1(){
    int Q;
    float prix_unitaire;
    printf("ENTRER LE PRIX UNITAIRE\n");
    scanf("%f",&prix_unitaire);
    printf("ENTRER LA QUANTITE COMMANDER\n");
    scanf("%d",&Q);
    float prix_final=(Q*prix_unitaire)+(Q*prix_unitaire)*0.2;
    printf("prix_final :\n%.2f\n",prix_final);
}

