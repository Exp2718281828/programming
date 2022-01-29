#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long int l[2005], r[2005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		long long int a, b;
		cin >> a >> b;
		switch (t) {
			case 1:
				l[i] = a * 10;
				r[i] = b * 10;
				break;
			case 2:
				l[i] = a * 10;
				r[i] = b * 10 - 1;
				break;
			case 3:
				l[i] = a * 10 + 1;
				r[i] = b * 10;
				break;
			case 4:
				l[i] = a * 10 + 1;
				r[i] = b * 10 - 1;
				break;
		}
	}
	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (!(l[i] > r[j] || r[i] < l[j])) ans++;
		}
	}
	cout << ans << endl;
}