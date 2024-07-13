#include <stdio.h>
int main(){
    int i,j;
    int values[3][3];
    printf("enter the values\n");
    for ( i = 0; i < 3; i++)
    { 
        /* code */
for ( j= 0; j < 3; j++)
{
    /* code */
    scanf("%d",&values[i][j]);
}
    }
    printf("entered values are  :");
     for ( i = 0; i < 3; i++)
    {
        /* code */
for ( j= 0; j < 3; j++)
{
    /* code */
    printf("%d\t ",values[i][j]);
}
printf("\n");
    }
}