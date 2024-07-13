#include<stdio.h>
int main(void){
    int i,j,n;
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i||j==(n+1)-i)
            printf("%d",j);// ivide printf("*");type cheythal star pattern kittum
            else
            printf(" ");
        }
        printf("\n");
    }
}