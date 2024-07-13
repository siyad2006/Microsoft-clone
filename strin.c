#include <stdio.h>
int main()
{
     int admission;
 char name[10];
 int date;
 int dob;
 float admissionfee;
    
    printf("enter student details\n");
    printf("admission number\n");

    scanf("%d",&admission);
    printf("name\n");
    scanf("%c",&name);
    printf("datw\n");
    scanf("%d",&date);
    printf("dob\n");
    scanf("%d",&dob);
    printf("admission fee\n");
    scanf("%f",& admissionfee);
    printf("details\n");
    printf("admission numbetr \n%d",admission);
    printf("name is \n%c",name);
    printf("date \n%d",dob);
    printf("admission fee \n%f",admissionfee);
    return 0;


}


    
