#include<stdio.h>
int main(void){
int i,j,row,space;
printf("enter the value for row");
scanf("%d",&row);
for(i=row;1>=1;i--){
for(space=1;space<=(row-i);space++){
printf("  ");
}
for(j=1;j<=2*i-1;j++){
printf("* ");

}
printf("\n");

}
}