#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n ; i++) {
        cin >> v[i];
    }
    int k;
    cin >> k;
    for (int i = 1; i < n ; i ++) {
        v[i] += v[i - 1];
    }
    std::vector<int> queries(k);
    for (int i = 0; i < k; i++) {
        cin >> queries[i];
        cout << lower_bound(v.begin() , v.end() , queries[i]) - v.begin() + 1 << "\n";
    }
}
