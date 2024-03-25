#include<stdio.h>
int main(){
    int n, a, b;
    scanf("%d",&n);
    for (int i = 0; i<n; i++){
        scanf("%d %d", &a, &b);
        if(a==1 && b==1){
            printf("NO\n");
        }
        else if((a%2==1 && b%2==0)&&(b==2*a) || (a%2==0 && b%2==1) && (a==2*b)){
            if(a==1 && b==2 || b==1 && a==2){
                printf("NO\n");
            }
            else{
                printf("NO\n");
            }
        }
        else if(a%2==1 && b%2==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}