#include <bits/stdc++.h>
using namespace std;

int main() {
	// cin.tie(0);
	// ios::sync_with_stdio(false);
	int n;
	vector<pair<int, int>> q[100005];
	vector<tuple<int, int, int>> r;
	long long int ans = 0;
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		q[u - 1].push_back(make_pair(v - 1, w));
		q[v - 1].push_back(make_pair(u - 1, w));
		r.push_back(make_tuple(u - 1, v - 1, w));
	}
	for (int i = 0; i < n - 1; i++) {
		ans += get<2>(r[i]);
		int seen[100005] = {};
		int s = get<0>(r[i]);
		seen[s] = true;
		queue<int> que;
		que.push(s);
		while (!que.empty()) {
			int v = que.front();
			seen[v] = true;
			que.pop();
			for (int j = 0; j < q[v].size(); j++) {
				if (q[v][j].first == get<1>(r[i])) continue;
				if (q[v][j].second > get<2>(r[i])) continue;
				if (q[v][j].second == get<2>(r[i]) && s > q[v][j].first) continue;
				if (seen[q[v][j].first]) continue;
				ans += get<2>(r[i]);
				// cout << '!' << get<2>(r[i]) << endl;
				que.push(q[v][j].first);
			}
		}
		for (int i = 0; i < n; i++) seen[i] = false;
		s = get<1>(r[i]);
		que.push(s);
		while (!que.empty()) {
			int v = que.front();
			seen[v] = true;
			que.pop();
			for (int j = 0; j < q[v].size(); j++) {
				if (q[v][j].first == get<0>(r[i])) continue;
				if (q[v][j].second > get<2>(r[i])) continue;
				if (q[v][j].second == get<2>(r[i]) && s > q[v][j].first) continue;
				if (seen[q[v][j].first]) continue;
				ans += get<2>(r[i]);
				// cout << '?' << get<2>(r[i]) << endl;
				que.push(q[v][j].first);
			}
		}
	}
	cout << ans << endl;
}