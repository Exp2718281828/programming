#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int ctoi(char c) {
	if (c >= 'Z')
		return c - 'A' + 26;
	else
		return c - 'a';
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	long long int ans = 1;
	vector<int> m;
	int i = 0;
	while (1) {
		if (i == n) break;
		if (i == n - 1) {
			m.push_back(1);
			break;
		}
		if (s[i] == s[i + 1]) {
			m.push_back(2);
			i += 2;
		} else {
			m.push_back(1);
			i++;
		}
	}
	if (m[0] == 1)
		ans = 3;
	else
		ans = 6;
	for (int j = 0; j < m.size() - 1; j++) {
		if (m[j] == 1 && m[j + 1] == 1) ans *= 2;
		if (m[j] == 1 && m[j + 1] == 2) ans *= 2;
		if (m[j] == 2 && m[j + 1] == 1) ans *= 1;
		if (m[j] == 2 && m[j + 1] == 2) ans *= 3;
		ans %= MOD;
	}
	cout << ans << endl;
}