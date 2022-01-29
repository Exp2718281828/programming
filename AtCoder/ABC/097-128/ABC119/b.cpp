#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	double ans = 0.0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double x;
		string u;
		cin >> x >> u;
		if (u == "JPY")
			ans += x;
		else
			ans += x * 380000;
	}
	printf("%.16f\n", ans);
}