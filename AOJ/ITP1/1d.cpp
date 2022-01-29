#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int t, h, m, s;
    cin >> t;
    h = t / 3600;
    t -= h * 3600;
    m = t / 60;
    t -= m * 60;
    s = t;
    printf("%d:%d:%d\n", h, m, s);
}