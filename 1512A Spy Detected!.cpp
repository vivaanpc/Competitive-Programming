#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        int same = arr[0];
        if (arr[0] != arr[1] && arr[0] != arr[2]) same = arr[1];

        int ans;
        for (int k = 0; k < n; k++) {
            if (arr[k] != same)ans = k;
        }

        cout << ans + 1 << "\n";
    }
}