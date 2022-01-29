#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int x;
	vector<long long int> d;
	cin >> x;
	for (int i = 0; i < 10; i++) d.push_back(i);
	for (int i = 2; i <= 18; i++) {
		for (int b = 1; b <= 9; b++) {
			for (int c = -9; c <= 9; c++) {
				int m = b;
				vector<int> y;
				long long int z = 0;
				for (int j = 0; j < i; j++) {
					if (m < 0 || m > 9) goto EXIT;
					y.push_back(m);
					m += c;
				}
				for (int j = 0; j < i; j++) {
					z += y[j] * (long long)pow(10, i - j - 1);
				}
				d.push_back(z);
			EXIT:;
			}
		}
	}
	sort(d.begin(), d.end());
	for (long long int y : d) {
		if (y >= x) {
			cout << y << endl;
			return 0;
		}
	}
}