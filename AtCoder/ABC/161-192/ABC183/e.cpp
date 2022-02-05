#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 2005;
char s[N][N];
int dp[N][N] = {};
int sx[N][N] = {}, sy[N][N] = {}, sz[N][N] = {};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) cin >> s[i][j];
	dp[0][0] = 1;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (i == 0 && j == 0) continue;
			if (s[i][j] == '#') continue;
			if (i > 0) sx[i][j] = (sx[i - 1][j] + dp[i - 1][j]) % MOD;
			if (j > 0) sy[i][j] = (sy[i][j - 1] + dp[i][j - 1]) % MOD;
			if (i > 0 && j > 0) sz[i][j] = (sz[i - 1][j - 1] + dp[i - 1][j - 1]) % MOD;
			dp[i][j] = ((long long)sx[i][j] + sy[i][j] + sz[i][j]) % MOD;
		}
	}
	cout << dp[h - 1][w - 1] << endl;
}