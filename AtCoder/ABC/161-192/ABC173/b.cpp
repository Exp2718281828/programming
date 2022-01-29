#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s[100005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    int ac = 0, wa = 0, tle = 0, re = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == "AC")
            ac++;
        else if (s[i] == "WA")
            wa++;
        else if (s[i] == "TLE")
            tle++;
        else
            re++;
    }
    printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n", ac, wa, tle, re);
}