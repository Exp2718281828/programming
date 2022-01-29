#include <bits/stdc++.h>
using namespace std;

vector<pair<long long int, long long int>> factorize(long long int N) {
	vector<pair<long long, long long>> res;
	for (long long a = 2; a * a <= N; a++) {
		if (N % a != 0) continue;
		long long ex = 0;
		while (N % a == 0) {
			ex++;
			N /= a;
		}
		res.push_back({a, ex});
	}
	if (N != 1) res.push_back({N, 1});
	return res;
}

int main() {
	int n;
	cin >> n;
	vector<pair<long long int, long long int>> ans = factorize(n);
	for (int i = 0; i < ans.size(); i++) {
		if (ans[i].second != 1)
			cout << ans[i].first << '^' << ans[i].second;
		else
			cout << ans[i].first;
		if (i != ans.size() - 1) cout << " x ";
	}
	cout << endl;
}
