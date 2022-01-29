#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    int r, s, p;
    char a[100005];
    int ans = 0;
    int score[100005] = {0};
    cin >> n >> k >> r >> s >> p;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (i >= k && a[i - k] == a[i] && score[i - k] != 0) continue;
        if (a[i] == 'r')
            score[i] = p;
        else if (a[i] == 's')
            score[i] = r;
        else
            score[i] = s;
    }
    for (int i = 0; i < n; i++) ans += score[i];
    cout << ans << endl;
}