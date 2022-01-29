#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793;

int main() {
    int n, x1, x2, y1, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    double theta = PI * 2 / n;
    double x3 = (x1 + x2) / 2.0;
    double y3 = (y1 + y2) / 2.0;
    double ansx = cos(theta) * (x1 - x3) - sin(theta) * (y1 - y3) + x3;
    double ansy = sin(theta) * (x1 - x3) + cos(theta) * (y1 - y3) + y3;
    printf("%.16f %.16f\n", ansx, ansy);
}