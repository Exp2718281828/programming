#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;
int d[43050000];

long long intpow(long long int n, int r) {
	long long int ans = 1;
	while (r > 0) {
		if (r & 1) ans *= n;
		n *= n;
		r >>= 1;
	}
	return ans;
}

int pton(vector<int> p) {
	assert(p.size() == 8);
	int ans = 0;
	for (int i = 0; i < 8; i++) ans += p[i] * intpow(9, i);
	return ans;
}

vector<int> ntop(int n) {
	vector<int> ans;
	for (int i = 0; i < 8; i++) {
		ans.push_back(n % 9);
		n /= 9;
	}
	return ans;
}

int returnblank(vector<int> p) {
	assert(p.size() == 8);
	int ans = 36;
	for (int i = 0; i < 8; i++) ans -= p[i];
	return ans;
}

int returnplace(vector<int> p, int c) {
	assert(p.size() == 8);
	for (int i = 0; i < 8; i++)
		if (p[i] == c) return i;
	return -1;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int m;
	vector<int> q[10];
	vector<int> p;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		q[u].push_back(v);
		q[v].push_back(u);
	}
	for (int i = 0; i < 8; i++) {
		int x;
		cin >> x;
		x--;
		p.push_back(x);
	}
	int s = pton(p);
	for (int i = 0; i < 43050000; i++) d[i] = INF;
	queue<int> que;
	que.push(s);
	d[s] = 0;
	vector<int> g_p = {0, 1, 2, 3, 4, 5, 6, 7};
	int g_n = pton(g_p);
	while (!que.empty()) {
		if (d[g_n] != INF) break;
		int a_n = que.front();
		que.pop();
		vector<int> a_p = ntop(a_n);
		int b = returnblank(a_p);
		for (int x : q[b]) {
			vector<int> c_p(8);
			copy(a_p.begin(), a_p.end(), c_p.begin());
			c_p[returnplace(a_p, x)] = b;
			int c_n = pton(c_p);
			if (d[c_n] != INF) continue;
			d[c_n] = d[a_n] + 1;
			que.push(c_n);
		}
	}
	if (d[g_n] != INF)
		cout << d[g_n] << endl;
	else
		cout << -1 << endl;
}