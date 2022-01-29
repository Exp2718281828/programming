#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, k;
	pair<int, int> a[200005];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a, a + n);
	long long int ans[200005];
	for (int i = 0; i < n; i++) {
		if (i < k % n) {
			ans[a[i].second] = k / n + 1;
		} else {
			ans[a[i].second] = k / n;
		}
	}
	for (int i = 0; i < n; i++) cout << ans[i] << endl;
}