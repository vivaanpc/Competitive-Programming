#include<stdio.h>
// Function for sum of digits
int sum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int t, n, sum1;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        sum1 = 0;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++) {
            if (j + 1 >= 10) {
                arr[j] = sum(j + 1);
            } else {
                arr[j] = j + 1;
            }
            sum1 += arr[j];
        }
        printf("%d\n", sum1);
    }
    return 0;
}