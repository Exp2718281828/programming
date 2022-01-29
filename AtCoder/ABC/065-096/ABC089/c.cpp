#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int m = 0, a = 0, r = 0, c = 0, h = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[0] == 'M')
            m++;
        else if (s[0] == 'A')
            a++;
        else if (s[0] == 'R')
            r++;
        else if (s[0] == 'C')
            c++;
        else if (s[0] == 'H')
            h++;
    }
    long long int ans = m * a * r + m * a * c + m * a * h + m * r * c + m * r * h + m * c * h + a * r * c + a * r * h + a * c * h + r * c * h;
    cout << ans << endl;
}