#include<stdio.h>
int main(){
    int n, amazing = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0], max = arr[0];
    for(int i=0; i<n-1; i++){
        if(arr[i+1]>max){
            max = arr[i+1];
            amazing++;
        }
        else if(arr[i+1]<min){
            min = arr[i+1];
            amazing++;
        }
        else{
            continue;
        }
    }
    printf("%d",amazing);
    return 0;
}