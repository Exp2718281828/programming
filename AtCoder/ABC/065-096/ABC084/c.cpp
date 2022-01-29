#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int c[505], s[505], f[505];
	cin >> n;
	for (int i = 0; i < n - 1; i++) cin >> c[i] >> s[i] >> f[i];
	for (int i = 0; i < n; i++) {
		int t = 0;
		for (int j = i; j < n - 1; j++) {
			t = (t + f[j] - 1) / f[j] * f[j];
			if (t < s[j]) t = s[j];
			t += c[j];
		}
		cout << t << endl;
	}
}