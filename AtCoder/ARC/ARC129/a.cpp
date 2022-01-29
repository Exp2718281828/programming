#include <bits/stdc++.h>
using namespace std;

unsigned long long int bits_msb(unsigned long long int v) {
	v = v | (v >> 1);
	v = v | (v >> 2);
	v = v | (v >> 4);
	v = v | (v >> 8);
	v = v | (v >> 16);
	v = v | (v >> 32);
	return v ^ (v >> 1);
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	unsigned long long int n, l, r;
	cin >> n >> l >> r;
	
}