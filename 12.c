#include <stdio.h>
#include <stdlib.h>

int main(){
    int m[4][3] = {{3,4,5},
    {4,5,9},
    {1,2,4},
    {7,2,2}};
int i, j, s, sc;
int vl[4];
int vc[3];


   for(i=0;i<4;i++){
        s=0;
    for(j=0;j<3;j++){
    printf("%d ", m[i][j]);

        s+=m[i][j];
    }
    printf("\n");
    vl[i]=s;
   }

   for(j=0;j<3;j++){
    sc=0;
    for(i=0;i<4;i++){
        sc+=m[i][j];
    }
    vc[j]=sc;
   }
       printf("\nSoma Linhas\n");

   for(i=0;i<4;i++){
    printf("%d\n ",vl[i]);

   }

   printf("\nSoma Colunas\n");
   for(j=0;j<3;j++){
    printf("%d\n ",vc[j]);

   }

}
