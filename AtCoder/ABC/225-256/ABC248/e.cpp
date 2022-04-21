#include <bits/stdc++.h>
using namespace std;

struct coordinate {
	long long int x, y;
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	coordinate p[305];
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		p[i] = {a, b};
	}
	if (k == 1) {
		cout << "Infinity" << endl;
		return 0;
	}
	long long int ans[305] = {};
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int c = 0;
			for (int l = 0; l < n; l++) {
				if (l == i || l == j) continue;
				if ((p[j].x - p[i].x) * (p[l].y - p[i].y) == (p[j].y - p[i].y) * (p[l].x - p[i].x)) c++;
			}
			ans[c + 2]++;
		}
	}
	long long int Ans = 0;
	for (int i = k; i <= n; i++) {
		Ans += ans[i] / (i * (i - 1) / 2);
	}
	cout << Ans << endl;
}