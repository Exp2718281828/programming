#include <bits/stdc++.h>
using namespace std;

int n;
int n2;
string s;
vector<pair<char, int>> t;
const int MOD = 998244353;
int mem[1000][1028][11];

long long intpow(long long int n, int r) {
	long long int ans = 1;
	for (int i = 0; i < r; i++) {
		ans *= n;
		ans %= MOD;
	}
	return ans % MOD;
}

int dp(int m, int c, int l) {
	if (mem[m][c][l] != -1) return mem[m][c][l];
	long long int k = intpow(2, t[m].second) - 1;
	long long int ans = k;
	if (c & (1 << (t[m].first - 'A'))) {
		if (t[m].first - 'A' != l) {
			ans = 0;
			goto RETURN;
		}
	} else {
		c += (1 << (t[m].first - 'A'));
	}

	for (int i = m + 1; i < n2; i++) {
		ans += k * dp(i, c, t[m].first - 'A');
		ans %= MOD;
	}
RETURN:
	ans %= MOD;
	mem[m][c][l] = ans;
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> s;
	char x = s[0];
	int y = 1;
	for (int i = 1; i < n; i++) {
		if (x != s[i]) {
			t.push_back(make_pair(x, y));
			x = s[i];
			y = 1;
		} else {
			y++;
		}
	}
	t.push_back(make_pair(x, y));
	n2 = t.size();
	memset(mem, -1, sizeof(mem));
	long long int ans = 0;
	for (int i = 0; i < n2; i++) {
		ans += dp(i, 0, 10);
		ans %= MOD;
	}
	cout << ans << endl;
}