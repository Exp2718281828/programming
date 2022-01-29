#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int mem[2005][2005];
int c[2005][2005];
int h, w;

int dp(int i, int j) {
    if (mem[i][j] != INF) return mem[i][j];
    int ans;
    int t = ((i + j) % 2 == 0 ? -1 : 1);
    if (i == h - 1 && j == w - 1) {
        ans = t * c[i][j];
    } else if (i == h - 1) {
        ans = t * c[i][j] + dp(i, j + 1);
    } else if (j == w - 1) {
        ans = t * c[i][j] + dp(i + 1, j);
    } else {
        if (t <= 0) {
            ans = t * c[i][j] + min(dp(i + 1, j), dp(i, j + 1));
        } else {
            ans = t * c[i][j] + max(dp(i + 1, j), dp(i, j + 1));
        }
    }
    mem[i][j] = ans;
    return ans;
}

int main() {
    cin >> h >> w;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) {
            char x;
            cin >> x;
            c[i][j] = (x == '+' ? 1 : -1);
            mem[i][j] = INF;
        }
    c[0][0] = 0;
    int a = dp(0, 0);
    if (a > 0)
        cout << "Takahashi" << endl;
    else if (a < 0)
        cout << "Aoki" << endl;
    else
        cout << "Draw" << endl;
}
