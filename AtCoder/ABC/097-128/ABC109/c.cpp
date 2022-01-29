#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int x[100005];
	cin >> n;
	for (int i = 0; i < n + 1; i++) cin >> x[i];
	int y[100005];
	for (int i = 0; i < n; i++) y[i] = abs(x[i + 1] - x[i]);
	int r = accumulate(y, y + n, 0, [](int m, int l) { return __gcd(m, l); });
	cout << r << endl;
}