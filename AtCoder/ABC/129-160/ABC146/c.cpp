#include <bits/stdc++.h>
using namespace std;

long long int MAX = 1e9;
int digitnum(long long int n, int d = 10) {
	assert(d > 1);
	int ans = 0;
	if (n == 0) return 0;
	while (1) {
		n /= d;
		ans++;
		if (n == 0) return ans;
	}
}

int main() {
	long long int a, b, x;
	cin >> a >> b >> x;
	long long int ok = 0, ng = 1 << 30;
	while (ng - ok > 1) {
		long long int mid = (ng + ok) / 2;
		if (a * mid + b * digitnum(mid) <= x)
			ok = mid;
		else
			ng = mid;
	}
	ok = min(MAX, ok);
	cout << ok << endl;
}