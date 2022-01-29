#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	if (x * y < a + b + c) {
		cout << "No" << endl;
		return 0;
	}
	int ans = false;
	int ya;
	int xb;
	int yb;
	ya = (a + x - 1) / x;
	if (y != ya) {
		xb = (b + (y - ya) - 1) / (y - ya);
		if ((y - ya) * (x - xb) >= c) ans = true;
	}
	swap(a, b);
	ya = (a + x - 1) / x;
	if (y != ya) {
		xb = (b + (y - ya) - 1) / (y - ya);
		if ((y - ya) * (x - xb) >= c) ans = true;
	}
	swap(a, c);
	ya = (a + x - 1) / x;
	if (y != ya) {
		xb = (b + (y - ya) - 1) / (y - ya);
		if ((y - ya) * (x - xb) >= c) ans = true;
	}
	ya = (a + x - 1) / x;
	yb = (b + x - 1) / x;
	if (x * (y - ya - yb) >= c) ans = true;
	swap(x, y);
	ya = (a + x - 1) / x;
	if (y != ya) {
		xb = (b + (y - ya) - 1) / (y - ya);
		if ((y - ya) * (x - xb) >= c) ans = true;
	}
	swap(a, b);
	ya = (a + x - 1) / x;
	if (y != ya) {
		xb = (b + (y - ya) - 1) / (y - ya);
		if ((y - ya) * (x - xb) >= c) ans = true;
	}
	swap(a, c);
	ya = (a + x - 1) / x;
	if (y != ya) {
		xb = (b + (y - ya) - 1) / (y - ya);
		if ((y - ya) * (x - xb) >= c) ans = true;
	}
	ya = (a + x - 1) / x;
	yb = (b + x - 1) / x;
	if (x * (y - ya - yb) >= c) ans = true;
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}