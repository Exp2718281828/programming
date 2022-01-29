#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    pair<int, int> p[105];
    cin >> n;
    bool ans = false;
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (p[i].first == p[j].first && p[j].first == p[k].first) {
                    ans = true;
                    goto EXIT;
                }
                if ((double)(p[i].second - p[j].second) / (p[i].first - p[j].first) ==
                    (double)(p[j].second - p[k].second) / (p[j].first - p[k].first)) {
                    ans = true;
                    goto EXIT;
                }
            }
        }
    }
EXIT:
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}