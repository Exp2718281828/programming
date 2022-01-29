#include <bits/stdc++.h>
using namespace std;

int digitsum(long long int n, int d = 10) {
	assert(d > 1);
	int ans = 0;
	while (n > 0) {
		ans += n % d;
		n /= d;
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	bool ans = n % digitsum(n) == 0;
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}