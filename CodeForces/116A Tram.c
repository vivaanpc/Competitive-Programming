#include<stdio.h>

int main(){
    int n, max, total, temp;
    scanf("%d",&n);
    int a[n], b[n];
    for(int i=0; i<n; i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    max = b[0] - a[0];
    total = b[0] - a[0];
    for(int i=1; i<n-1; i++){
        temp = -a[i] + b[i];
        total += temp;
        if (total > max){
            max = total;
            }
    }        
    printf("\n%d",max);
    return 0;
}
