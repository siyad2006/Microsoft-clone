#include<stdio.h>
int main(){
    int n,i,j,count;
    int a[10];

    printf("enter the number for limit");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j]){
                    count++;
                }
            }
        }
    
    if(count==0)
    {
        printf("%d",a[i]);
    }
    }
}