#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[200005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	map<int, int> cnt;
	long long int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += cnt[i - a[i]];
		cnt[i + a[i]]++;
	}
	cout << ans << endl;
}