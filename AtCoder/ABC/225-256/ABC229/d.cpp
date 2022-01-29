#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	int k;
	cin >> s >> k;
	int l = 0, r = 0;
	int ans = 0;
	int c = 0;
	int u = 0;
	while (r < s.length()) {
		if (s[r] == 'X') {
			r++;
			c++;
			ans = max(ans, c);
		} else {
			if (u < k) {
				r++;
				c++;
				u++;
				ans = max(ans, c);
			} else {
				if (s[l] == '.') u--;
				l++;
				c--;
			}
		}
	}
	cout << ans << endl;
}