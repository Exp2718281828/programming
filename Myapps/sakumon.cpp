#include <bits/stdc++.h>
using namespace std;

bool Isprime(long long int num) {
	if (num < 2)
		return false;
	else if (num == 2)
		return true;
	else if (num % 2 == 0)
		return false;
	double sqrtNum = sqrt(num);
	for (int i = 3; i <= sqrtNum; i += 2) {
		if (num % i == 0) return false;
	}
	return true;
}

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
	for (int i = 50; i < 1000; i++) {
		if (!Isprime(i)) continue;
		if (divisors(i - 1).size() == 4) {
			cout << i << endl;
			// return 0;
		}
	}
}