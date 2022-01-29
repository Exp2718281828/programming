#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w, m;
	cin >> h >> w >> m;
	pair<int, int> b[300005];
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		b[i] = {x - 1, y - 1};
	}
	int p[300005] = {}, q[300005] = {};
	for (int i = 0; i < m; i++) {
		p[b[i].first]++;
		q[b[i].second]++;
	}
	int m_x = *max_element(p, p + h);
	int m_y = *max_element(q, q + w);
	int m_x_n = 0, m_y_n = 0;
	for (int i = 0; i < h; i++)
		if (p[i] == m_x) m_x_n++;
	for (int i = 0; i < w; i++)
		if (q[i] == m_y) m_y_n++;
	int c = m_x_n * m_y_n;
	for (int i = 0; i < m; i++) {
		if (p[b[i].first] == m_x && q[b[i].second] == m_y) {
			c--;
		}
	}
	cout << (m_x + m_y - (c == 0 ? 1 : 0)) << endl;
}