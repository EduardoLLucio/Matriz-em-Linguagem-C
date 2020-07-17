#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, j;
    int m[5][5]={{3,4,5,8,9},
    {4,5,9,1,2},
    {7,3,1,1,7},
    {6,3,9,8,0},
    {5,1,4,3,9}};

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if((i+j)>3-1){
            printf("* ");
        }else{
        printf("");
        }
    }
            printf("\n");

  }
printf("\n");
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if((i+j)>4-1){
            printf("%d ",m[i][j]);
        }else{
        printf("");
        }
    }
            printf("\n");

  }


}
