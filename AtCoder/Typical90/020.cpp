#include <bits/stdc++.h>
using namespace std;

long long intpow(long long int n, int r) {
	long long int ans = 1;
	while (r > 0) {
		if (r & 1) ans *= n;
		n *= n;
		r >>= 1;
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int a, b, c;
	cin >> a >> b >> c;
	if (a < intpow(c, b))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}