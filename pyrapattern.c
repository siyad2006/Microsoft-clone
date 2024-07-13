#include<stdio.h>
int main(){
    int i,j,space;
    int rows=0;
    printf("enter the number for rows");
    scanf("%d",&rows);
    for ( i = 1; i <= 5; i++)
    {
        for(space=1;space<=(rows-i);space++)
        {

            printf("  ");

        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
}