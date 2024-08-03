//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	int a[10010] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	int k = 0;
//
//	cin >> k;
//	int x, y;
//	while (k--)
//	{
//		cin >> x >> y;
//		cout << upper_bound(a, a + n, y) - lower_bound(a, a + n, x) << '\n';
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s, str;
//    getline(cin, s);
//    getline(cin, str);
//    while (s.find(str)!=-1) {
//        s.erase(s.find(str), str.size());
//    }
//    cout << s;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, k;
//    string a[105];
//    cin >> n >> k;
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    for (int i = 0; i < k; i++)
//    {
//        for (int j = 0; j + 1 < n - i; j++)
//        {
//            if (a[j] > a[j + 1])
//                swap(a[j + 1], a[j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (i)
//            cout << '\n';
//        cout << a[i];
//    }
//    return 0;
//}

ElementType Median(ElementType A[], int N)
{
    for (int gap = N / 2; gap > 0; gap /= 2) {//Ï£¶ûÅÅĞò
        for (int i = gap; i < N; i++)
        {
            for (int j = i - gap; j >= 0 && A[j] > A[j + gap]; j -= gap)
            {
                ElementType t = A[j + gap];
                A[j + gap] = A[j];
                A[j] = t;
            }
        }
    }
    return A[N / 2];
}