#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string x;
	cin >> x;
	int ans[500005];
	long long int t = 0;
	int e;
	int s[500005] = {};
	for (int i = 0; i < x.length(); i++) s[i + 1] = s[i] + (x[i] - '0');
	for (int i = 0;; i++) {
		t += s[max(0, (int)x.length() - i)];
		ans[i] = t % 10;
		t /= 10;
		if (i >= x.length() - 1 && t == 0) {
			e = i;
			break;
		}
	}
	for (int i = e; i >= 0; i--) cout << ans[i];
	cout << endl;
}