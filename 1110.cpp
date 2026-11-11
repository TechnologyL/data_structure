//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	int address;
//	int data;
//	int next;
//};
//int main()
//{
//	int head, n, k;
//	cin >> head >> n >> k;
//	vector<node> vec_a(100000), vec_b(n);
//	node n1;
//	for (int i = 0; i < n; i++) {
//		cin >> n1.address >> n1.data >> n1.next;
//		vec_a[n1.address] = n1;
//	}
//	int fhead = head;
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		if (fhead != -1) {
//			vec_b[i] = vec_a[fhead];
//			fhead = vec_a[fhead].next;
//			count++;
//		}
//		else {
//			break;
//		}
//	}
//	vector<vector<node>> vec_c(count);
//	for (int i = 0; i < count; i++) {
//		vec_c[i / k].push_back(vec_b[i]);
//	}
//	for (int i = (count - 1) / k; i >= 0; i--) {
//		for (int j = 0; j < vec_c[i].size(); j++) {
//			printf("%05d %d ", vec_c[i][j].address, vec_c[i][j].data);
//			if (j + 1 == vec_c[i].size()) {
//				if (i == 0) {
//					vec_c[i][j].next = -1;
//					printf("%d\n", vec_c[i][j].next);
//				}
//				else {
//					vec_c[i][j].next = vec_c[i - 1][0].address;
//					printf("%05d\n", vec_c[i][j].next);
//				}
//			}
//			else {
//				printf("%05d\n", vec_c[i][j].next);
//			}
//		}
//	}
//	return 0;
//}