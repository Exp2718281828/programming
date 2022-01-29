#include <bits/stdc++.h>
using namespace std;

const long long int INF = 2000000000000;
int main() {
    int n;
    bool preans = true;
    long long int c[505][505];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> c[i][j];
    }
    long long int d[505];
    long long int m = INF;
    for (int i = 0; i < n - 1; i++) d[i] = c[0][i + 1] - c[0][0];
    for (int i = 0; i < n; i++) m = min(m, c[0][i]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (c[i + 1][j + 1] != c[i + 1][0] + d[j]) preans = false;
        }
    }
    if (preans) {
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++) {
            cout << c[i][0] - (c[0][0] - m);
            if (i == n - 1)
                cout << endl;
            else
                cout << ' ';
        }
        for (int i = 0; i < n; i++) {
            cout << c[0][i] - m;
            if (i == n - 1)
                cout << endl;
            else
                cout << ' ';
        }
    } else {
        cout << "No" << endl;
    }
}