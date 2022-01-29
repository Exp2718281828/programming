#include <bits/stdc++.h>
using namespace std;
vector<int> d[1000005];
bool b[1000005];

int digitsum(long long int n, int d = 10) {
	assert(d > 1);
	int ans = 0;
	while (n > 0) {
		ans += n % d;
		n /= d;
	}
	return ans;
}

void dp(int n) {
	if (b[n]) return;
	b[n] = true;
	for (int x : d[n]) dp(x);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x = i + digitsum(i);
		if (x <= n) d[x].push_back(i);
	}
	dp(n);
	int ans = 0;
	for (int i = 0; i < n; i++)
		if (b[i + 1]) ans++;
	cout << ans << endl;
}