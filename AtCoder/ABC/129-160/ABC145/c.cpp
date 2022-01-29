#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	pair<int, int> c[10];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> c[i].first >> c[i].second;
	vector<int> ord;
	for (int i = 0; i < n; i++) ord.push_back(i);
	double ans = 0;
	do {
		for (int i = 0; i < n - 1; i++) {
			ans += sqrt((c[ord[i]].first - c[ord[i + 1]].first) * (c[ord[i]].first - c[ord[i + 1]].first) +
						(c[ord[i]].second - c[ord[i + 1]].second) * (c[ord[i]].second - c[ord[i + 1]].second));
		}
	} while (next_permutation(ord.begin(), ord.end()));
	int f = 1;
	for (int i = 0; i < n; i++) f *= i + 1;
	ans /= f;
	printf("%.16f\n", ans);
}