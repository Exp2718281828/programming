#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int a, b, c, x = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++) {
        if (c % i == 0) x++;
    }
    cout << x << '\n';
}