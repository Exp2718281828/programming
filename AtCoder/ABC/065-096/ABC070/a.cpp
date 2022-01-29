#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	bool ans = s[0] == s[2];
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}