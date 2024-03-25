#include<stdio.h>
 
int main(){
    int n, tempA = 0, tempB = 0, tempC = 0, a = 0, b = 0, c = 0;
    scanf("%d",&n);
    
    for(int i = 0; i<n; i++){
        scanf("%d %d %d", &tempA, &tempB, &tempC);
        a += tempA;
        b += tempB;
        c += tempC;
    }
    
    if(a == 0 && b == 0 && c == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
 return 0;   
}