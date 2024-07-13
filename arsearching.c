#include <stdio.h>
int main()
{
  int i;
int limit,values[100],searchkey,flag=0;
printf("enter the limit");
scanf("%d",&limit);
printf("enter the values");
for ( i = 0; i < limit; i++)
{
    /* code */  
    scanf("%d",&values[i]);

}
printf("pleease enter the search key");
scanf("%d",&searchkey);

for ( i = 0; i < limit; i++)
{
    /* code */
if (searchkey==values[i]);

{
    /* code */
flag=1;

break;

}


}
if (flag==1)
{
    /* code */
    printf("value found at possition %d",i+1);
}else
{
    printf("value not found");
}




}
