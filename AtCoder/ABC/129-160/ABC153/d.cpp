#include <bits/stdc++.h>
using namespace std;

long long int damage(long long int x) {
    if (x == 1) return 1;
    return 1 + 2 * damage(x / 2);
}

int main() {
    long long int h;
    cin >> h;
    cout << damage(h) << endl;
}