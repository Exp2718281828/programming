#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int people[4][3][10] = {};
    int n, b, f, r, v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        people[b - 1][f - 1][r - 1] += v;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {
                cout << " " << people[i][j][k];
            }
            cout << '\n';
        }
        if (i != 3) cout << "####################" << '\n';
    }
}