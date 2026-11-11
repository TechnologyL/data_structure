//#include<bits/stdc++.h>
/*
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n, t,max=0;
	cin >> n >> t;
	vector<int> vec_h;
	int x;
	bool tag = true;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x >= max) {
			max = x;
		}
		if (tag == true && x > t) {
			vec_h.push_back(i);
			tag = false;
		}
		if (tag == false && x <= t) {
			vec_h.push_back(i-1);
			tag = true;
		}
	}
	if (tag == false){
		vec_h.push_back(n - 1);
	}
	if (vec_h.size() == 0) {
		cout << max;
	}
	else {
		for (int i = 0; i < vec_h.size(); i=i+2)
		{
			cout << "[" << vec_h[i] << ", " << vec_h[i+1] << "]" << endl;
		}
	}
	return 0;
}
*/