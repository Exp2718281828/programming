#include <bits/stdc++.h>
using namespace std;
multiset<int> s[200005];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	multiset<int> m;
	int p[200005], r[200005];
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		b--;
		p[i] = b;
		r[i] = a;
		s[b].insert(a);
	}
	for (int i = 0; i < 200005; i++) {
		if (s[i].empty()) continue;
		auto it = s[i].end();
		it--;
		m.insert(*it);
	}
	for (int i = 0; i < q; i++) {
		int c, d;
		cin >> c >> d;
		c--, d--;
		auto it = s[p[c]].end();
		it--;
		int x = *it;
		s[p[c]].erase(s[p[c]].find(r[c]));
		int y;
		if (s[p[c]].empty())
			y = -1;
		else {
			auto it2 = s[p[c]].end();
			it2--;
			y = *it2;
		}
		if (x != y) {
			m.erase(m.find(x));
			if (y > 0) m.insert(y);
		}
		p[c] = d;
		if (s[d].empty())
			x = -1;
		else {
			it = s[d].end();
			it--;
			x = *it;
		}
		s[d].insert(r[c]);
		auto it3 = s[d].end();
		it3--;
		y = *it3;
		if (x != y) {
			if (x > 0) m.erase(m.find(x));
			m.insert(y);
		}
		cout << *(m.begin()) << endl;
	}
}