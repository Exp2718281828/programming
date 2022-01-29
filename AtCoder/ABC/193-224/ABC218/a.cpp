#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	int n;
	cin >> n >> s;
	if (s[n - 1] == 'o')
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}