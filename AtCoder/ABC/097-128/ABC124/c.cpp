#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == (i % 2 == 0 ? '0' : '1')) ans++;
	}
	ans = min(ans, (int)s.length() - ans);
	cout << ans << endl;
}