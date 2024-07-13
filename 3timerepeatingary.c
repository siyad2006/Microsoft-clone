#include<stdio.h>
int main(void){
    int i,j,n;
    int a[100];
    int count;
    printf("enter the value for n");
    scanf("%d",&n);
    printf("enter the elements of this array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // to find the elements that occres three times
    for(i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count==3){
            printf("%d occurev  theree times",a[i]);
        }

    }
    
}