#include <bits/stdc++.h>
using namespace std;

int digitsum(long long int n, int d = 10) {
	assert(d > 1);
	int ans = 0;
	while (n > 0) {
		ans += n % d;
		n /= d;
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x;
	cin >> x;
	cout << 111 * digitsum(x) << endl;
}