#include <bits/stdc++.h>
using namespace std;

bool Isprime(long long int num) {
	if (num < 2)
		return false;
	else if (num == 2)
		return true;
	else if (num % 2 == 0)
		return false;
	for (int i = 3; i * i <= num; i += 2) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> ans;
	for (int i = 11; i <= 55555; i += 5) {
		if (Isprime(i)) ans.push_back(i);
		if (ans.size() == n) break;
	}
	for (int i = 0; i < n - 1; i++) cout << ans[i] << ' ';
	cout << ans[n - 1] << endl;
}