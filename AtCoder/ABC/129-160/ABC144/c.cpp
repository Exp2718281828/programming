#include <bits/stdc++.h>
using namespace std;

const long long int INF = (long long)1 << 60;
int main() {
	long long int n;
	cin >> n;
	long long int ans = INF;
	for (int i = 1; i < 1000002; i++) {
		if (n % i == 0) ans = min(ans, i + n / i - 2);
	}
	cout << ans << endl;
}