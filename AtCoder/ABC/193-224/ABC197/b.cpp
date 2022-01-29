#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, x, y;
    char s[105][105];
    cin >> h >> w >> x >> y;
    x--;
    y--;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) cin >> s[i][j];
    int ans = -3;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0;; j++) {
            if (x + dx[i] * j > h - 1 || x + dx[i] * j < 0 || y + dy[i] * j > w - 1 || y + dy[i] * j < 0) break;
            if (s[x + dx[i] * j][y + dy[i] * j] == '#') break;
            ans++;
        }
    }
    cout << ans << endl;
}