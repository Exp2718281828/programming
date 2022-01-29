#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, c, k;
	cin >> a >> b >> c >> k;
	int x = 0;
	while (a >= b) {
		b *= 2;
		x++;
	}
	while (b >= c) {
		c *= 2;
		x++;
	}
	if (x <= k)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}