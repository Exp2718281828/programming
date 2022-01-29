#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[100005];
	cin >> n;
	fill(a, a + n, 4);
	for (int i = 0; i < 4 * n - 1; i++) {
		int b;
		cin >> b;
		a[b - 1]--;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 1) cout << i + 1 << endl;
	}
}