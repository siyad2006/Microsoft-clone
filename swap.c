#include<stdio.h>
int main()
{
    
    int a;int b;int choice;int sum;
    printf("enter the rates");
    scanf("%d%d",&a,&b);
    printf("enter your choice");
    scanf("%d",&choice);
    switch (choice)

    {
    case 1:
        sum=a+b;
        break;
    case 2:
    sum=a-b;
    break;
    case 3:
    sum=a*b;
    break;
    case 4:sum=a/b;
    break;


    default: printf("nirthi poda pulley\n");
        break;
    }
    printf("%d",sum);
    if (sum<100)
    {
        printf("you have not minimum balance");
        
    }
    
    return 0;
}