#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter any coordinate number =");
 scanf("%d %d",&a,&b);
 if((a>0)&&(b>0))
 {
     printf("First quadrant");
 }
else if((a<0)&&(b>0))
 {
     printf("second quadrant");
 }
 else if((a<0)&&(b<0))
 {
     printf("Third quadrant");
 }
else
{
    printf("Fourth quadrant");
}
    getch();
}
