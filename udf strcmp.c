#include<stdio.h>
char strlen(char str1[30]){
int i=0,len=0;
while(str1[i]!='\0'){
    len++;
    i++;
}
return len;

}
char strcmp(char str2[30],char str3[30]){
    int j,f=0;
for(j=0;str2[j]!='\0';j++){
    if(str2[j]!=str3[j]){
        f=1;
        break;
    }
}
if(f==1)
    printf("not same\n");
else
    printf("same\n");

return f;
}
int main(){
char str4[30],str5[30];
gets(str4);
gets(str5);
int lenth1=strlen(str4);
int lenth2=strlen(str5);
if(lenth1==lenth2){
    strcmp(str4,str5);
}
else
    printf("Not same\n");


}
