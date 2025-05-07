#include<stdio.h>

int main()
{
char str1[30],str2[30],str3[30];
int i,j=0,k=0,len1=0,len2=0,flag=0,r,l,t;
printf("Enter first string = ");
scanf("%s",&str1);
for(i=0;str1[i]!='\0';i++){
    str2[i]=str1[i];

}
str2[i]='\0';
printf("Your second string is = %s\n",str2);

while(str2[k]!='\0'){
    len2++;
    k++;
}
for( l=0,t=len2-1;t>=0;t--,l++){
    str3[l]=str2[t];
}
str3[l]='\0';
printf("Your reverse string is = %s\n",str3);
while(str3[j]!='\0'){
    len1++;
    j++;
}
if(len1==len2){
   for(int r=0;str2[r]!=0;r++){
    if(str2[r]!=str3[r])
    {
        flag=1;
        break;
    }

   }
   if(flag==1)
        printf("your string is not palindrome\n");
   else
    printf("Your string is palindrome\n");


}
else
    printf("your string is not palindrome\n");


    return 0;
}





