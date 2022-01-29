#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}