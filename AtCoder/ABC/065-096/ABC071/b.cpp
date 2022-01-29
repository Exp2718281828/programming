#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	bool c[30] = {};
	cin >> s;
	for (int i = 0; i < s.length(); i++) c[s[i] - 'a'] = true;
	for (int i = 0; i < 26; i++) {
		if (!c[i]) {
			char x;
			x = 'a' + i;
			cout << x << endl;
			return 0;
		}
	}
	cout << "None" << endl;
}