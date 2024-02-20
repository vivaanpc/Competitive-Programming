#include<stdio.h>
#include<math.h>
int main(){
    int t, n, a;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d", &n);
        int arr[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
        }
        a = arr[0];
        for(int k = 1; k < n; k++){
            if(arr[k]>a){
                a = arr[k];
            }
            else{
                int w = a / arr[k];
                if (w * arr[k] > a){
                    a = w * arr[k];
                }
                else{
                    a = (w + 1) * arr[k];
                }
            }
        }
        printf("%d\n", a);
        }
    return 0;
}