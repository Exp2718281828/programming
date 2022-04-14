#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	vector<char> c;
	for (int i = 0; i < s.length(); i++) c.push_back(s[i]);
	sort(c.begin(), c.end());
	for (auto x : c) cout << x;
	cout << endl;
}