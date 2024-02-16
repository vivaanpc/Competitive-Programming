#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n];
    int count=0;
    scanf("%s",&s);
    for(int i = 0; i<strlen(s)-1; i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}