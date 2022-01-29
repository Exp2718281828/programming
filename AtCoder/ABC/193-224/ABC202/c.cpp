#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a[100005] = {}, b[100005], c[100005] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[x]++;
	}
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		c[x]++;
	}
	long long int ans = 0;
	for (int i = 0; i < n; i++) ans += (long long)a[b[i]] * c[i + 1];
	cout << ans << endl;
}