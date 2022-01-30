#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int n = s.length();
	int l = 0, r = n - 1;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == 'a')
			r--;
		else
			break;
	}
	for (int i = 0; i < n - 1 - r; i++) {
		if (s[i] == 'a')
			l++;
		else
			break;
	}
	if (r == 0) {
		cout << "Yes" << endl;
	} else {
		for (int i = l; i <= r; i++) {
			if (s[i] != s[l + r - i]) {
				cout << "No" << endl;
				return 0;
			}
		}
		cout << "Yes" << endl;
	}
}