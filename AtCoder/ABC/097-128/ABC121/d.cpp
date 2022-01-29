#include <bits/stdc++.h>
using namespace std;

long long intpow(long long int n, int r) {
	long long int ans = 1;
	for (int i = 0; i < r; i++) {
		ans *= n;
	}
	return ans;
}

int main() {
	long long int a, b;
	cin >> a >> b;
	long long int ans = 0;
	if (((b + 1) / 2 - a / 2) % 2 == 1) ans++;
	for (int i = 1; i < 40; i++) {
		if (abs(((b % intpow(2, i + 1)) / intpow(2, i)) * (b % intpow(2, i + 1) - intpow(2, i) + 1) -
				(((a - 1) % intpow(2, i + 1)) / intpow(2, i)) * ((a - 1) % intpow(2, i + 1) - intpow(2, i) + 1)) %
				2 ==
			1)
			ans += intpow(2, i);
	}
	cout << ans << endl;
}