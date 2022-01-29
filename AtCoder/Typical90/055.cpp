#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int ans = 0;
	int n, p, q;
	long long int a[105];
	cin >> n >> p >> q;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				for (int l = k + 1; l < n; l++) {
					for (int m = l + 1; m < n; m++) {
						if (a[i] % p * a[j] % p * a[k] % p * a[l] % p * a[m] % p == q) ans++;
					}
				}
			}
		}
	}
	cout << ans << endl;
}