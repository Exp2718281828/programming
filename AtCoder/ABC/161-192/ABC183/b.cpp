#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double Sx, Sy, Gx, Gy;
    double x;
    cin >> Sx >> Sy >> Gx >> Gy;
    x = (double)Sx + (Gx - Sx) * ((double)Sy / (Gy + Sy));
    printf("%lf\n", x);
}