#include<stdio.h>
#include<string.h>
int main(){
    char arr[5];
    int t, count;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        count = 0;
        scanf("%s", &arr);
        for(int z = 0; z < 5; z++){
            if(arr[z] == 'A'){
                count++;
            }
        }
        if(count>=3){
            printf("%c\n", 'A');
        }
        else{
            printf("%c\n", 'B');
        }
    }
    return 0;
}