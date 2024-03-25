#include<stdio.h>
#include<string.h>
int main(){
    int t, x = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        char arr[4];
        scanf("%s", arr);
        if(arr[1] == '+') {++x;}
        else if (arr[1] == '-') {--x;}
    }
    printf("%d\n",x);


    return 0;
}