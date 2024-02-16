#include<stdio.h>
int main()
{
    int k, n, w, f;
    scanf("%d %d %d",&k,&n,&w);

    f = k*((w*(w+1))/2);

    if( f - n>0)
      printf("%d", f-n);
    else
        printf("%d", 0);

    return 0;


}