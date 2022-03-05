#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
const int INF = 1 << 30;

int N = 10;
vector<pair<P, P>> f(vector<vector<char>> s) {
	// アルゴリズム：
	// 目標のマス目を, (x, y)の順に割り当てていく
	// そのマス目に向かって(x, y)を移動させる
	vector<pair<int, P>> rs;
	for (int i = 0; i < 5; i++) {
		for (int j = 5; j < N; j++) {
			if (i == 3 && j == N - 1) continue;
			if (i == 4 && j >= 7) continue;
			int dist = i + (N - j - 1);
			rs.push_back({dist, {i, j}});
		}
	}
	sort(rs.begin(), rs.end());
	int cnt = 0;
	vector<vector<bool>> finished(N, vector<bool>(N));
	vector<pair<P, P>> ans;
	for (auto t : rs) {
		P tmp = t.second;
		int i = tmp.first, j = tmp.second;
		int now = INF;
		int ni = 0, nj = 0;
		for (int k = 0; k < N; k++) {
			for (int l = 0; l < N; l++) {
				if (s[k][l] == '.') continue;
				if (finished[k][l]) continue;
				int dist = abs(i - k) + abs(j - l);
				if (now > dist) {
					now = dist;
					ni = k;
					nj = l;
				}
			}
		}
		if (i < ni) {
			ans.push_back({{i, nj}, {ni, nj}});
		} else if (i > ni) {
			ans.push_back({{ni, nj}, {i, nj}});
		}
		if (j < nj) {
			ans.push_back({{i, j}, {i, nj}});
		} else if (j > nj) {
			ans.push_back({{i, nj}, {i, j}});
		}
		s[i][j] = 'X';
		s[ni][nj] = '.';
		finished[i][j] = true;
	}
	return ans;
}

vector<vector<char>> gen() {
	vector<vector<char>> ans;
	random_device rnd;
	int r = 21, w = 79;
	for (int i = 0; i < 10; i++) {
		vector<char> d;
		for (int j = 0; j < 10; j++) {
			int x = rnd() % (r + w);
			char c;
			if (x < r) {
				c = 'X';
				r--;
			} else {
				c = '.';
				w--;
			}
			d.push_back(c);
		}
		ans.push_back(d);
	}
	return ans;
}

void step(vector<vector<char>>& s, vector<int> k) {
	int ax = k[0], ay = k[1], bx = k[2], by = k[3];
	ax--, ay--, bx--, by--;
	for (int i = ax; i <= bx; i++) {
		for (int j = 0; j <= (by - ay) / 2; j++) {
			swap(s[i][ay + j], s[i][by - j]);
		}
	}
	for (int i = ay; i <= by; i++) {
		for (int j = 0; j <= (bx - ax) / 2; j++) {
			swap(s[ax + j][i], s[bx - j][i]);
		}
	}
}

void out(vector<vector<char>>& s) {
	// cout << " 1234567890" << endl;
	for (int i = 0; i < 10; i++) {
		// cout << (i + 1) % 10;
		for (int j = 0; j < 10; j++) {
			cout << s[i][j];
		}
		cout << endl;
	}
}

int main() {
	int m = 0;
	vector<vector<char>> s_max;
	for (int i = 0; i < (int)1e4; i++) {
		vector<vector<char>> s;
		s = gen();
		vector<pair<P, P>> y = f(s);
		if (y.size() > m) {
			m = y.size();
			s_max = s;
		}
	}
	cout << m << endl;
	out(s_max);
}