#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	if (min(n, k) % 2 == 1) {
		cout << "Akshat";
	} else {
		cout << "Malvika";
	}
}