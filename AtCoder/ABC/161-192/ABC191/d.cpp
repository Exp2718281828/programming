#include <bits/stdc++.h>
using namespace std;

bool Issquare(int num) {
	if (num < 0) return false;
	double x1 = sqrt(num);
	int x2 = sqrt(num);
	double y = x1 - x2;
	if (y <= 0.000000001 && y >= -0.000000001)
		return true;
	else
		return false;
}

long long int koushi(long long x, long long int y, long long r, long long int k) {
    if (r < x - k) return 0;
    double u = sqrt(r * r - (x - k) * (x - k));
    int t;
    if (Issquare(r * r - (x - k) * (x - k)))
        t = u;
    else {
        t = floor(u);
    }
    long long int a = y + t;
    long long int b = y - t;
    if (a > 0) {
        a /= 10000;
    } else {
        a *= -1;
        a += 9999;
        a /= 10000;
        a *= -1;
    }
    if (b > 0) {
        b += 9999;
        b /= 10000;
    } else {
        b *= -1;
        b /= 10000;
        b *= -1;
    }
    return a - b + 1;
}
int main() {
    double x, y, r;
    cin >> x >> y >> r;
    long long int ans = 0;
    x *= 10000;
    y *= 10000;
    r *= 10000;
    long long int X = round(x);
    long long int Y = round(y);
    long long int R = round(r);
    long long int a = X - R;
    long long int b = X + R;
    if (a > 0) {
        a += 9999;
        a /= 10000;
    } else {
        a *= -1;
        a /= 10000;
        a *= -1;
    }
    if (b > 0) {
        b /= 10000;
    } else {
        b *= -1;
        b += 9999;
        b /= 10000;
        b *= -1;
    }
    for (long long int i = a; i <= b; i++) {
        ans += koushi(X, Y, R, i * 10000);
    }
    cout << ans << endl;
}