#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	int ans = n;
	for (int i = 0; i < n - 1; i++)
		if (s[i] == s[i + 1]) ans--;
	cout << ans << endl;
}