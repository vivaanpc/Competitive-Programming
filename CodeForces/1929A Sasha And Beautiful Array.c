#include<stdio.h>
void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {     
        for (j = 0; j < size - i - 1; j++) { 
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int t, sum, temp, n;
    scanf("%d",&t);
    for (int i = 0; i < t; i++){
        sum = 0;
        scanf("%d",&n);
        int arr[n];
        for (int j = 0; j < n; j++){
            scanf("%d",&arr[j]);
        }
        int size = sizeof(arr) / sizeof(arr[0]);
        for (int k = 0; k < size - 1; k++) {     
            for (int u = 0; u < size - k - 1; u++) { 
                if (arr[u] > arr[u+1]) {
                    temp = arr[u];
                    arr[u] = arr[u+1];
                    arr[u+1] = temp;
            }
        }
    }
        for (int z = 0; z < n-1; z++){
            sum += (arr[z+1] - arr[z]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
