#include <bits/stdc++.h>
using namespace std;

int bitfind(int a, int b, int c, int d, int x) {
    int ans = 0;
    if (a == x) ans++;
    if (b == x) ans++;
    if (c == x) ans++;
    if (d == x) ans++;
    return ans;
}

int main() {
    int h, w;
    char s[12][12] = {};
    int ans = 0;
    cin >> h >> w;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) cin >> s[i][j];
    for (int i = 1; i < h - 1; i++) {
        for (int j = 1; j < w - 1; j++) {
            int a = s[i - 1][j] == '.' ? 0 : 1;
            int b = s[i][j - 1] == '.' ? 0 : 1;
            int c = s[i + 1][j] == '.' ? 0 : 1;
            int d = s[i][j + 1] == '.' ? 0 : 1;
            int e = s[i][j] == '.' ? 0 : 1;
            if (bitfind(a, b, c, d, 1) == 3 && e == 0) {
                ans += 2;
            } else if (bitfind(a, b, c, d, 0) == 3 && e == 1) {
                ans += 2;
            } else if (a == 0 && b == 0 && c == 1 && d == 1) {
                ans++;
            } else if (a == 1 && b == 0 && c == 0 && d == 1) {
                ans++;
            } else if (a == 1 && b == 1 && c == 0 && d == 0) {
                ans++;
            } else if (a == 0 && b == 1 && c == 1 && d == 0) {
                ans++;
            } else if (bitfind(a,b,c,d,0)==4 && e==1){
                ans += 4;
            }
        }
    }
    cout << ans << endl;
}
