#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int h[100005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> h[i];
	for (int i = 0; i < n - 1; i++) {
		if (h[i] >= h[i + 1]) {
			cout << h[i] << endl;
			return 0;
		}
	}
	cout << h[n - 1] << endl;
}