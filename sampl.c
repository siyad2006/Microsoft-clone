#include<stdio.h>
int main(void){
    int i,j,rows;
    printf("enter the value for rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for( int space=1;space<=(rows-i);space++){
            printf(" ");

        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}