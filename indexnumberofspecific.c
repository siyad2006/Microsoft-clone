#include<stdio.h>
int main(void){
    int i,j,n;
    int a[100],s;
    int flag=0;
    printf("size of array: ");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the item to search: ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(a[i]==s){
             flag=1;
            break;
        }
        
    }
    if(flag==0){
        printf("not found");
    }else{
        printf("element found");
        for(i=0;i<n;i++){
            if(a[i]==s){
                printf("%d is present at location %d \n",s,i+1);
            }
        }
    }
    return 0;
}