#include <bits/stdc++.h>
using namespace std;

vector<int> vs;
vector<bool> used;
vector<vector<int>> q, r;

void dfs(int v) {
	used[v] = true;
	for (int x : q[v]) {
		if (!used[x]) dfs(x);
	}
	vs.push_back(v);
}

vector<int> rdfs(int v) {
	vector<int> ans = {v};
	used[v] = true;
	for (int x : r[v]) {
		if (!used[x]) {
			vector<int> a = rdfs(x);
			ans.insert(ans.end(), a.begin(), a.end());
		}
	}
	return ans;
}

vector<vector<int>> scc() {
	int n = q.size();
	r.resize(n);
	for (int i = 0; i < n; i++) {
		for (int x : q[i]) r[x].push_back(i);
	}
	used.resize(n);
	for (int i = 0; i < n; i++) {
		if (!used[i]) dfs(i);
	}
	used.clear(), used.resize(n);
	reverse(vs.begin(), vs.end());
	vector<vector<int>> ans;
	for (int x : vs) {
		if (!used[x]) ans.push_back(rdfs(x));
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	q.resize(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		q[a].push_back(b);
	}
	vector<vector<int>> y = scc();
	long long int ans = 0;
	for (auto x : y) {
		long long int s = x.size();
		ans += s * (s - 1) / 2;
	}
	cout << ans << endl;
}