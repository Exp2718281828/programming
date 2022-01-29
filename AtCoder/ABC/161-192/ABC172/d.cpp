#include <bits/stdc++.h>
using namespace std;

int f[10000005] = {};
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i) f[j]++;
	}
	long long int ans = 0;
	for (int i = 1; i <= n; i++) ans += (long long)i * f[i];
	cout << ans << endl;
}