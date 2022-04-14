#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	string s[105], t[105];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i] >> t[i];
	for (int i = 0; i < n; i++) {
		bool sok = true, tok = true;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (s[i] == s[j] || s[i] == t[j]) {
				sok = false;
			}
			if (t[i] == s[j] || t[i] == t[j]) {
				tok = false;
			}
		}
		if (!sok && !tok) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}