#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	int q;
	cin >> s >> q;
	while (q--) {
		long long int t, k;
		cin >> t >> k;
		k--;
		long long int l = 0;
		if (t <= 60) {
			l = k / (1LL << t);
			k %= (1LL << t);
		}
		long long int v = s[l] - 'A';
		long long int u = (__builtin_popcountll(k) + t) % 3;
		char c = (u + v) % 3 + 'A';
		cout << c << endl;
	}
}