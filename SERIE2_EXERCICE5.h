int SERIE2_EXERCICE5(){
int nbr1;
printf("donner un nombre nbr1");
scanf("%d",&nbr1);
int nombre;
for(int i=0;i<24;i++)
{
scanf("%d",&nombre);
if(nbr1>nombre){
    nbr1=nombre;
}
printf("%d nbr1\n");
}}
