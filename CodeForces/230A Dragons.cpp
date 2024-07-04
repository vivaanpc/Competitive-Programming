#include<bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    bool ans;
    for (int j = 0; j < n; j++) {
        if (s > arr[j].first) {
            s = s +  arr[j].second;
            ans = true;
        } else {
            ans = false;
            break;
        }
    }
    if (ans) cout << "YES";
    else cout << "NO";

}