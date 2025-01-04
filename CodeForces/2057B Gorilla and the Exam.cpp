#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
    int n, k;
    cin >> n >> k;
    // vector<int> a(n);
    unordered_map<int, int> count;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        count[a]++;
        // cout << a;
    }
    vector<int> freq;
    for (auto& entry : count) {
        // cout << entry.second << "\n";
        freq.push_back(entry.second);
    }
    sort(freq.begin(), freq.end());
    int countMinus = 0;
    for (int i = 0; i < freq.size(); i++) {
        // cout << freq[i] << " ";
        if (k >= freq[i]) {
            k -= freq[i];
            countMinus++;
        } else {
            k = -1;
            break;
        }
    }
    // cout << freq.size() << " " << countMinus << "\n";
    if (k >= 0) {
        cout << 1 << "\n";
    } else {
        cout << freq.size() - countMinus << endl;
    }
}
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}