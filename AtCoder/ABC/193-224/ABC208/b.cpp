#include <bits/stdc++.h>
using namespace std;

int main() {
	int f[11] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
	int p;
	cin >> p;
	int ans = 0;
	for (int i = 10; i > 0; i--) {
		while (p >= f[i]) {
			p -= f[i];
			ans++;
		}
	}
	cout << ans << endl;
}