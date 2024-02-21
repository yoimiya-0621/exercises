//#include <iostream>
//#include <algorithm>
//using namespace std;
//struct S
//{
//	int p;
//	int count;
//}a[5000];
//bool cmp(struct S a, struct S b)
//{
//	return a.p < b.p;
//}
//int main()
//{
//	int n,m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a[i].p >> a[i].count;
//	}
//	sort(a, a + m, cmp);
//	int j = 0;
//	int sum = 0;
//	while (n>0)
//	{
//		if (n >= a[j].count)
//		{
//			n -= a[j].count;
//			sum += a[j].p * a[j].count;
//		}
//		else
//		{
//			sum += n * a[j].p;
//			break;
//		}
//		j++;
//	}
//	cout << sum;
//	return 0;
//}
