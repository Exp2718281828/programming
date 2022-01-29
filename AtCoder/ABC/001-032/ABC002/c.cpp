#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    double s;
    cin >> a >> b >> c >> d >> e >> f;
    s = abs((c - a) * (f - b) - (e - a) * (d - b)) / 2.0;
    printf("%.16f", s);
}