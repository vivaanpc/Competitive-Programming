#include<stdio.h>
int main(){
    int x, a;
    scanf("%d", &x);
    if(x%5 == 0){
        a = x / 5;
    }
    else{
        a = x / 5 +1;
    }
    printf("%d",a);
    return 0;
}