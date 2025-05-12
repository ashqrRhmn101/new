#include<stdio.h>
char strlen(char str1[30]){
int i=0,len=0;
while(str1[i]!='\0'){
    len++;
    i++;
}
return len;

}

int main(){
char str2[30];

gets(str2);

int lenth=strlen(str2);

printf("%d",lenth);


}
