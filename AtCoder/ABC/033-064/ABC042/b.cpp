#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    string s[105];
    cin >> n >> l;
    for (int i = 0; i < n; i++) cin >> s[i];
    sort(s, s + n);
    for (int i = 0; i < n; i++) cout << s[i];
    cout << endl;
}