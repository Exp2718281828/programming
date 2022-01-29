#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	string a[4] = {"maerd", "remaerd", "esare", "resare"};
	int p = 0;
	while (p < s.length()) {
		bool f = false;
		for (int i = 0; i < 4; i++) {
			if (a[i].length() <= s.length() - p && a[i] == s.substr(p, a[i].length())) {
				p += a[i].length();
				f = true;
				break;
			}
		}
		if (!f) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}