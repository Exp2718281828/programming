#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int k;
	cin >> k;
	vector<int> ans;
	while (k > 0) {
		if (k % 2 == 0)
			ans.push_back(0);
		else
			ans.push_back(2);
		k /= 2;
	}
	reverse(ans.begin(), ans.end());
	for (int x : ans) cout << x;
	cout << endl;
}