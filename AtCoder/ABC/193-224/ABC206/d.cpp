#include <bits/stdc++.h>
using namespace std;

vector<bool> seen;
const int N = 200005;

void dfs(const vector<vector<int>>& g, int v) {
	seen[v] = true;
	for (auto next_v : g[v]) {
		if (seen[next_v]) continue;
		dfs(g, next_v);
	}
}
int main() {
	int n;
	int a[200005];
	cin >> n;
	vector<vector<int>> g(N);
	for (int i = 0; i < n; i++) cin >> a[i];
	if (n % 2 == 0) {
		for (int i = 0; i < n / 2; i++) {
			g[a[i]].push_back(a[n - i - 1]);
			g[a[n - i - 1]].push_back(a[i]);
		}
	} else {
		for (int i = 0; i < n / 2 + 1; i++) {
			g[a[i]].push_back(a[n - i - 1]);
			g[a[n - i - 1]].push_back(a[i]);
		}
	}
	int count = 0;
	seen.assign(N, false);
	for (int v = 0; v < N; v++) {
		if (seen[v]) continue;
		dfs(g, v);
		count++;
	}
	cout << N - count << endl;
}