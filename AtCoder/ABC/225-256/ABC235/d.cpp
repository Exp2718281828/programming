#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;
int d[1000006];

int r(int n) {
	if (n < 10 || n % 10 == 0) return -1;
	string s = to_string(n);
	char t = s[s.length() - 1];
	string u = s.substr(0, s.length() - 1);
	string m = t + u;
	int a = stoi(m);
	return a;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, n;
	cin >> a >> n;
	fill(d, d + 1000006, INF);
	queue<int> que;
	que.push(1);
	d[1] = 0;
	while (!que.empty()) {
		int m = que.front();
		que.pop();
		int k = r(m);
		if (k != -1 && d[k] == INF) {
			que.push(k);
			d[k] = d[m] + 1;
		}
		if ((long long)a * m < 1000000 && d[a * m] == INF) {
			que.push(a * m);
			d[a * m] = d[m] + 1;
		}
	}
	if (d[n] == INF)
		cout << -1 << endl;
	else
		cout << d[n] << endl;
}