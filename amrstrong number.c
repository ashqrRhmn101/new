/*//invidual number er cube er jogfol jodi abr ager number er soman hoi taile armstrong number
#include<stdio.h>
int main()
{
int num,r,sum=0,temp;
printf("Enter any number=");
scanf("%d",&num);
temp=num;
while(temp!=0){
    r=temp%10;
    sum=sum+r*r*r;
    temp=temp/10;
}
if(num==sum){
    printf("%d is Armstrong number",num);
}
else{
    printf("%d is not Armstrong number",num);
}



    return 0;
}

*/
//invidual number er cube er jogfol jodi abr ager number er soman hoi taile armstrong number
#include<stdio.h>
int main()
{
int num,r,initialnum,finalnum,i,sum=0,temp;
printf("Enter initial number=");
scanf("%d",&initialnum);
printf("Enter Final number=");
scanf("%d",&finalnum);
for(i=initialnum;i<=finalnum;i++){
        temp=i;
while(temp!=0){
    r=temp%10;
    sum=sum+r*r*r;
    temp=temp/10;
}
if(sum==i){
    printf("%d ",i);
}
sum=0;

}



    return 0;
}

