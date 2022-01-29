#include <bits/stdc++.h>
using namespace std;

int main() {
	deque<int> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t, x;
		cin >> t >> x;
		switch (t) {
			case 1:
				q.push_front(x);
				break;
			case 2:
				q.push_back(x);
				break;
			default:
				cout << q[x - 1] << endl;
				break;
		}
	}
}