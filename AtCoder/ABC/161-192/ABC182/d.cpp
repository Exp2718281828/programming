#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x, y;
    int a, b;
    cin >> x >> y >> a >> b;
    long long int exp = 0;
    __int128 X, Y;
    X = x;
    Y = y;
    while (X * a < b && X * a < Y) {
        X *= a;
        exp++;
    }
    exp += (Y - X - 1) / b;
    cout << exp << endl;
}