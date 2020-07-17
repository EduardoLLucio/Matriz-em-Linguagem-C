#include <stdio.h>
#include <stdlib.h>

int main(){
    int m[3][3]={{1,4,7},
    {2,5,8},
    {3,6,9}};
    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", m[i][j]);

        }
        printf("\n");
    }
}
