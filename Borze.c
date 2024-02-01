#include<stdio.h>
#include<string.h>

int main(){
    char s[200];
    scanf("%s",&s);
    int i = 0;
    while(i<strlen(s)){
        if(s[i] == '-' && s[i+1] == '.'){
            printf("%d",1);
            i+=2;
        }
        else if(s[i] == '-' && s[i+1] == '-'){
            printf("%d",2);
            i+=2;
        }
        if(s[i]=='.'){
            printf("%d",0);
            i++;
        }
    }
    return 0;
}