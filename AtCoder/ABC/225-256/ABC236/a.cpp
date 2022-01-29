#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	int a, b;
	cin >> s >> a >> b;
	a--, b--;
	for (int i = 0; i < s.length(); i++) {
		if (i == a)
			cout << s[b];
		else if (i == b)
			cout << s[a];
		else
			cout << s[i];
	}
	cout << endl;
}