#include<stdio.h>
int main(){
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int j = 0; j < n; j++){
        scanf("%d",&a[j]);
    }
    for(int i = 0; i < n; i++){
        if(a[i] >= a[k-1] && a[k-1]>=0){
            if(a[i]==0) continue;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}