#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[200005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int c = 0;
	for (int i = 0; i < n; i++) c ^= a[i];
	for (int i = 0; i < n; i++) {
		cout << (a[i] ^ c);
		i == n - 1 ? cout << endl : cout << ' ';
	}
}