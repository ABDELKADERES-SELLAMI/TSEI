int SERIE2_EXERCICE4(){
    int nbr;
printf("donner un nombre ");
scanf("%d",&nbr);
if(nbr<0 || nbr >15){printf("erreur de saisie");}
else{
switch(nbr){
case 0 : printf("0"); break;
case 1 : printf("1"); break;
case 2 : printf("2"); break;
case 3 : printf("3"); break;
case 4 : printf("4"); break;
case 5 : printf("5"); break;
case 6 : printf("6"); break;
case 7 : printf("7"); break;
case 8 : printf("8"); break;
case 9 : printf("9"); break;
case 10 : printf("A"); break;
case 11 : printf("B"); break;
case 12 : printf("C"); break;
case 13 : printf("D"); break;
case 14 : printf("E"); break;
case 15 : printf("F"); break;
}
}
}
