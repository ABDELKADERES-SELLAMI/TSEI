int SERIE2_EXERCICE3(){
char sex;
char situation;
int age ,c,m;
printf("Donner votre sex h pour homme et f pour les femme");
scanf("%c",&sex);
printf("Donner votre situation c pour celebatere et m pour marie ");
scanf("%c",&situation);
printf("Donner votre age");
scanf("%d",&age);
if(sex=='h'){
if((sex=='h' && age<20 && situation=='c') || (sex=='h' && age>70 && situation=='m'))

{printf("ne paient pas");}
else if(sex=='f'){
if((sex=='f' && age<22 && situation=='c')|| (sex=='f' && age>55 && situation=='m')){
        printf("ne paient pas");}
else
    printf("paient");}

}
