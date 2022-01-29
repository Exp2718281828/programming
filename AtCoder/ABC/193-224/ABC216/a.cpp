#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	if (s.length() == 3) {
		if (s[2] - '0' <= 2)
			cout << s[0] << '-' << endl;
		else if (s[2] - '0' >= 7)
			cout << s[0] << '+' << endl;
		else
			cout << s[0] << endl;
	}
	if (s.length() == 4) {
		if (s[3] - '0' <= 2)
			cout << s[0] << s[1] << '-' << endl;
		else if (s[3] - '0' >= 7)
			cout << s[0] << s[1] << '+' << endl;
		else
			cout << s[0] << s[1] << endl;
	}
}