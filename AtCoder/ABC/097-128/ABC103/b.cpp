#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s, t;
	cin >> s >> t;
	s += s;
	for (int i = 0; i < t.length(); i++) {
		for (int j = 0; j < t.length(); j++) {
			if (t[j] != s[i + j]) goto EXIT;
		}
		cout << "Yes" << endl;
		return 0;
	EXIT:;
	}
	cout << "No" << endl;
}