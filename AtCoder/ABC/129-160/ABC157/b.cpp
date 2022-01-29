#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3], n;
    int b[3][3] = {};
    bool ans = false;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> a[i][j];
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (x == a[j][k]) {
                    b[j][k] = 1;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        int s = 0;
        for (int j = 0; j < 3; j++) {
            s += b[i][j];
        }
        if (s == 3) ans = true;
    }
    for (int i = 0; i < 3; i++) {
        int s = 0;
        for (int j = 0; j < 3; j++) {
            s += b[j][i];
        }
        if (s == 3) ans = true;
    }
    int s = 0;
    for (int i = 0; i < 3; i++) {
        s += b[i][i];
    }
    if (s == 3) ans = true;
    s = 0;
    for (int i = 0; i < 3; i++) {
        s += b[i][2 - i];
    }
    if (s == 3) ans = true;
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}