//#include<bits/stdc++.h>
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string a, b, c, mid;
	cin >> a >> b;
	int na, nb, nc, plus=0;
	if (a.length() < b.length()) {
		swap(a, b);
	}
	b = string(a.length() - b.length(), '0') + b;
	for (int i = a.length()-1; i >= 0; i--)
	{
		if (a[i] >= 'a') {
			na = a[i] - 'a' + 10;
		}
		else {
			na = a[i] - '0';
		}
		if (b[i] >= 'a') {
			nb = b[i] - 'a' + 10;
		}
		else {
			nb = b[i] - '0';
		}
		nc = (na + nb + plus) % 30;
		plus = (na + nb + plus) / 30;
		if (nc >= 10) {
			mid = (nc - 10 + 'a');
		}
		else {
			mid = (nc + '0');
		}
		c = mid + c;
	}
	if (plus != 0) {
		c = "1" + c;
	}
	int j = 0;
	while (c[j] == '0' && j<c.length()-1) {
		j++;
	}
	for (j;j < c.length();j++) {
		cout << c[j];
	}
	return 0;
}
*/