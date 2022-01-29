#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double x1, x2, y1, y2, ans;
    cin >> x1 >> y1 >> x2 >> y2;
    ans = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
    printf("%.16f\n", ans);
}