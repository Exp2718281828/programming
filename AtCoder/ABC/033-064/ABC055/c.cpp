#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, m;
	cin >> n >> m;
	long long int ans = 0;
	ans = min(n, m / 2);
	n -= ans;
	m -= ans * 2;
	ans += m / 4;
	cout << ans << endl;
}