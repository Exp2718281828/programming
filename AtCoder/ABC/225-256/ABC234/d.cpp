#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	set<int> p;
	for (int i = 0; i < k; i++) {
		int q;
		cin >> q;
		p.insert(q);
	}
	auto it = p.begin();
	int ans = *it;
	cout << ans << endl;
	for (int i = 0; i < n - k; i++) {
		int q;
		cin >> q;
		p.insert(q);
		if (q > ans) {
			it++;
			ans = *it;
		}
		cout << ans << endl;
	}
}