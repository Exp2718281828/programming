#include <bits/stdc++.h>
using namespace std;
using T = tuple<int, int, int>;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x, y, z, k;
	long long int a[1005], b[1005], c[1005];
	cin >> x >> y >> z >> k;
	for (int i = 0; i < x; i++) cin >> a[i];
	for (int i = 0; i < y; i++) cin >> b[i];
	for (int i = 0; i < z; i++) cin >> c[i];
	sort(a, a + x, greater<long long int>());
	sort(b, b + y, greater<long long int>());
	sort(c, c + z, greater<long long int>());
	set<T> m;
	priority_queue<pair<long long int, T>> que;
	m.insert({0, 0, 0});
	que.push({a[0] + b[0] + c[0], {0, 0, 0}});
	for (int i = 0; i < k; i++) {
		auto p = que.top();
		que.pop();
		T q = p.second;
		cout << p.first << endl;
		int X = get<0>(q), Y = get<1>(q), Z = get<2>(q);
		if (X < x - 1 && m.find({X + 1, Y, Z}) == m.end()) {
			m.insert({X + 1, Y, Z});
			que.push({a[X + 1] + b[Y] + c[Z], {X + 1, Y, Z}});
		}
		if (Y < y - 1 && m.find({X, Y + 1, Z}) == m.end()) {
			m.insert({X, Y + 1, Z});
			que.push({a[X] + b[Y + 1] + c[Z], {X, Y + 1, Z}});
		}
		if (Z < z - 1 && m.find({X, Y, Z + 1}) == m.end()) {
			m.insert({X, Y, Z + 1});
			que.push({a[X] + b[Y] + c[Z + 1], {X, Y, Z + 1}});
		}
	}
}