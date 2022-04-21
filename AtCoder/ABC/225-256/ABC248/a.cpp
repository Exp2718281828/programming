#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	bool c[10] = {};
	for (int i = 0; i < 9; i++) c[s[i] - '0'] = true;
	for (int i = 0; i < 10; i++)
		if (!c[i]) cout << i << endl;
}