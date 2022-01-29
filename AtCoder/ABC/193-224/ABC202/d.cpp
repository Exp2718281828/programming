#include <bits/stdc++.h>
using namespace std;

long long int mem[40][40];

void comb(vector<vector<long long int> > &v) {
	for (int i = 0; i < v.size(); i++) {
		v[i][0] = 1;
		v[i][i] = 1;
	}
	for (int k = 1; k < v.size(); k++) {
		for (int j = 1; j < k; j++) {
			v[k][j] = (v[k - 1][j - 1] + v[k - 1][j]);
		}
	}
}

int main() {
	memset(mem, -1, sizeof(mem));
	vector<vector<long long int> > v(63, vector<long long int>(63, 0));
	comb(v);
	long long int a, b, k;
	cin >> a >> b >> k;
	int l = a + b;
	for (int i = 0; i < l; i++) {
		long long int c = v[a + b - 1][b];
		if (c >= k) {
			cout << 'a';
			a--;
		} else {
			k -= c;
			cout << 'b';
			b--;
		}
	}
	cout << endl;
}