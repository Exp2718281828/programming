#include <cstdio>
#include <iostream>
using namespace std;

int mark2num(char k) {
    switch (k) {
        case 'S':
            return 0;
        case 'H':
            return 13;
        case 'C':
            return 26;
        case 'D':
            return 39;
    }
}

char num2mark(int k) {
    switch (k) {
        case 0:
            return 'S';
        case 1:
            return 'H';
        case 2:
            return 'C';
        case 3:
            return 'D';
    }
}

int main() {
    int n;
    bool a[52];
    char f;
    int x, y;
    char p;
    int q, r;
    for (int i = 0; i < 52; i++) {
        a[i] = false;
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> f >> x;
        y = mark2num(f) + x - 1;
        a[y] = true;
    }

    for (int i = 0; i < 52; i++) {
        if (!a[i]) {
            q = i % 13 + 1;
            r = i / 13;
            p = num2mark(r);
            cout << p << " " << q << '\n';
        }
    }
}