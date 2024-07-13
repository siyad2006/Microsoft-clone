#include<stdio.h>
int main(void){
    int i,n,s,a[100];
    int flag;
    printf("enter the number of elements you needed to excicute");
    scanf("%d",&n);
    printf("enter the elements of this array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you to search: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        
        if(a[i]==s)
        {
             flag=1;
            break;
        }
    }
    if(flag==0){
        printf("elements not found.....");
    }else{
        printf("element found");
        for(i=0;i<n;i++){
            if(a[i]==s){
                printf("%d is present at location %d \n",s,i+1);
                break;
            }
        }
    }
}