#include <bits/stdc++.h>
using namespace std;
const long long int INF = 1LL << 62;

long long int f(long long int a, long long int b) {
	return a * a * a + a * a * b + a * b * b + b * b * b;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n;
	cin >> n;
	long long int ans = INF;
	for (int i = 0; i <= (int)1e6; i++) {
		if (f(i, 0) >= n) {
			ans = min(ans, f(i, 0));
			break;
		}
		int ok = 1e6, ng = 0;
		while (ok - ng > 1) {
			int mid = (ok + ng) / 2;
			if (f(i, mid) >= n)
				ok = mid;
			else
				ng = mid;
		}
		ans = min(ans, f(i, ok));
	}
	cout << ans << endl;
}