#include<stdio.h>

int main(){
char str1[50]="My name is ";
char str2[]="sazib shaha";
int i=0,lenth=0,j=0;
while(str1[i]!='\0'){
   i++;
   lenth++;
}
while(str2[j]!='\0'){
    str1[lenth+j]=str2[j];
    j++;
}
puts(str1);
return 0;
}

