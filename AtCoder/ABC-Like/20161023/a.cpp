#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool c = false, f = false;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'C') c = true;
		if (s[i] == 'F' && c) f = true;
	}
	if (c && f)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}