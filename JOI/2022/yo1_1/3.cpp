#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	bool c[6] = {};
	string s;
	cin >> n >> s;
	int ans = 0;
	for (int i = 0; i < n; i++) c[s[i] - 'A'] = true;
	for (int i = 0; i < 5; i++)
		if (c[i]) ans++;
	if (ans >= 3)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}