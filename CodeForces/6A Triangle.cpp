#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>arr(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if (arr[3] < (arr[2] + arr[1]) || arr[2] < (arr[1] + arr[0])) {
        cout << "TRIANGLE";
    }
    else if (arr[3] == (arr[2] + arr[1]) || arr[2] == (arr[1] + arr[0])) {
        cout << "SEGMENT";
    }
    else cout << "IMPOSSIBLE";
}