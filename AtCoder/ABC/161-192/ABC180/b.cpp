#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int n, x[100005];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
    {
        x[i] = abs(x[i]);
    }
    long long int d1 = 0, d3 = 0;
    double d2;
    for (int i = 0; i < n; i++)
        d1 += x[i];
    long long int k = 0;
    for (int i = 0; i < n; i++)
        k += (long long)x[i] * x[i];
    d2 = sqrt(k);
    d3 = *max_element(x, x + n);
    printf("%lld\n%.16f\n%lld\n", d1, d2, d3);
}