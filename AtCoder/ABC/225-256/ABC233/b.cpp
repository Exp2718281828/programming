#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	int l, r;
	cin >> l >> r >> s;
	char c[100005];
	for (int i = 0; i < s.length(); i++) c[i] = s[i];
	reverse(c + l - 1, c + r);
	for (int i = 0; i < s.length(); i++) cout << c[i];
	cout << endl;
}