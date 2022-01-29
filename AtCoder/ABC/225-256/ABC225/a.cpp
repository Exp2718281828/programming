#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	char c[3];
	cin >> c[0] >> c[1] >> c[2];
	sort(c, c + 3);
	if (c[0] == c[1] && c[1] == c[2])
		cout << 1 << endl;
	else if (c[0] == c[1] || c[1] == c[2])
		cout << 3 << endl;
	else
		cout << 6 << endl;
}