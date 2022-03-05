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
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int i = a; i <= b; i++) {
		for (int j = c; j <= d; j++) {
			if (Isprime(i + j)) goto EXIT;
		}
		cout << "Takahashi" << endl;
		return 0;
	EXIT:;
	}
	cout << "Aoki" << endl;
}