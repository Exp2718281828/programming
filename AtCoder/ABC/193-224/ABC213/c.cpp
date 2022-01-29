#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w, n;
	cin >> h >> w >> n;
	pair<int, int> a[100005], b[100005];
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		a[i] = make_pair(x, i);
		b[i] = make_pair(y, i);
	}
	sort(a, a + n);
	sort(b, b + n);
	pair<int, int> ans[100005];
	ans[a[0].second].first = 1;
	for (int i = 1; i < n; i++) {
		if (a[i].first == a[i - 1].first)
			ans[a[i].second].first = ans[a[i - 1].second].first;
		else
			ans[a[i].second].first = ans[a[i - 1].second].first + 1;
	}
	ans[b[0].second].second = 1;
	for (int i = 1; i < n; i++) {
		if (b[i].first == b[i - 1].first)
			ans[b[i].second].second = ans[b[i - 1].second].second;
		else
			ans[b[i].second].second = ans[b[i - 1].second].second + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i].first << ' ' << ans[i].second << endl;
	}
}