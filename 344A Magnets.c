#include<stdio.h>
int main(){
    int n, count = 1;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for (int j = 0; j<n-1; j++){
        if (a[j] == 10 && a[j+1] == 01 || a[j] == 01 && a[j+1] == 10) count ++;
    }
    printf("%d",count);
    return 0;
}