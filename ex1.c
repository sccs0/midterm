#include <stdio.h>
int kkk(char s[])
{
    int i;
    int count100=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='A'){
              count100++;
        }
    }
    return  count100;
}
int lll(char t[]){
    int i;
    int count200=0;
    for(i=0;t[i]!='\0';i++){
        if(t[i]=='0'){
            count200++;
        }
    }
    return count200;
}
int main(){
   printf("请输入一段总长度不超过50个字符的任意字母数字，空格符，制表符");
    char c[50];
    int i=0;
    c[i]=getchar();
    while(c[i]!='\n'){
        i++;
        c[i]=getchar();
    }
    printf   ("the number of a is %dand the number of 0 is%d",kkk(c),lll(c));
}