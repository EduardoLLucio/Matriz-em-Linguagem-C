#include <stdio.h>
#include <stdlib.h>
#define lin 3
#define col 2
#define MAX 9


int main(){
    int m[lin][col]={{3,4},
    {4,5},
    {7,3}};
    int md[lin][col]={{8,9},
    {1,2},
    {1,7}};
    int vp[MAX];
    int vi[MAX];
    int i, j;
    int s[lin][col];

    for(i=0;i<lin;i++){
            for(j=0;j<col;j++){
       s[i][j] = m[i][j]+md[i][j];
       printf("%d ", s[i][j]);

            }
            printf("\n ");
    }
}
