//////2
//////#include <iostream>
//////#include <cmath>
//////using namespace std;
//////int main()
//////{
//////	int x;
//////	cin >> x;
//////	printf("%.3lf", ((double)x * x * x + 6) / (x * x + 1));
//////	return 0;
//////}
//////3
//////#include <iostream>
//////using namespace std;
//////int main()
//////{
//////	int a, b, c, d;
//////	string s;
//////	cin >> s;
//////	cin >> a >> b >> c >> d;
//////	if (a * b < c)
//////		cout << "fang qi kao yan";
//////	else if (a * b >= c && a * b <= d)
//////		cout << "fang qi jiu tai ke xi la";
//////	else
//////		cout << "ni jiu shi " << s << " da shi";
//////	return 0;
//////}
//////#include <iostream>
//////using namespace std;
//////int main()
//////{
//////	int a, x, y;
//////	cin >> a >> x >> y;
//////	int b = 0;
//////	for (;b<=100; b++)
//////	{
//////		if (a * x + b * y >= 6000)
//////		{
//////			cout << b;
//////			break;
//////		}
//////	}
//////	if (b > 100)
//////		cout << "ge, zhen dei shan le ba";
//////	return 0;
//////}
//////#include <iostream>
//////#include <string>
////////#include <vector>
//////using namespace std;
//////int main()
//////{
//////	//vector<string>n;
//////	int ans = 0;
//////	int a[1000] = { 0 };
//////	int k = 0,n=1;
//////	string s;
//////	while (getline(cin,s))
//////	{
//////		if (s.size() == 1 && s == ".")
//////			break;
//////		k++;
//////		for (int i = 0; i+2 < (int)s.size(); i++)
//////		{
//////			if (s[i] == 'z' && s[i + 1] == 'h' && s[i + 2] == 'i')
//////			{
//////				ans++;
//////				a[n] = k;
//////				n++;
//////			}
//////		}
//////
//////	}
//////	cout << ans << "\n";
//////	for (int i = 1; i < n; i++)
//////	{
//////		cout << a[i] << "\n";
//////	}
//////	return 0;
//////}
////#include <iostream>
////using namespace std;
////int main()
////{
////	int n;
////	cin >> n;
////	if (n % 2 != 0)
////	{
////		cout << " ";
////		for (int i = 0; i < n; i++)cout << "-";
////		cout << " "<<"\n";
////		for (int i = 0; i < n / 2; i++)
////		{
////			cout << "(";
////			for (int j = 0; j < n; j++)cout << " ";
////			cout << ")" << "\n";
////		}
////		cout << " ";
////		for (int i = 0; i < n; i++)cout << "-";
////		cout << " " << "\n";
////		for (int i = 0; i < n / 2; i++)
////		{
////			for (int j = 0; j < n / 2 + 1; j++)
////				cout << "(";
////			cout << "|";
////			for (int j = 0; j < n / 2 + 1; j++)
////				cout << ")";
////		}
////	}
////	else
////	{
////		cout << " ";
////		for (int i = 0; i < n; i++)cout << "-";
////		cout << " " << "\n";
////		for (int i = 0; i < n / 2; i++)
////		{
////			cout << "(";
////			for (int j = 0; j < n; j++)cout << " ";
////			cout << ")" << "\n";
////		}
////		cout << " ";
////		for (int i = 0; i < n; i++)cout << "-";
////		cout << " " << "\n";
////		for (int i = 0; i < n / 2; i++)
////		{
////			for (int j = 0; j < n / 2 + 1; j++)
////				cout << "(";
////			for (int j = 0; j < n / 2 + 1; j++)
////				cout << ")";
////		}
////	}
////	return 0;
////}
////7
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//struct B {
//    string s;
//    string ch;
//    int l;
//    int w;
//}b[1000];
//bool cmp(B a, B b)
//{
//    if (a.ch != b.ch)
//        return a.ch < b.ch;
//    else {
//        if (a.l != b.l)
//            return a.l < b.l;
//        else
//            return a.s > b.s;
//    }
//}
//int main()
//{
//    int n, k, wid;
//    cin >> n >> k >> wid;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> b[i].s >> b[i].ch >> b[i].l >> b[i].w;
//    }
//    sort(b, b + n, cmp);
//    int flag = 0, sum = 0, begin = 0;
//    int count = 0, wsum = 0;
//    vector<string>ans;
//    for (int i = 0; i <= n; i++)
//    {
//        if (i != 0&& b[i].ch != b[i - 1].ch)
//        {
//            if (flag == 0)
//            {
//                for (int j = begin; j < i; j++)
//                {
//                    ans.push_back(b[j].s);
//                    count++;
//                }
//                wid -= sum;
//            }
//            else
//                wsum += sum;
//            flag = 0;
//            sum = 0;
//            begin = i;
//        }
//        if (b[i].l > k)
//        {
//            flag = 1;
//        }
//        sum += b[i].w;
//        if (sum > wid)
//            flag = 1;
//    }
//    if (flag == 0)
//    {
//        for (int j = begin; j < n-1; j++)
//        {
//            ans.push_back(b[j].s);
//            count++;
//        }
//        wid -= sum;
//    }
//    else
//        wsum += sum;
//    cout << count << " " << wsum << "\n";
//    for (int i = 0; i < ans.size(); i++)
//        cout << ans[i] << "\n";
//    return 0;
//}
//#include <iostream>
//using namespace std;
//char a[105][105] = { 0 };
//char b[105][105] = { 0 };
//int n, t;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			cin >> a[i][j];
//	cin >> t;
//	int x, y, p;
//	for(int v=0;v<t;v++)
//	{
//		cin >> x >> y >> p;
//		for (int i = x; i < x + p; i++)
//		{
//			for (int j = y; j < y + p; j++)
//			{
//				b[i][j] = a[i][j];
//			}
//		}
//		for (int k = 0; k < p/2; k++)
//		{
//			for (int z = 0; z < p; z++)
//			{
//				a[x + k][y + z] = b[x + p-1-z][y + k];
//				a[x + z][y + p - 1 - k] = b[x + k][y + z];
//				a[x + p - 1 - k][y + p - 1 - z] = b[x + z][y + p - 1 - k];
//				a[x + p - 1 - z][y + k] = b[x + p - 1 - k][y + p - 1 - z];
//			}
//		}
//		memset(b, 0, sizeof(b));
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++)
//		{
//			if (j != 1)
//				cout << " ";
//			cout << a[i][j] ;
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[1000][1000] = { 0 };
//int b[1000][1000] = { 0 };
//int dx[4] = {0,1,0,-1};
//int dy[4] = { 1,0,-1,0 };
//double ans = 1e9,sum=0;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (b[i][j] == 1)
//			{
//				for (int k = 0; k < 4; k++)
//				{
//					if(i+dx[k]>=1&&i+dx[k]<=n&&j+dy[k]>=1&&j+dy[k]<=m)
//					ans = min(ans, fabs(a[i][j] - a[i + dx[k]][j + dy[k]]));
//				}
//				sum = max(sum, ans);
//				ans = 1e9;
//			}
//			
//		}
//	}
//	cout <<sum;
//	return 0;
//}

//#include <iostream>
//#include <deque>
//using namespace std;
//int main()
//{
//    string s = "1+1=2,2+2=4,3+3=6,4+4=8";
//    for (int z = 5; z <= 200; z++)
//    {
//        int j = z * 2;
//        int i = z;
//        string xx;
//        string ch = "+";
//        string ch2 = "=";
//        string ch3 = ",";
//        string yy;
//        deque<char>x;
//        deque<char>y;
//        while (i > 0)
//        {
//            x.push_front(i % 10+'0');
//            i /= 10;
//        }
//        while (j > 0)
//        {
//            y.push_front(j % 10+'0');
//            j /= 10;
//        }
//        for (int k = 0; k < x.size(); k++)
//            xx.push_back(x[k]);
//        for (int k = 0; k < y.size(); k++)
//            yy.push_back(y[k]);
//        s = s + ch3 + xx + ch + xx + ch2 + yy;
//    }
//    int n, k = 0;
//    cin >> n;
//    while (n--)
//    {
//        cin >> k;
//        cout << s[k - 1] << "\n";
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//class Complex
//{
//public:
//    Complex(double r = 0, double i = 0) :real(r), imag(i) {    }
//    Complex operator+(Complex& c2) const;//重载双目运算符'+'
//    Complex operator-=(Complex& c2); //重载双目运算符'-='
//    friend Complex operator-(Complex& c1, Complex& c2);
//    void Display() const;
//private:
//    double real;
//    double imag;
//};
//Complex Complex::operator+(Complex& c2)const
//{
//    return Complex(real + c2.real, imag + c2.imag);
//}
//Complex Complex::operator-=(Complex& c2)
//{
//    real -= c2.real;
//    imag -= c2.imag;
//    return *this;
//}
//Complex feiend Complex::operator-(Complex& c1, Complex& c2)
//{
//    return Complex(c1.real - c2.real, c1.imag - c2.imag);
//}
//void Complex::Display() const
//{
//    cout << "(" << real << ", " << imag << ")" << endl;
//}
//
//int main()
//{
//    double r, m;
//    cin >> r >> m;
//    Complex c1(r, m);
//    cin >> r >> m;
//    Complex c2(r, m);
//    Complex c3 = c1 + c2;
//    c3.Display();
//    c3 = c1 - c2;
//    c3.Display();
//    c3 -= c1;
//    c3.Display();
//    return 0;
//}

//#include <iostream>
//using namespace std;
//class Complex {
//public:
//	Complex(double r = 0, double i = 0) {
//	real = r;
//	imag = i;
//}
//	ostream operator<<(ostream& out2)
//	{
//		out2<< "(" << real << "," << imag << ")";
//		return out2;
//	}
//	/*friend ostream& operator<<(ostream& out1, Complex c)
//	{
//		out1 << "(" << c.real << "," << c.imag << ")";
//		return out1;
//	}*/
//private:
//	double real, imag;
//};
//int main()
//{
//	Complex c(1, 2);
//	cout << c;
//	return 0;
//}