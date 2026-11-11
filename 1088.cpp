//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int m, n, x, y;
//	double t[3] = { 0 };
//	t[0] = 99;
//	cin >> m >> x >> y;
//	while (t[0] > 9) {
//		n = t[0];
//		t[1] = (n % 10) * 10 + n / 10;
//		if (t[0] > t[1]) {
//			t[2] = t[0] / (x + y);
//		}
//		else {
//			t[2] = t[0] / (y - x);
//		}
//
//		if ((y * t[2] == t[1]) && (abs(t[0] - t[1]) == x * t[2])) {
//			break;
//		}
//		t[0]--;
//	}
//	if (t[0] != 9) {
//		cout << t[0];
//		for (int i = 0; i < 3; i++)
//		{
//			if (t[i] > m) {
//				cout << " Cong";
//			}
//			else if (t[i] == m) {
//				cout << " Ping";
//			}
//			else {
//				cout << " Gai";
//			}
//		}
//	}
//	else {
//		cout << "No Solution" << endl;
//	}
//	return 0;
//}
