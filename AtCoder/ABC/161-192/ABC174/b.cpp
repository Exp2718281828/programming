#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, d;
    cin >> n >> d;
    d = d * d;
    int s = 0;
    for (int i = 0; i < n; i++) {
        long long int a, b;
        cin >> a >> b;
        if (d >= a * a + b * b) s++;
    }
    cout << s << endl;
}