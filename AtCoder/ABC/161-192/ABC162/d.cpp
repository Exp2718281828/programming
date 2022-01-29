#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	string s;
	cin >> n >> s;
	int r = 0, g = 0, b = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R') r++;
		if (s[i] == 'G') g++;
		if (s[i] == 'B') b++;
	}
	long long int ans = (long long)r * g * b;
	for (int i = 1; i < 2005; i++) {
		for (int j = 0; j + i * 2 < n; j++) {
			char x, y, z;
			x = s[j];
			y = s[j + i];
			z = s[j + 2 * i];
			if (x != y && y != z && z != x) ans--;
		}
	}
	cout << ans << endl;
}