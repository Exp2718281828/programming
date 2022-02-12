#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int ansa = 0, ansb = 0;
	while (n--) {
		long long int a, b;
		cin >> a >> b;
		if (a > b) ansa++;
		if (a < b) ansb++;
	}
	cout << ansa << ' ' << ansb << endl;
}