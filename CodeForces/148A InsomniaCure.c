#include<stdio.h>
int main(){
    int k,l,m,n,d,z=0;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    int arr[d];
    for(int i=0; i<d; i++){
        arr[i] = i+1;
    }
    for(int i=0; i<d; i++){
        if(arr[i]%k == 0 || arr[i]%l == 0 || arr[i]%m == 0 || arr[i]%n == 0){
            arr[i] = 0;
        }
        if(arr[i]==0){
            z++;
        }
    }
    printf("%d",z);
    return 0;
}