#include <bits/stdc++.h>
using namespace std;

int digitnum(long long int n, int d = 10) {
    assert(d > 1);
    int ans = 0;
    while (1) {
        n /= d;
        ans++;
        if (n == 0) return ans;
    }
}

int char2int(char c) {
    assert(c >= '0' && c <= '9');
    return c - '0';
}

int g(int n, int k) {
    string s = to_string(n);
    int x[10] = {};
    for (int i = 0; i < k; i++) {
        x[char2int(s[i])]++;
    }
    string ans_s = "";
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < x[i]; j++) {
            ostringstream ss;
            ss << i;
            ans_s = ans_s + ss.str();
        }
    }
    int ans;
    if (ans_s == "")
        ans = 0;
    else
        ans = stoi(ans_s);
    return ans;
}

int f(int n, int k) {
    string s = to_string(n);
    int x[10] = {};
    for (int i = 0; i < k; i++) {
        x[char2int(s[i])]++;
    }
    string ans_s = "";
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < x[i]; j++) {
            ostringstream ss;
            ss << i;
            ans_s = ans_s + ss.str();
        }
    }
    int ans;
    if (ans_s == "")
        ans = 0;
    else
        ans = stoi(ans_s);
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int x = digitnum(n);
        n = f(n, x) - g(n, x);
    }
    cout << n << endl;
}