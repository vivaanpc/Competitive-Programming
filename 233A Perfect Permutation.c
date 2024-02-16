#include<stdio.h>
int main(){
    int n, j = 0;
    scanf("%d",&n);
    int arr[n], num=n;
    if(n%2==0){
        for(int i=1, j=0; i<=(n/2);i++){
            arr[j]=j+2;
            arr[j+1]=j+1;
            j+=2;
        }
        for(int j=0; j<num; j++){

            printf("%d ",arr[j]);

        }
    }

    else{

        printf("%d",-1);

    }
    return 0;
}