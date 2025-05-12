#include<stdio.h>

char strcpy(char str3[30],char str4[30]){
int j;
for(j=0;str4[j]!='\0';j++){
        str3[j]=str4[j];
}
str3[j]='\0';
return str3;
}
int main(){

char str5[30],str6[30];

gets(str6);

strcpy(str5,str6);
puts(str5);



}

