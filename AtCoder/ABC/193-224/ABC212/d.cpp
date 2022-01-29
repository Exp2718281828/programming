#include <bits/stdc++.h>
using namespace std;

const long long int INF = 1LL << 50;
int main() {
	int q;
	cin >> q;
	long long int d = 0;
	priority_queue<long long int, vector<long long int>, greater<long long int>> x;
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		switch (t) {
			int c;
			case 1:
				cin >> c;
				x.push(c + d);
				break;
			case 2:
				cin >> c;
				d -= c;
				break;
			default:
				cout << x.top() - d << endl;
				x.pop();
		}
	}
}