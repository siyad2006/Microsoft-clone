#include<stdio.h>

void main(){
    int i,j,rows,space;
    printf("enter the number of rows");
    scanf("%d",&rows);
    for ( i = rows; i >= 1; i--)
    {
        
        for(space=1;space<=(rows-i);space++){
            printf("  ");

        }
        for(j=1;j<=i;j++){// 2*i-1;
            printf(" * ");

        }
        printf("\n");

    }
    
}