#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    int turn = 0;
    int winner;
    cin >> a >> b >> c;
    while (1) {
        if (turn == 0) {
            if (a.length() == 0) {
                winner = 0;
                break;
            }
            if (a[0] == 'b')
                turn = 1;
            else if (a[0] == 'c')
                turn = 2;
            a = a.substr(1);
        } else if (turn == 1) {
            if (b.length() == 0) {
                winner = 1;
                break;
            }
            if (b[0] == 'a')
                turn = 0;
            else if (b[0] == 'c')
                turn = 2;
            b = b.substr(1);
        } else {
            if (c.length() == 0) {
                winner = 2;
                break;
            }
            if (c[0] == 'a')
                turn = 0;
            else if (c[0] == 'b')
                turn = 1;
            c = c.substr(1);
        }
    }
    switch (winner) {
        case 0:
            cout << 'A' << endl;
            break;
        case 1:
            cout << 'B' << endl;
            break;
        case 2:
            cout << 'C' << endl;
            break;
    }
}