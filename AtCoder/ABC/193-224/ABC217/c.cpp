#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int ans[200005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		ans[a - 1] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i];
		i == n - 1 ? cout << endl : cout << ' ';
	}
}