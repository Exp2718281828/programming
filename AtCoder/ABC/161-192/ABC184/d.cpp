#include <bits/stdc++.h>
using namespace std;

double mem[105][105][105];

double dp(int a, int b, int c) {
    if (mem[a][b][c] >= 0) return mem[a][b][c];
    double ans = 0.0;
    if (a == 99) {
        ans += (double)a / (a + b + c);
    } else {
        ans += (double)a / (a + b + c) * (1 + dp(a + 1, b, c));
    }
    if (b == 99) {
        ans += (double)b / (a + b + c);
    } else {
        ans += (double)b / (a + b + c) * (1 + dp(a, b + 1, c));
    }
    if (c == 99) {
        ans += (double)c / (a + b + c);
    } else {
        ans += (double)c / (a + b + c) * (1 + dp(a, b, c + 1));
    }
    mem[a][b][c] = ans;
    return ans;
}

int main() {
    memset(mem, -1, sizeof(mem));
    int a, b, c;
    cin >> a >> b >> c;
    double ans = dp(a, b, c);
    printf("%.16f\n", ans);
}