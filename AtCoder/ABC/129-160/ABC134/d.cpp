#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[200005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i + 1];
	int b[200005] = {};
	for (int i = n; i > 0; i--) {
		int s = 0;
		for (int j = i; j <= n; j += i) s += b[j];
		s %= 2;
		b[i] = s ^ a[i];
	}
	vector<int> ans;
	for (int i = 0; i < n; i++)
		if (b[i + 1]) ans.push_back(i + 1);
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i];
		i == ans.size() - 1 ? cout << endl : cout << ' ';
	}
}