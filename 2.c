#include <stdio.h>
#include <stdlib.h>

int main(){
    int m[2][3]={1,4,7,2,5,8};
    int i, j;

printf("Antes...:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ", m[i][j]);

        }
        printf("\n");
    }
    printf("\n");

printf("Depois...:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ", m[j][i]);
        }
         printf("\n");
    }
}

