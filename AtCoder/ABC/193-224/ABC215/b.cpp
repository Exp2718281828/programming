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
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n;
	cin >> n;
	for (int i = 0;; i++) {
		if (intpow(2, i) > n) {
			cout << i - 1 << endl;
			return 0;
		}
	}
}