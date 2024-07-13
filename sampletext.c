#include<stdio.h>
int main(void){
    int i,limit,delete;
    int array[25];
    printf("enter the limiit for this array");
    scanf("%d",&limit);
    printf("enter the elements of this array");
    for(i=0;i<limit;i++)
        scanf("%d",&array[i]);
    
    printf("which element is you needed to delete");
    scanf("%d",&delete);
    for(i=0;i<limit;i++)
        if(array[i]==delete)
        {
            break;
        }
        for(;i<limit-1;i++){
        array[i]==array[i+1];
        }
        for(i=0;i<limit-1;i++)
        printf("%d\n",&array[i]);

    


}