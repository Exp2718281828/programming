#include <bits/stdc++.h>
using namespace std;

bool Issquare(long long int num) {
	if (num < 0) return false;
	double x1 = sqrt(num);
	int x2 = sqrt(num);
	double y = x1 - x2;
	if (y <= 0.000000001 && y >= -0.000000001)
		return true;
	else
		return false;
}

int main() {
	int n, d;
	int x[15][15];
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < d; j++) cin >> x[i][j];
	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int s = 0;
			for (int k = 0; k < d; k++) s += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
			if (Issquare(s)) ans++;
		}
	}
	cout << ans << endl;
}