#include <bits/stdc++.h>
using namespace std;

template<typename T>
double dist(pair<T, T> p, pair<T, T> q) {
	return sqrt((p.first - q.first) * (p.first - q.first) + (p.second - q.second) * (p.second - q.second));
}

int main() {
	int n;
	pair<int, int> p[105];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	double ans = 0.0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			ans = max(ans, dist(p[i], p[j]));
		}
	}
	printf("%.16f\n", ans);
}