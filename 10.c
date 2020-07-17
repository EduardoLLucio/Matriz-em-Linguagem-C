#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, j;


  for(i=0;i<4;i++){
    for(j=0;j<7;j++){
        if((i+j)>=4-1){
            printf("* ");
        }else{
        printf("");
        }
    }
            printf("\n");

  }
}
