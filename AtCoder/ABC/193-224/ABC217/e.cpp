#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int q;
	bool sortrequired = true;
	deque<int> d;
	queue<int> t;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			int x;
			cin >> x;
			t.push(x);
		} else if (a == 2) {
			if (sortrequired) sort(d.begin(), d.end());
			if (d.empty()) {
				d.push_front(t.front());
				t.pop();
			}
			int x = d.front();
			cout << x << endl;
			d.pop_front();
			sortrequired = false;
		} else {
			while (!t.empty()) {
				d.push_back(t.front());
				t.pop();
			}
			sortrequired = true;
		}
	}
}