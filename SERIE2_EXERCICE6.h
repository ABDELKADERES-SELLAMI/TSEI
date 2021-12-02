int SERIE2_EXERCICE6()

{
    int somme=1;
int nbr,n;
printf("entrer une valeur n");
scanf("%d",&n);
printf("entrer une valeur nbr");
scanf("%d",&nbr);
for( int i=0;i<n;i++){
if(nbr%i==0){
    somme=somme+i;
}
}
if(nbr==somme){
printf("nombre parfait");}
else
    printf("nombre n'est pas parfait");

}
