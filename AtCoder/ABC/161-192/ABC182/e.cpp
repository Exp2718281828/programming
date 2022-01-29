#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	vector<pair<int, int>>* ox = nullptr;
	ox = new vector<pair<int, int>>[1505];
	vector<pair<int, int>>* oy = nullptr;
	oy = new vector<pair<int, int>>[1505];
	int h, w, n, m;
	bool ans[1505][1505] = {};
	cin >> h >> w >> n >> m;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		ox[x - 1].push_back(make_pair(y - 1, 0));
		oy[y - 1].push_back(make_pair(x - 1, 0));
	}
	for (int j = 0; j < m; j++) {
		int x, y;
		cin >> x >> y;
		ox[x - 1].push_back(make_pair(y - 1, 1));
		oy[y - 1].push_back(make_pair(x - 1, 1));
	}
	for (int i = 0; i < h; i++) {
		ox[i].push_back(make_pair(-1, 1));
		ox[i].push_back(make_pair(w, 1));
	}
	for (int i = 0; i < w; i++) {
		oy[i].push_back(make_pair(-1, 1));
		oy[i].push_back(make_pair(h, 1));
	}
	for (int i = 0; i < h; i++) sort(ox[i].begin(), ox[i].end());
	for (int i = 0; i < w; i++) sort(oy[i].begin(), oy[i].end());
	for (int i = 0; i < h; i++) {
		for (int j = 1; j < ox[i].size(); j++) {
			if (ox[i][j].second + ox[i][j - 1].second < 2) {
				for (int k = max(ox[i][j - 1].first, 0); k <= ox[i][j].first; k++) ans[i][k] = true;
				if (ox[i][j].second == 1) ans[i][ox[i][j].first] = false;
				if (ox[i][j - 1].second == 1) ans[i][ox[i][j - 1].first] = false;
			}
		}
	}
	for (int i = 0; i < w; i++) {
		for (int j = 1; j < oy[i].size(); j++) {
			if (oy[i][j].second + oy[i][j - 1].second < 2) {
				for (int k = max(oy[i][j - 1].first, 0); k <= oy[i][j].first; k++) ans[k][i] = true;
				if (oy[i][j].second == 1) ans[oy[i][j].first][i] = false;
				if (oy[i][j - 1].second == 1) ans[oy[i][j - 1].first][i] = false;
			}
		}
	}
	int s = 0;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			if (ans[i][j]) s++;
	cout << s << endl;
	delete[] ox;
	delete[] oy;
}