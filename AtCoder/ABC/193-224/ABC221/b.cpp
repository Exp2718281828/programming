#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s, t;
	vector<int> c;
	cin >> s >> t;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != t[i]) c.push_back(i);
	}
	if (c.size() == 0 || (c.size() == 2 && c[1] - c[0] == 1 && s[c[0]] == t[c[1]] && s[c[1]] == t[c[0]]))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}