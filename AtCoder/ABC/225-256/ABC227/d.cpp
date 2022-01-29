#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	priority_queue<long long int, vector<long long int>, less<long long int>> a;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		long long int x;
		cin >> x;
		a.push(x);
	}
	priority_queue<long long int, vector<long long int>, greater<long long int>> s;
	for (int i = 0; i < k; i++) s.push(0);
	for (int i = 0; i < n; i++) {
		long long int y;
		y = s.top();
		s.pop();
		long long int z;
		z = a.top();
		a.pop();
		s.push(y + z);
	}
	cout << s.top() << endl;
}