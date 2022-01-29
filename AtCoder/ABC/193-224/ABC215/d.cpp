#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> d;
int n, m;
bool p[100005];

void divisors(long long n) {
	for (long long i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			if (!p[i] && i != 1) {
				int j = 2;
				while (j * i <= m) {
					p[j * i] = true;
					j++;
				}
			}
			// d.push(i);
			p[i] = true;
			if (n / i != i) {
				// d.push(n / i);
				if (!p[n / i]) {
					int j = 2;
					while (j * (n / i) <= m) {
						p[j * (n / i)] = true;
						j++;
					}
				}
				p[n / i] = true;
			}
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		divisors(a);
	}
	p[1] = false;
	int ans = 0;
	for (int i = 1; i <= m; i++)
		if (!p[i]) ans++;
	cout << ans << endl;
	for (int i = 1; i <= m; i++)
		if (!p[i]) cout << i << endl;
}