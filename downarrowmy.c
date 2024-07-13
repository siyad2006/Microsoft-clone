#include<stdio.h>
int main(void){
    int n,i,j,l,s;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=-n;j<=n;j++)
        {
            if(-(n-i)<j&&j<(n-i))
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
}
//ith sherikkum up arrow aan typing mistake il per mariyathan
// ithil -(n-i) and (n-i) um matti aa stanath -i um i um cherthal up arrow kittyum