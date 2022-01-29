#include <bits/stdc++.h>
using namespace std;

bool Isprime(long long int num) {
	if (num < 2)
		return false;
	else if (num == 2)
		return true;
	else if (num % 2 == 0)
		return false;
	for (int i = 3; i * i <= num; i += 2) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int s[100005] = {};
	for (int i = 0; i <= (int)1e5; i++) {
		if (i % 2 == 1 && Isprime(i) && Isprime((i + 1) / 2))
			s[i + 1] = s[i] + 1;
		else
			s[i + 1] = s[i];
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		cout << s[r + 1] - s[l] << endl;
	}
}