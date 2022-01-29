#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    int a, b[99];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        b[n - i - 1] = a;
    }
    for (int i = 0; i < n; i++) {
        cout << b[i];
        if (i != n - 1) cout << " ";
    }
    cout << '\n';
}