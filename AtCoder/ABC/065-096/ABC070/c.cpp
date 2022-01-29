#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int x, long long int y) {
	if (x % y == 0) {
		return y;
	} else {
		return gcd(y, x % y);
	}
}

long long int lcm(long long int x, long long int y) {
	return x / gcd(x, y) * y;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	long long int t[105];
	for (int i = 0; i < n; i++) cin >> t[i];
	cout << accumulate(t, t + n, 1LL, [](long long int x, long long int y) { return lcm(x, y); }) << endl;
}