#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    double r, s, l, PI;
    PI = acos(-1);
    cin >> r;
    s = r * r * PI;
    l = 2 * r * PI;
    printf("%lf %lf", s, l);
}