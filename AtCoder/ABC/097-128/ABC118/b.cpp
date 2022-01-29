#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	long long int c[35] = {};
	for (int i = 0; i < n; i++){
		int k;
		cin >> k;
		for (int j = 0; j < k;j++){
			int a;
			cin >> a;
			c[i] += (1 << (a - 1));
		}
	}
	for (int i = 0; i < n - 1; i++) c[0] = c[0] & c[i + 1];
	cout << __builtin_popcount(c[0]) << endl;
}