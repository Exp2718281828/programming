#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, y;
	cin >> n >> y;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; i + j <= n; j++) {
			if (1000 * i + 5000 * j + 10000 * (n - i - j) == y) {
				cout << n - i - j << ' ' << j << ' ' << i << endl;
				return 0;
			}
		}
	}
	cout << "-1 -1 -1" << endl;
}