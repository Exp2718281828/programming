#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	priority_queue<int> p;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		p.push(a);
	}
	for (int i = 0; i < m; i++) {
		int k = p.top();
		p.pop();
		k /= 2;
		p.push(k);
	}
	long long int s = 0;
	for (int i = 0; i < n; i++) {
		s += p.top();
		p.pop();
	}
	cout << s << endl;
}