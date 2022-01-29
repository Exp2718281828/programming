#include <bits/stdc++.h>
using namespace std;

int n;
int p[3005][5];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++) cin >> p[i][j];
    int ok = 0;
    int ng = 1 << 30;
    while (ng - ok > 1) {
        int mid = (ng + ok) / 2;
        int c[32] = {};
        for (int i = 0; i < n; i++) {
            int s = 0;
            for (int j = 0; j < 5; j++) {
                if (p[i][j] >= mid) s += 1 << j;
            }
            c[s] = 1;
        }
        bool flag = false;
        for (int i = 0; i < 32; i++) {
            for (int j = i + 1; j < 32; j++) {
                for (int k = j + 1; k < 32; k++) {
                    if ((i * c[i] | j * c[j] | k * c[k]) == 31) {
                        flag = true;
                    }
                }
            }
        }
        if (flag) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    cout << ok << endl;
}