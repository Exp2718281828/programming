#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n;
	vector<int> ans;
	cin >> n;
	for (int i = 0;; i++) {
		if (abs(n) % (long long int)pow(2, i + 1) == 0) {
			ans.push_back(0);
		} else {
			ans.push_back(1);
			n -= (long long int)pow(-2, i);
		}
		if (n == 0) break;
	}
	reverse(ans.begin(), ans.end());
	for (int x : ans) cout << x;
	cout << endl;
}