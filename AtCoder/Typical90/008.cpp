#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const string a = "atcoder";
int n;
string s;
int mem[100005][8];

int dp(int m, int l) {
	if (mem[m][l] != -1) return mem[m][l];
	int ans = 0;
	if (m > 0)
		ans += dp(m - 1, l);
	else {
		if (l == 0) ans += 1;
	}
	if (m > 0 && l > 0 && a[l - 1] == s[m - 1]) ans += dp(m - 1, l - 1);
	ans %= MOD;
	mem[m][l] = ans;
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	memset(mem, -1, sizeof(mem));
	cin >> n >> s;
	cout << dp(n, 7) << endl;
}