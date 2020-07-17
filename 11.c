#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, j;
  int aux=4;
  int segaux=4;


  for(i=0;i<4;i++){
    for(j=0;j<10;j++){
        if(i==0||i==aux-1||j==0||j==aux-1){
            printf(" *");
        }else{
        printf("        ");
        }
    }
            printf("\n");

  }
  printf("\n");
printf("\n");

  for(i=0;i<segaux;i++){
    for(j=0;j<segaux;j++){
        if(i==0||i==segaux-1||j==0||j==segaux-1){
            printf(" *");
        }else{
        printf("  ");
        }
    }
            printf("\n");

  }
              printf("\n @@@@@@@@@  Consegui fazer estes  2 quadrados professor, como estava em duvida em qual era o certo mandei os 2  @@@@@@@@\n");

}


