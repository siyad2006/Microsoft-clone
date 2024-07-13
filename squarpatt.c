#include<stdio.h>
void main(){
    int i,j;
    int hb;
    printf("enter the hight and bridth");
    scanf("%d",&hb);
    for (size_t i = 1; i <=hb; i++)
    {
        for ( j = 1;j<=hb; j++)
        {
            printf("*");

        }
        printf("\n");
    }
    
}