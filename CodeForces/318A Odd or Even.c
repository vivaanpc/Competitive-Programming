#include<stdio.h>
int main(){
    long long n,w;
    scanf("%lld %lld",&n, &w);
    if(w<=(n+1)/2){
        printf("%lld",2*w-1);
    }
    else{
        printf("%lld",(w-((n+1)/2))*2);
    }
}