#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m;
    cin >> n >> m;
    long long int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int x = 0;
        for (int j = 0; j < m; j++) {
            if (s[j] == '0') x++;
        }
        if (x % 2 == 0)
            a++;
        else
            b++;
    }
    cout << a * b << endl;
}