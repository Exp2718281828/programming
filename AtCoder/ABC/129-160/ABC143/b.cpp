#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int d[60];
    int s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> d[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            s += d[i] * d[j];
        }
    }
    cout << s << endl;
}