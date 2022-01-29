#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int a, b, x;
    char op;
    bool exitflag = false;
    while (0 == 0) {
        cin >> a >> op >> b;
        switch (op) {
            case '+':
                x = a + b;
                break;
            case '-':
                x = a - b;
                break;
            case '*':
                x = a * b;
                break;
            case '/':
                x = a / b;
                break;
            case '?':
                exitflag = true;
                break;
        }
        if (exitflag) break;
        cout << x << '\n';
    }
}