#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0 && i % 5 != 0) s += i;
    }
    cout << s << endl;
}