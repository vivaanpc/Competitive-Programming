#include<stdio.h>
int main(){
    int t, n, add;
    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        scanf("%d", &n);
        char arr[n];
        add = 0;
        int a;
        scanf("%c",&a);
    	for (int j = 0; j < n; j++){
                scanf("%c",&arr[j]);
            }
            // for (int j = 0; j < n; j++){
            //     printf("%c ",arr[j]);
            // }
            
            for (int k = 1; k < n; k++){
                if (arr[k] == '@') add++;
                //printf("%d ",add);
                if (arr[k] == '*' && arr[k+1] == '*') break;
            }
            printf("%d\n",add);
        }
    return 0;
}