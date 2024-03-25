#include<stdio.h>
#include<string.h>
int main(){
    int n, a[100];
    scanf("%d",&n);
    for (int j=0; j<n; j++){
        if(strlen(a)-1<=10){
            printf("%s",a);
        }
        else{
            for (int i = 0; i < n; i++){
                scanf("%s",&a);
                printf("%c%d%c\n",a[0],strlen(a)-2,a[strlen(a)-1]);
            }
        }   
    }
    return 0;
}