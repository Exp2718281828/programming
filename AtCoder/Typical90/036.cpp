#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	pair<long long int, long long int> p[100005];
	cin >> n >> q;
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	for (int i = 0; i < n; i++) {
		int nx = p[i].first - p[i].second;
		int ny = p[i].first + p[i].second;
		p[i] = {nx, ny};
	}
	long long int mx, my, Mx, My;
	mx = Mx = p[0].first, my = My = p[0].second;
	for (int i = 0; i < n; i++) {
		mx = min(mx, p[i].first);
		my = min(my, p[i].second);
		Mx = max(Mx, p[i].first);
		My = max(My, p[i].second);
	}
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		x--;
		cout << max({abs(p[x].first - mx), abs(p[x].first - Mx), abs(p[x].second - my), abs(p[x].second - My)}) << endl;
	}
}