#include <stdio.h>
main(){
    int X,A,B,C,D;

    printf("");
    scanf("%d %d %d %d",&A,&B,&C,&D);

    if ((B > C)&&(D > A)&&(C+D > B+A)){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}
