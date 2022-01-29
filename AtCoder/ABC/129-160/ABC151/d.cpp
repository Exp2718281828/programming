#include <bits/stdc++.h>
using namespace std;

const int INF = 100000000;

int main() {
    int h, w;
    cin >> h >> w;
    char s[25][25];
    int ans = 0;
    const int dx[4] = {0, 1, 0, -1};
    const int dy[4] = {1, 0, -1, 0};
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) cin >> s[i][j];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') continue;
            int maze[25][25];
            for (int k = 0; k < h; k++)
                for (int l = 0; l < w; l++) maze[k][l] = INF;
            queue<pair<int, int>> q;
            maze[i][j] = 0;
            q.push(make_pair(i, j));
            while (q.size()) {
                pair<int, int> pnow = q.front();
                q.pop();
                for (int k = 0; k < 4; k++) {
                    pair<int, int> pnext = make_pair(pnow.first + dy[k], pnow.second + dx[k]);
                    if (pnext.first < 0 || pnext.first > h - 1 || pnext.second < 0 || pnext.second > w - 1) continue;
                    if (s[pnext.first][pnext.second] == '#') continue;
                    if (maze[pnext.first][pnext.second] < INF) continue;
                    q.push(pnext);
                    maze[pnext.first][pnext.second] = maze[pnow.first][pnow.second] + 1;
                }
            }
            int m = 0;
            for (int k = 0; k < h; k++) {
                for (int l = 0; l < w; l++) {
                    if (s[k][l] == '.') m = max(m, maze[k][l]);
                }
            }
            ans = max(ans, m);
        }
    }
    cout << ans << endl;
}