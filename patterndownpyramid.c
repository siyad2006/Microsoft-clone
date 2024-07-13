#include <stdio.h>
int main(void){
    int i,j,space,rows;

    printf("enter the number of rows");
    scanf("%d",&rows);
    for ( i = rows; i>=1; i--)
    {
        for(space=1;space<=(rows-1);space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");

    }
    

}