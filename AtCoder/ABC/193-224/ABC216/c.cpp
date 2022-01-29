#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	unsigned long long int n = 0;
	cin >> n;
	int k = 60;
	for (int i = 0; i < k; i++) {
		cout << 'B';
		if (n & (1LL << (k - 1 - i))) cout << 'A';
	}
	cout << endl;
}