#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s, t, u;
	cin >> s >> t >> u;
	string a = {s[0], t[0], u[0]};
	char d = 'A' - 'a';
	a[0] += d;
	a[1] += d;
	a[2] += d;
	cout << a << endl;
}