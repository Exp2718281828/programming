#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000;
    int ansmax, ansmin;
    ansmax = w / a;
    ansmin = (w + b - 1) / b;
    if (ansmax < ansmin)
        cout << "UNSATISFIABLE" << endl;
    else
        cout << ansmin << ' ' << ansmax << endl;
}