#include<stdio.h>
int main(void){
    int i,j,n;
    int a[110];
    printf("enter the value for n");
    scanf("%d",&n);
    printf("enter the elements of thos array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // to find ferquency of each elements
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;

            }

        }
        printf("ferquency of %d:%d \n",a[i],count);

    }
    return 0;
}