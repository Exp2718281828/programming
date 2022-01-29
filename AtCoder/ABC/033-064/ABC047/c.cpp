#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.length() - 1; i++)
		if (s[i] != s[i + 1]) ans++;
	cout << ans << endl;
}