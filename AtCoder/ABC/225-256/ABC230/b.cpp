#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string t = "oxxoxxoxxoxxoxxoxxoxxoxxoxxoxx";
	string s;
	cin >> s;
	for (int i = 0; i < 15; i++) {
		if (t.substr(i, s.length()) == s) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}