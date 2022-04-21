#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int a, b, k;
	cin >> a >> b >> k;
	int ans = 0;
	while (a < b) {
		a *= k;
		ans++;
	}
	cout << ans << endl;
}