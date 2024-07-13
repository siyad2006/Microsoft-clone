#include<stdio.h>
int main(void){
    int j,i,l,n,s;
        printf("enter the value");
        scanf("%d",&n);
        for(i=-n;i<=n;i++){
            if(i<0)
            l=-i;
            else
            l=i;
            for(j=0;j<2*n-l+1;j++)
            {
                if(j<l)
                printf(" ");
                else
                printf("*");

            }
            printf("\n");
        }


}