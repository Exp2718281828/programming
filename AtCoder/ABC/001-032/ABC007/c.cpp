#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

const int INF = 100000000;
typedef pair<int, int> P;

int main() {
    int maze[55][55];
    int d[55][55];
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    for (int i = 0; i < 55; i++)
        for (int j = 0; j < 55; j++) d[i][j] = INF;
    memset(maze, -1, sizeof(maze));
    int r, c, sx, sy, gx, gy;
    cin >> r >> c >> sx >> sy >> gx >> gy;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char a;
            cin >> a;
            if (a == '#')
                maze[i][j] = -1;
            else
                maze[i][j] = 0;
        }
    }
    // maze[sx][sy] = 1;
    // maze[gx][gy] = 2;
    queue<P> que;
    que.push(pair<int, int>(sx - 1, sy - 1));
    d[sx - 1][sy - 1] = 0;
    while (que.size()) {
        P p = que.front();
        que.pop();
        // if (p.first == gx && p.second == gy) break;
        for (int i = 0; i < 4; i++) {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (nx < 0 || ny < 0) continue;
            if (maze[nx][ny] == -1) continue;
            if (d[nx][ny] != INF) continue;
            que.push(P(nx, ny));
            d[nx][ny] = d[p.first][p.second] + 1;
        }
    }
    cout << d[gx - 1][gy - 1] << endl;
}