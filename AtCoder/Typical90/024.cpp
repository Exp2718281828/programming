#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int a[1005], b[1005];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	int d = 0;
	for (int i = 0; i < n; i++) d += abs(a[i] - b[i]);
	if (d <= k && (k - d) % 2 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}