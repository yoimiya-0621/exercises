////A
////#include <iostream>
////#include <algorithm>
////using namespace std;
////int a[105] = { 0 };
////int b[105] = { 0 };
////
////int main() {
////	int t, n;
////	cin >> t;
////	while (t--) {
////		cin >> n;
////		for (int i = 0; i < n; i++) {
////			cin >> a[i];
////			b[a[i]]++;
////		}
////		int sum = 0;
////		for (int i = 1; i <= 100; i++) {
////			sum += b[i] / 3;
////		}
////		cout << sum << '\n';
////		memset(a, 0, sizeof(a));
////		memset(b, 0, sizeof(b));
////	}
////	return 0;
////}
////B
////#include <iostream>
////#include <cmath>
////using namespace std;
////#define ll long long
////ll ans[20005];
////int main()
////{
////	int t, n;
////	ll k;
////	cin >> t;
////	while (t--) {
////		cin >> n >> k;
////		int x = 0,i=0;
////		for(i=0;i<n&&k>0;i++)
////		{
////			if (k - pow(2, i) >= pow(2, i + 1))
////			{
////				k -= pow(2, i);
////				ans[x++] = pow(2, i);
////			}
////			else if (k >= pow(2, i)) {
////				ans[x++] = pow(2, i);
////				k -= pow(2, i);
////			}
////			else
////			{
////				ans[x++] = k;
////				k = 0;
////			}
////		}
////		if (k) {
////			ans[0] += k;
////		}
////		for (int i = 0; i < n; i++)
////		{
////			if (i != 0)
////				cout << " ";
////			cout << ans[i];
////		}
////		cout << '\n';
////		memset(ans, 0, sizeof(ans));
////	}
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//#define PI 3.1415926
//double sum = 0;
//class Shape {
//public:
//    virtual void area()=0;
//};
//class Circle :public Shape {
//private:
//    double r;
//public:
//    Circle(double a) { r = a; }
//    void area() {
//        sum += PI * r * r;
//    }
//};
//class Square :public Shape {
//private:
//    double l;
//public:
//    Square(double a) { l = a; }
//    void area() {
//        sum += l * l;
//    }
//};
//class Rectangle :public Shape {
//private:
//    double l, w;
//public:
//    Rectangle(double a, double b) { l = a; w = b; }
//    void area() {
//        sum += l * w;
//    }
//};
//class Trapezoid :public Shape {
//private:
//    double a, b, h;
//public:
//    Trapezoid(double up, double down, double height) {
//        a = up;
//        b = down;
//        h = height;
//    }
//    void area() {
//        sum += (a + b) * h / 2;
//    }
//};
//class Triangle :public Shape {
//private:
//    double d, h;
//public:
//    Triangle(double a, double b) { d = a; h = b; }
//    void area() {
//        sum += d * h / 2;
//    }
//};
//int main()
//{
//    int count = 0;
//    Shape *s[10];
//    double r;
//    cin >> r;
//    s[count++] = new Circle(r);
//    double a;
//    cin >> a;
//    s[count++] = new Square(a);
//    double b;
//    cin >> a >> b;
//    s[count++] = new Rectangle(a, b);
//    double h;
//    cin >> a >> b >> h;
//    s[count++] = new Trapezoid(a, b, h);
//    cin >> a >> h;
//    s[count++] = new Triangle(a, h);
//    for (int i = 0; i < count; i++) {
//        s[i]->area();
//        delete s[i];
//    }
//    printf("%.3lf", sum);
//    return 0;
//}