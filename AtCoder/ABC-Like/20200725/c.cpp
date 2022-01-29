#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int a[200005];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n - k; i++) {
		if (a[i + k] > a[i])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}