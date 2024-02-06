#include<stdio.h>
#include<string.h>
int main(){
    int upperCount = 0, lowerCount = 0;
    char s[1000];
    scanf("%s",&s);
    for(int i=0; i<strlen(s); i++){
        if(s[i]>=65 && s[i]<=90){
          upperCount++;
        }
        else{
            lowerCount++;
        }
    }
    if(lowerCount>=upperCount){
        for(int i=0; i<strlen(s); i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] +=32;
            }
        }
    }
    else{
        for(int i=0; i<strlen(s); i++){
            if(s[i]>96){
                s[i] -=32;
            }
        }
    }
    printf("%s",s);
    return 0;
}