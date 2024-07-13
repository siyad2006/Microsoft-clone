#include<stdio.h>
int main(void){
    int arry[25];
    int i,limit,searchkey;
    int flag=0;
    printf("enter the array limit");
    scanf("%d",&limit);
    printf("enter the elements of array");
    for(i=0;i<limit;i++){
        scanf("%d",&arry[i]);

    }
    printf("please enter search key");
    scanf("%d",&searchkey);
    for(i=0;i<limit;i++){
        if(searchkey==arry[i])
        {
                flag=1;
            break;
        }

    }
    if(flag==1){
        printf("value ound at position: %d",i+1);

    }
    else{
        printf("the item not found");
    }
}