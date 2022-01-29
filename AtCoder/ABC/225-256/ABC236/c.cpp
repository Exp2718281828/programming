#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	string s[100005], t[100005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> s[i];
	for (int i = 0; i < m; i++) cin >> t[i];
	string ks = s[0];
	int ki = 0;
	for (int i = 0; i < n; i++) {
		if (ks == s[i]) {
			cout << "Yes" << endl;
			ki++;
			ks = t[ki];
		} else {
			cout << "No" << endl;
		}
	}
}