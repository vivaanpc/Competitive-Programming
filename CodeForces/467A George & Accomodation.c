#include<stdio.h>
int main(){
    int t , a, b, count = 0;
    scanf("%d",&t);
    for (int i = 0; i < t; i++){
        scanf("%d %d",&a, &b);
        if(b-a>=2){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}