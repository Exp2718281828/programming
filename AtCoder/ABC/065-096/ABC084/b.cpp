#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	string s;
	cin >> a >> b >> s;
	for (int i = 0; i < a + b + 1; i++) {
		if (i == a) {
			if (s[i] != '-') {
				cout << "No" << endl;
				return 0;
			}
		} else {
			if (s[i] < '0' || s[i] > '9') {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
}