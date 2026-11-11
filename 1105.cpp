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
//	int head1, head2, n;
//	cin >> head1 >> head2 >> n;
//	vector<node> vec_a(100000), vec_b, vec_c, vec_d;
//	node n1;
//	for (int i = 0; i < n; i++) {
//		cin >> n1.address >> n1.data >> n1.next;
//		vec_a[n1.address] = n1;
//	}
//	int fhead = head1;
//	while (fhead != -1) {
//		vec_b.push_back(vec_a[fhead]);
//		fhead = vec_a[fhead].next;
//	}
//	fhead = head2;
//	while (fhead != -1) {
//		vec_c.push_back(vec_a[fhead]);
//		fhead = vec_a[fhead].next;
//	}
//	//b > a
//	if (vec_b.size() < vec_c.size()) {
//		swap(vec_b, vec_c);
//	}
//	int j = vec_c.size() - 1;
//	for (int i = 0; i < vec_b.size(); i++) {
//		vec_d.push_back(vec_b[i]);
//		if (i % 2 == 1 && j >= 0) {
//			vec_d.push_back(vec_c[j]);
//			j--;
//		}
//	}
//	for (int i = 0; i < vec_d.size(); i++) {
//		printf("%05d %d ", vec_d[i].address, vec_d[i].data);
//		if (i == vec_d.size() - 1)
//		{
//			vec_d[i].next = -1;
//			printf("%d\n", vec_d[i].next);
//		}
//		else {
//			vec_d[i].next = vec_d[i + 1].address;
//			printf("%05d\n", vec_d[i].next);
//		}
//	}
//}
