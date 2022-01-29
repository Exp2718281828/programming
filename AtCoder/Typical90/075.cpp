#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n;
	cin >> n;
	int m = 0;
	for (long long int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			m++;
			n /= i;
		}
	}
	if (n != 1) m++;
	cout << ceil(log2(m)) << endl;
}