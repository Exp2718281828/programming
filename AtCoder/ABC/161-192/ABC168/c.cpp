#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793;

int main() {
    int a, b, h, m;
    cin >> a >> b >> h >> m;
    double argh, argm;
    argm = m * PI / 30;
    argh = (h * 60 + m) * PI / 360;
    double arg = abs(argm - argh);
    double ans = sqrt(a * a + b * b - 2 * a * b * cos(arg));
    printf("%.16f\n", ans);
}