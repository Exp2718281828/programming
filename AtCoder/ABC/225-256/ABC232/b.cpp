#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s, t;
	cin >> s >> t;
	for (int i = 0; i < s.length() - 1; i++) {
		if ((s[i + 1] - s[i] + 26) % 26 != (t[i + 1] - t[i] + 26) % 26) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}