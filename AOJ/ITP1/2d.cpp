#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int W, H, x, y, r;
    bool flag = true;
    cin >> W >> H >> x >> y >> r;
    if (y < r) flag = false;
    if (x < r) flag = false;
    if (y + r > H) flag = false;
    if (x + r > H) flag = false;
    if (flag)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}