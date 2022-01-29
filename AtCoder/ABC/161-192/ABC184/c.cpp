#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int r, c, s, d;
    cin >> r >> c >> s >> d;
    int ans;
    if (r == s && c == d)
        ans = 0;
    else if (r + c == s + d || r - c == s - d || abs(r - s) + abs(c - d) <= 3)
        ans = 1;
    else if ((r + c + s + d) % 2 == 0 || abs(r - s) + abs(c - d) <= 6 || abs((r + c) - (s + d)) <= 3 || abs((r - c) - (s - d)) <= 3)
        ans = 2;
    else
        ans = 3;
    cout << ans << endl;
}