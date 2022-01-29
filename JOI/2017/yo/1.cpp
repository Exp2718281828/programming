#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (a > 0)
		cout << e * (b - a) << endl;
	else if (b < 0)
		cout << c * (b - a) << endl;
	else
		cout << -a * c + d + e * b << endl;
}