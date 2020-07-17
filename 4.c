#include <stdio.h>
#include <stdlib.h>
#define lin 3
#define col 3

int main(){
    int m[lin][col]={{1,2,1},
    {3,7,2},
    {4,1,5}};
    int i, j, soma= 0;
    float media;
    int maiorMedia =0;


 printf("\nMatriz...:\n");

    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%d ", m[i][j]);
           // printf("\n");
            soma += m[i][j];
            media = soma /9.0f;
        }
        printf("\n");
    }

    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
              if(m[i][j]>media){
               maiorMedia++;
              }
        }
    }

 printf("\n Soma....: %d ",soma);
 printf("\n");
 printf("\n Media...: %.2f", media);
 printf("\n");
 printf("\n Qtd>Media...: %d", maiorMedia);
 printf("\n");




}
