

int EXERCICE_7_SERIE_1(){
    int x,y,z,max;
    printf(" Entrer deux entiers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y) {
        max=x;
        if(z>max)
            max=z;
        }else {
            max=y;
        if(z>max)
            max=z;
        }
    printf("la valeur la plus grande est \n%d\n",max);
}



