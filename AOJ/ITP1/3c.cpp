#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int x, y;
    while (0 == 0) {
        cin >> x >> y;
        if (x + y == 0) break;
        if (x > y) swap(x, y);
        cout << x << " " << y << '\n';
    }
}