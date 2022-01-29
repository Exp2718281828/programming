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
	string n;
	int k;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		long long int m = 0;
		for (int j = 0; j < n.length(); j++) {
			m += intpow(8, j) * (n[n.length() - j - 1] - '0');
		}
		string l = "";
		do {
			int x = m % 9;
			m /= 9;
			l = (char)(x + '0') + l;
		} while (m > 0);
		for (int j = 0; j < l.length(); j++) {
			if (l[j] == '8') l[j] = '5';
		}
		n = l;
	}
	cout << n << endl;
}