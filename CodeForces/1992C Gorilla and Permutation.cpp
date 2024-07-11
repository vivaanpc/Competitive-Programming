#include<bits/stdc++.h>
using namespace std;
void disp() {

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long n, m, k, printer = 1;
		cin >> n >> m >> k;
		long long temporary = n;
		while (m < temporary) {
			cout << temporary << " ";
			temporary--;
		} while (m >= printer) {
			cout << printer << " ";
			printer++;
		}
		cout << "\n";
	}
}