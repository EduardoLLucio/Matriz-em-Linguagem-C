#include <stdio.h>
#include <stdlib.h>
#define l 5
#define c 5
#define MAX 9


int main(){
    int m[l][c]={{3,4,5,8,9},
    {4,5,9,1,2},
    {7,3,1,1,7},
    {6,3,9,8,0},
    {5,1,4,3,9}};
    int i, j;
    int somap=0, somas=0;

 printf("Diag.Principal..:\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(i==j){
                printf("%d ",m[i][j]);
            somap = somap+m[i][j];
            }else{
            printf("* ");
            }
        }
        printf("\n");
    }
     printf("\nSoma da Diag.Principal..: %d ", somap);
        printf("\n");

        printf("\n");
    printf("\n");

printf("Diag.Secundaria.:\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if((i+j)==4){
                printf("%d ",m[i][j]);

            somas = somas+m[i][j];
            }else{
            printf("* ");
            }
        }
    printf("\n");

    }
        printf("\nSoma da Diag.Secundaria..: %d \n", somas);

}
