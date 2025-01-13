#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
    int n, k;
    cin >> n >> k;
    map<int, int> count;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        count[a]++;
    }
    vector<int> freq;
    for (auto& entry : count) {
        freq.push_back(entry.second);
    }
    freq.resize(freq.size()); /*somehow passes the cases without TLE when commented out
    on local machine compilation time went from 4.0 to 3.2; 3.6 -> 2.9*/
    sort(freq.begin(), freq.end());
    int countMinus = 0;
    for (int i = 0; i < freq.size(); i++) {
        if (k >= freq[i]) {
            k -= freq[i];
            countMinus++;
        } else {
            k = -1;
            break;
        }
    }
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