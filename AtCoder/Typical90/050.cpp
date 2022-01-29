#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int n, l;

int mem[100005];

int fib(int m) {
	if (mem[m] > 0) return mem[m];
	int ans;
	if (m == 0)
		ans = 1;
	else if (m < l)
		ans = fib(m - 1);
	else
		ans = (fib(m - l) + fib(m - 1)) % MOD;
	mem[m] = ans;
	return ans;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> l;
	cout << fib(n) << endl;
}