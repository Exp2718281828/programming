#include <bits/stdc++.h>
using namespace std;

vector<long long> divisors(long long n) {
	vector<long long> res;
	for (long long i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			res.push_back(i);
			if (n / i != i) res.push_back(n / i);
		}
	}
	sort(res.begin(), res.end());
	return res;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, k;
	cin >> a >> b >> k;
	int g = __gcd(a, b);
	vector<long long int> x = divisors(g);
	reverse(x.begin(), x.end());
	cout << x[k - 1] << endl;
}