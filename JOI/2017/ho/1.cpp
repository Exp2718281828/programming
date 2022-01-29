#include <bits/stdc++.h>
using namespace std;

int main() {
	// cin.tie(0);
	// ios::sync_with_stdio(false);
	int n, q, s, t;
	cin >> n >> q >> s >> t;
	long long int ans = 0;
	long long int h[200005]; 
	long long int x = 0, y;
	for (int i = 0; i < n + 1; i++) {
		cin >> y;
		if (i == 0) continue;
		h[i - 1] = y - x;
		x = y;
		ans -= (h[i - 1] > 0 ? s : t) * h[i - 1];
	}
	for (int i = 0; i < q; i++) {
		int l, r, x;
		cin >> l >> r >> x;
		long long int h0 = h[l - 1];
		long long int h1 = h0 + x;
		if (h0 > 0 && h1 > 0)
			ans += s * (h0 - h1);
		else if (h0 > 0 && h1 <= 0)
			ans += s * h0 - t * h1;
		else if (h0 <= 0 && h1 > 0)
			ans += -s * h1 + t * h0;
		else
			ans += t * (h0 - h1);
		h[l - 1] = h1;
		if (r != n) {
			h0 = h[r];
			h1 = h0 - x;
			if (h0 > 0 && h1 > 0)
				ans += s * (h0 - h1);
			else if (h0 > 0 && h1 <= 0)
				ans += s * h0 - t * h1;
			else if (h0 <= 0 && h1 > 0)
				ans += -s * h1 + t * h0;
			else
				ans += t * (h0 - h1);
			h[r] = h1;
		}
		cout << ans << endl;
	}
}