#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, c, x;
	cin >> a >> b >> c >> x;
	if (x <= a)
		cout << 1 << endl;
	else if (x > b)
		cout << 0 << endl;
	else {
		double ans = (double)c / (b - a);
		printf("%.16f\n", ans);
	}
}