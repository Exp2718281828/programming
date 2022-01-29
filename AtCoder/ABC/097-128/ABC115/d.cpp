#include <bits/stdc++.h>
using namespace std;

long long int l[55];
long long int p[55];

long long int dp(int n, long long int x) {
	if (n == 0) return 1;
	if (x == 1)
		return 0;
	else if (x == l[n])
		return p[n];
	else if (x == l[n - 1] + 2)
		return p[n - 1] + 1;
	else if (x < l[n - 1] + 2)
		return dp(n - 1, x - 1);
	else
		return dp(n - 1, x - (l[n - 1] + 2)) + p[n - 1] + 1;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, x;
	cin >> n >> x;
	l[0] = 1;
	for (int i = 0; i < n; i++) l[i + 1] = 2 * l[i] + 3;
	p[0] = 1;
	for (int i = 0; i < n; i++) p[i + 1] = 2 * p[i] + 1;
	cout << dp(n, x) << endl;
}