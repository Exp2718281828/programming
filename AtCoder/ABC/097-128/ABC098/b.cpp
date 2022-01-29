#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	string s;
	int ans = 0;
	cin >> n >> s;
	for (int i = 0; i < n - 1; i++) {
		bool k[30] = {};
		int c = 0;
		for (int j = 0; j < i + 1; j++) {
			k[s[j] - 'a'] = true;
		}
		for (int j = i + 1; j < n; j++) {
			if (k[s[j] - 'a']) {
				c++;
				k[s[j] - 'a'] = false;
			}
		}
		ans = max(ans, c);
	}
	cout << ans << endl;
}