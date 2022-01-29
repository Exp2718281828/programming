#include <bits/stdc++.h>
using namespace std;

long long int cpow(int n) {
	if (n == -1)
		return 1;
	else
		return pow(2, n);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	long long int ans = 0;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		int m = s[i] - '0';
		long long int k = 0;
		for (int j = 0; j < n; j++) {
			if (i + j < n) {
				k += cpow(n - j - 2) * pow(10, j);
			} else {
				k += cpow(n - j - 2) * pow(10, n - i - 1);
			}
		}
		k *= m;
		ans += k;
	}
	cout << ans << endl;
}