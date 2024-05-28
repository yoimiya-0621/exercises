//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <map>
//using namespace std;
//#define ll long long
//bool f(ll x)
//{
//	for (ll i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	vector<ll>a;
//	map<ll, bool>mp;
//	for (ll i = 2; i <= sqrt(23333333333333/4); i++)
//	{
//		if (f(i))
//		{
//			a.push_back(i);
//			//mp[i] = true;
//		}
//	}
//	int flag = 0;
//	ll ans = 0;
//	for (int i = 0; i < a.size()-1; i++)
//	{
//		if (a[i] * a[i] * a[i + 1] * a[i + 1] > 23333333333333)
//			break;
//		for (int j = i + 1; j < a.size(); j++)
//		{
//			if (a[i] * a[i] * a[j] * a[j] >= 2333 && a[i] * a[i] * a[j] * a[j] <= 23333333333333)
//			{
//				if (!mp[a[i] * a[i] * a[j] * a[j]])
//				{
//					mp[a[i] * a[i] * a[j] * a[j]] = true;
//					ans++;
//				}
//			}
//			else if (a[i] * a[i] * a[j] * a[j] > 23333333333333)
//				break;
//		}
//	}
//	//for (ll x = 2333; x <=23333333333333; x+=2)
//	//{
//	//	cout << x << ' ';
//	//	//for (ll i = 0; i < a.size(); i++)
//	//	//{
//	//	//	if(x%a[i]==0)
//	//	//		if (mp[x / a[i]])
//	//	//		{
//	//	//			ans++;
//	//	//			break;
//	//	//		}
//	//	//}
//	//}
//	cout << ans;
//	//for (int i = 0; i < a.size(); i++)
//	//	cout << a[i]<<' ';
//	return 0;
//}