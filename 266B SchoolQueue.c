#include<stdio.h>
#include<string.h>
int main(){
    int n, t;
    scanf("%d %d",&n,&t);
    char arr[n];
    scanf("%s", &arr);
    while(t--){
        int i = 0;
        while(i<n-1){
            if(arr[i] == 'B' && arr[i+1] == 'G'){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp; 
            i+=2;
            }
            else{
                i++;
            }
        }
    }
    printf("%s",arr);
    return 0;
}
