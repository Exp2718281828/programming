#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, a, b, p, q, r, s;
	cin >> n >> a >> b >> p >> q >> r >> s;
	for (long long int i = p; i <= q; i++) {
		for (long long int j = r; j <= s; j++) {
			if (a - b == i - j || a + b == i + j)
				cout << '#';
			else
				cout << '.';
		}
		cout << endl;
	}
}