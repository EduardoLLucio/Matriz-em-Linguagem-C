#include <stdio.h>
#include <stdlib.h>
#define lin 3
#define col 3
#define MAX 9


int main(){
    int m[lin][col]={{1,2,1},
    {3,7,2},
    {4,1,5}};
    int vp[MAX];
    int vi[MAX];
    int i, j;
    int impar = 0 ;
    int par = 0;


 printf("\nMatriz...:\n");

    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%d ", m[i][j]);

        }
        printf("\n");
    }


     for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
         if(m[i][j] % 2 ==0){
                vp[par] = m[i][j];
                par++;
           }


           }

        }

      for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
                if(m[i][j] % 2){
                     vi[impar] = m[i][j];
                        impar++;
                }
        }

      }

       printf("\nImpares\n");
    for(i=0;i<impar;i++){
        printf("%d ", vi[i]);
 }
        printf("\nPares\n");
    for(i=0;i<par;i++){
        printf("%d ", vp[i]);
 }


}
