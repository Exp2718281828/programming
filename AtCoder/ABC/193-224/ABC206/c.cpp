#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m[a]++;
	}
	long long int ans = (long long)n * (n - 1) / 2;
	for (const auto& [key, value] : m) {
		ans -= (long long)value * (value - 1) / 2;
	}
	cout << ans << endl;
}