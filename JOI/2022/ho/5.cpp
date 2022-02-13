#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	assert(h == 1);
	pair<int, int> a[50005];
	int b[50005];
	for (int i = 0; i < w; i++) {
		int x;
		cin >> x;
		a[i] = {x, i};
		b[i] = x;
	}
	sort(a, a + w);
	int ans[50005];
	fill(ans, ans + w, 1);
	for (int i = 0; i < w; i++) {
		int u = a[i].second;
		if (u > 0 && b[u - 1] < b[u]) ans[u] += ans[u - 1];
		if (u < w - 1 && b[u + 1] < b[u]) ans[u] += ans[u + 1];
	}
	long long int s = 0;
	for (int i = 0; i < w; i++) s += ans[i];
	cout << s << endl;
}