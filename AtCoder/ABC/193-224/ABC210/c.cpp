#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	int c[300005];
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> c[i];
	int ans = 0;
	map<int, int> d;
	for (int i = 0; i < k; i++) {
		d[c[i]]++;
	}
	ans = d.size();
	int a = ans;
	for (int i = 1; i < n - k + 1; i++) {
		d[c[i - 1]]--;
		if (d[c[i - 1]] == 0) a--;
		d[c[i + k - 1]]++;
		if (d[c[i + k - 1]] == 1) a++;
		ans = max(a, ans);
	}
	cout << ans << endl;
}