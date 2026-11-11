//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int n, m, x, y;
//    int cp[100000] = { 0 }, ct[100000] = { 0 };
//    vector<int> vec_n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> x >> y;
//        cp[x] = y + 1;
//        cp[y] = x + 1;
//    }
//    cin >> m;
//    for (int i = 0; i < m; i++) {
//        cin >> x;
//        ct[x] = 1;
//    }
//    for (int i = 0; i <= 99999; i++) {
//        if (ct[i] == 1)
//        {
//            if (cp[i] - 1 < 0 || ct[cp[i] - 1] == 0) {
//                vec_n.push_back(i);
//            }
//        }
//    }
//    cout << vec_n.size() << endl;
//    for (int i = 0; i < vec_n.size(); i++)
//    {
//        if (i > 0) {
//            cout << " ";
//        }
//        printf("%05d", vec_n[i]);
//    }
//    return 0;
//}