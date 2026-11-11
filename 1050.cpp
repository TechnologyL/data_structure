//#include<bits/stdc++.h>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//bool cmp(int a, int b) {
//	return a > b;
//}
//using namespace std;
//int main() {
//	int x,m,n;
//	cin >> x;
//	for (n = sqrt(x);n >= 1;n--) {
//		if (x % n == 0) {
//			m = x / n;
//			break;
//		}
//	}
//	vector<int> vec_ori(x);
//	for (int i = 0; i < x; i++)
//	{
//		cin >> vec_ori[i];
//	}
//	sort(vec_ori.begin(), vec_ori.end(), cmp);
//	vector<vector<int>> vec(m, vector<int>(n, 0));
//	int times = m / 2 + m % 2;
//	int t = 0;
//	for (int i = 0; i < times; i++)
//	{
//		for (int j = i; j < n - i && t < x; j++)
//		{
//			vec[i][j] = vec_ori[t];
//			t++;
//		}
//		for (int j = i + 1; j < m - i && t < x; j++)
//		{
//			vec[j][n - 1 - i] = vec_ori[t];
//			t++;
//		}
//		for (int j = n - 2 - i; j >= i && t < x; j--)
//		{
//			vec[m - 1 - i][j] = vec_ori[t];
//			t++;
//		}
//		for (int j = m - 2 - i; j > i && t < x; j--)
//		{
//			vec[j][i] = vec_ori[t];
//			t++;
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0;j < n;j++) {
//			cout << vec[i][j];
//			if (j != n - 1) {
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}