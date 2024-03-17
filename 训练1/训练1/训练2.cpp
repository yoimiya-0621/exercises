//#include <iostream>
//#include <map>
//using namespace std;
////int f(int x)
////{
////    int f = 0;
////    while(x > 0)
////    {
////        f = f + (x % 10) * (x % 10);
////        x /= 10;
////    }
////    return f;
////}
////int ff(int x)
////{
////    int ff = 0;
////    while (x > 0)
////    {
////        ff += x % 10;
////        if (ff > 1)
////            return 0;
////        x /= 10;
////    }
////    if (ff == 1)
////        return 1;
////    else
////        return 0;
////}
////int main()
////{
////    int a, b;
////    cin >> a >> b;
////    map<int, int>c;
////    for (int i = a; i <= b; i++)
////    {
////        bool flag[10000] = { false };
////        int j = 0, x = i;
////        while (1)
////        {
////            if (ff(x))
////            {
////                for (int m = 1; m < 10000; m++)
////                {
////                    if (flag[m] && m != i)
////                    {
////                        c[m] = 100000;
////                    }
////                }
////                if (c[i] != 100000)
////                    c[i] = j;
////                break;
////            }
////            if (flag[x])
////            {
////                c[i] = 100000;
////                break;
////            }
////            j++;
////            flag[x] = true;
////            x = f(x);
////        }
////    }
////    for (int i = a; i <= b; i++)
////    {
////        if (c[i] != 100000)
////            cout << i << " " << c[i] << "\n";
////    }
////    return 0;
////}
////class A{
////public:
////    int func(int a){return a * a; }
////};
////int main()
////{
////    // A a;
////    //a.func(5);
////    //A* p = new A;
////    // p->func(5);
////    // A& r = a;
////   //  r.func(5);
////   // A a,b;
////   // if (a != b)
////   //     a.func(5);
////    return 0;
////}
//#include <iostream>
//#include <stack>
//using namespace std;
///*int main()
//{
//	int n;
//	cin >> n;
//	for (int k = 0; k < n; k++) 
//	{
//		string s;
//		cin >> s;
//		stack<char>a;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (i == 0)
//			{
//				if (s[i] == ')' || s[i] == ']')
//				{
//					a.push(s[i]);
//					break;
//				}
//				else
//					a.push(s[i]);
//			}
//			else
//			{
//				if (a.top() == '[' && s[i] == ']' || a.top() == '(' && s[i] == ')')
//					a.pop();
//				else
//					a.push(s[i]);
//			}
//			
//		}
//		if (a.empty())
//			cout << "Yes" << "\n";
//		else
//			cout << "No" << "\n";
//	}
//	return 0;
//}*/
///*
//#include <string>
//int main()
//{
//	string s;
//	getline(cin, s);
//	stack<char>a;
//	int flag = 1;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (isdigit(s[i]) || isalpha(s[i]))
//			continue;
//		else
//		{
//			if (s[i] == '[' || s[i] == '(' || s[i] == '{')
//				a.push(s[i]);
//			else
//			{
//				if (s[i] == ')')
//				{
//					if (a.top() == '(')
//						a.pop();
//					else
//					{
//						flag = 0;
//						break;
//					}
//				}
//				else if (s[i] == '}')
//				{
//					if (a.top() == '{')
//						a.pop();
//					else
//					{
//						flag = 0;
//						break;
//					}
//				}
//				else if (s[i] == ']')
//				{
//					if (a.top() == '[')
//						a.pop();
//					else
//					{
//						flag = 0;
//						break;
//					}
//				}
//			}
//		}
//	}
//	if (flag)
//		cout << "yes";
//	else
//		cout << "no";
//	return 0;
//}*/
///*
//#include <iostream>
//#include <cmath>
//#include <map>
//#include <vector>
//using namespace std;
//bool issu(int x)
//{
//	if (x == 0 || x == 1)
//		return false;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return false;
//	}
//	return true;
//}
//int f(int x)
//{
//	int f = 0;
//	while (x > 0)
//	{
//		f += (x % 10) * (x % 10);
//		x /= 10;
//	}
//	return f;
//}
//bool ishappy(int x)
//{
//	int f = 0;
//	while (x > 0)
//	{
//		f += x % 10;
//		if (f > 1)
//			return false;
//		x /= 10;
//	}
//	if (f == 1)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	bool flag = false;
//	map<int, int>c;
//	for (int i = a; i <= b; i++)
//	{
//		vector<int>cc;
//		int x = i,j=1;
//		while (1) {
//			if (c[x] == -2)
//			{
//				c[i] = -2;
//				for (int z = 0; z < cc.size(); z++)
//					c[cc[z]] = -2;
//				break;
//			}
//			for (int k = 0; k < cc.size(); k++)
//			{
//				if (x == cc[k]) {
//					for (int z = 0; z < cc.size(); z++)
//						c[cc[z]] = -2;
//					break;
//				}
//			}
//			if (j>1)
//			{
//				cc.push_back(x);
//			}
//			if (ishappy(x))
//			{
//				for (int k = 0; k < cc.size(); k++)
//				{
//					c[cc[k]] = -1;
//				}
//				if (issu(i))
//				{
//					c[i] = j*2;
//				}
//				else
//				{
//					c[i] = j;
//				}
//				break;
//			}
//			else
//			{
//				x = f(x);
//				j++;
//			}
//		}
//	}
//	for (int i = a; i <= b; i++)
//	{
//		if (c[i] > 0)
//		{
//			cout << i << " " << c[i] << "\n";
//		}
//	}
//	return 0;
//}*/
///*
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int l, n, w = 0;
//	cin >> l >> n;
//	n = pow(26, l) - n;
//	char a[100] = { 0 };
//	while (n > 0)
//	{
//		a[w] = 'a' + n % 26;
//		w++;
//		n /= 26;
//	}
//	for (int i = l - 1; i >= 0; i--)
//	{
//		if (a[i] == 0)
//			cout << "a";
//		else
//			cout << a[i];
//	}
//	return 0;
//}
//*/
///*
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	char ch;
//	int n;
//	string s;
//	vector<string>a;
//	cin >> ch >> n;
//	char c = getchar();
//	for (int i = 0; i < n; i++)
//	{
//		getline(cin, s);
//		reverse(s.begin(), s.end());
//		a.push_back(s);
//	}
//	for (int i = n - 1; i >= 0; i--)
//	{
//		for (int j = 0; j < a[i].size(); j++)
//		{
//			if (a[i][j] != ' ')
//				cout << ch;
//			else
//				cout << " ";
//		}
//		cout << "\n";
//	}
//	return 0;
//}*/
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	char c = getchar();
//	for (int i = 0; i < n; i++) {
//		string s;
//		getline(cin, s);
//		cout << s << "\n";
//		cout << "AI: ";
//		int begin = 0, end = 0;
//		for (int k = 0; k < s.size(); k++)
//		{
//			int canyou = 0, couldyou = 0, j = k;
//			if (isalpha(s[j]))
//			{
//				begin = 1;
//				if ((s[j] == 'c' || s[j] == 'C') && (s[j + 1] == 'a' || s[j + 1] == 'A') &&
//					(s[j + 2] == 'n' || s[j + 2] == 'N'))
//				{
//					j = j + 3;
//					while (!isalpha(s[j]))
//						j++;
//					if ((s[j] == 'y' || s[j] == 'Y') && (s[j + 1] == 'o' || s[j + 1] == 'O')
//						&& (s[j + 2] == 'u' || s[j + 2] == 'U'))
//					{
//						canyou = j + 2;
//					}
//				}
//				if ((s[j] == 'c' || s[j] == 'C') && (s[j + 1] == 'o' || s[j + 1] == 'O') &&
//					(s[j + 2] == 'u' || s[j + 2] == 'U') && (s[j + 3] == 'l' || s[j + 3] == 'L') &&
//					s[j + 4] == 'd' || s[j + 4] == 'D')
//				{
//					j = j + 5;
//					while (!isalpha(s[j]))
//						j++;
//					if ((s[j] == 'y' || s[j] == 'Y') && (s[j + 1] == 'o' || s[j + 1] == 'O')
//						&& (s[j + 2] == 'u' || s[j + 2] == 'U'))
//					{
//						couldyou = j + 2;
//					}
//				}
//				if (canyou)
//				{
//					cout << "I can";
//					k = canyou;
//				}
//				else if (couldyou)
//				{
//					cout << "I could";
//					k = couldyou;
//				}
//				else if (s[j] == 'I' && !isalpha(s[j - 1]) && !isalpha(s[j + 1]))
//				{
//					cout << "you";
//				}
//				else if (s[j] == 'm' && s[j + 1] == 'e' && !isalpha(s[j + 2]) && !isalpha(s[j - 1]))
//				{
//					cout << "you";
//					k = j + 1;
//				}
//				else
//				{
//					if (s[j] >= 'A' && s[j] <= 'Z' && s[j] != 'I')
//						s[j] += 32;
//					cout << s[j];
//				}
//			}
//			else {
//				if (s[j] == ' ' && (isdigit(s[j + 1]) || isalpha(s[j + 1]) || s[j + 1] == '\'')&&begin)
//					cout << " ";
//				else if (s[j] == '?')
//					cout << "!";
//				else
//					cout << s[j];
//			}
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <string>
//#include <assert.h>
//using namespace std;
//
////请在此处定义Date类
//
//
//bool isLeapYear(int year) {
//    //四年一闰，百年不闰，四百年又闰
//    if (year % 400 == 0)
//        return true;
//    else if (year % 100 == 0)
//        return false;
//    else  if (year % 4 == 0)
//        return true;
//    else
//        return false;
//}
//class Date
//{
//public:
//    Date(int y, int m, int d) {
//        year = y;
//        month = m;
//        day = d;
//    }
//    string toText()
//    {
//        string s="1111-1-11";
//        s[0] = year / 1000 + '0'; s[1] = year % 1000 / 100 + '0';
//        s[2] = year % 100 / 10 + '0'; s[3] = year % 10 + '0';
//        s[4] = '-';
//        int i = 5;
//        if (month >= 10)
//        {
//            s[i++] = month / 10 + '0';
//            s[i++] = month % 10 + '0';
//        }
//        else
//            s[i++] = month + '0';
//        s[i++] = '-';
//        if (day >= 10)
//        {
//            s[i++] = day / 10 + '0';
//            s[i++] = day % 10 + '0';
//        }
//        else
//            s[i++] = day + '0';
//        while (i < s.size())
//            s[i++] = '\0';
//        return s;
//    }
//    Date nextDay()
//    {
//        day++;
//        if (day > 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
//            day = 1;
//            month++;
//        }
//        else if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)) {
//            day = 1;
//            month++;
//        }
//        else if (day > 29 && month == 2 && isLeapYear(year)) {
//            day = 1;
//            month++;
//        }
//        else if (day > 28 && month == 2 && !isLeapYear(year)) {
//            day = 1;
//            month++;
//        }
//        if (month > 12) {
//            month = 1;
//            year++;
//        }
//        return *this;
//    }
//    Date prevDay()
//    {
//        day-=2;
//        if (day == 0 && (month - 1 == 1 || month - 1 == 3 || month - 1 == 5 || month - 1 == 7 || month - 1 == 8 || month - 1 == 10 || month == 1)) {
//            day = 31;
//            month--;
//        }
//        else if (day == 0 && (month - 1 == 4 || month - 1 == 6 || month - 1 == 9 || month - 1 == 11)) {
//            day = 30;
//            month--;
//        }
//        else if (day == 0 && month == 3 && isLeapYear(year)) {
//            day = 29;
//            month--;
//        }
//        else if (day == 0 && month == 3 && !isLeapYear(year)) {
//            day = 28;
//            month--;
//        }
//        if (month == 0) {
//            month = 12;
//            year--;
//        }
//        return *this;
//    }
//private:
//    int year, month, day;
//};
//int main()
//{
//    int year = 2000, month = 1, day = 1;
//    cin >> year >> month >> day;
//    Date d(year, month, day);
//    cout << "Date: " << d.toText() << ", Next Day: " << d.nextDay().toText()
//        << ", Prev Day: " << d.prevDay().toText();
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//using namespace std;
//class Point
//{
//public:
//    int x, y;
//    Point()
//    {
//
//    }
//    Point(int xx, int yy)
//    {
//        x = xx;
//        y = yy;
//    }
//private:
//};
//class Rect
//{
//public:
//    Point tl, br;
//    Rect(Point a, Point b)
//    {
//        tl = a;
//        br = b;
//    }
//    Point topRight()
//    {
//        int x = br.x;
//        int y = tl.y;
//        return Point(x, y);
//    }
//    Point bottomLeft()
//    {
//        int x = tl.x;
//        int y = br.y;
//        return Point(x, y);
//    }
//    int width()
//    {
//        return br.x - tl.x;
//    }
//    int height()
//    {
//        return tl.y - br.y;
//    }
//    int area()
//    {
//        return this->width() * this->height();
//    }
//    float diagonalLength()
//    {
//        return (float)sqrt(this->width() * this->width() + this->height() * this->height());
//    }
//private:
//};
////Project - Rect
//
//
////定义Point类
////定义Rect类
//
//int main() {
//    auto rt = Rect(Point(1, 6), Point(7, 8));
//    printf("Vertices of rectangle rt:\n");
//    printf("(%d,%d)-----------------------(%d,%d)\n",
//        rt.tl.x, rt.tl.y, rt.topRight().x, rt.topRight().y);
//
//    printf("(%d,%d)-----------------------(%d,%d)\n",
//        rt.bottomLeft().x, rt.bottomLeft().y, rt.br.x, rt.br.y);
//
//    printf("Size information of rectangle rt:\n");
//    printf("width - %d    height - %d\n", rt.width(), rt.height());
//    printf("area - %d    diagonal legnth - %.2f", rt.area(), rt.diagonalLength());
//
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//#include <stdio.h>
//using namespace std;
//class Point {
//public:
//    float x, y;
//    Point()
//    {}
//    Point(float xx, float yy)
//    {
//        x = xx;
//        y = yy;
//    }
//private:
//};
//class Polygon
//{
//public:
//    Polygon()
//    {}
//    Polygon(int n)
//    {
//        count = n;
//        pts = new Point[n];
//    }
//    void setVertice(int i, const Point& p)
//    {
//        *(pts + i) = p;
//    }
//    Point  getVertice(int i) {
//       return *(pts + i);
//    }
//    ~Polygon()
//    {
//        delete[] pts;
//    }
//    float getArea()
//    {
//        float sum = 0;
//        for (int i = 1; i < count - 1; i++)
//        {
//            float a = sqrt(pow((pts->x) - ((pts + i)->x), 2) + pow((pts->y) - ((pts + i)->y), 2));
//            float b = sqrt(pow((pts->x) - ((pts + i + 1)->x), 2) + pow((pts->y) - ((pts + i + 1)->y), 2));
//            float c = sqrt(pow(((pts + i + 1)->x) - ((pts + i)->x), 2) + pow(((pts + i + 1)->y) - ((pts + i)->y), 2));
//            float p = (a + b + c) / 2;
//            sum += sqrt(p * (p - a) * (p - b) * (p - c));
//        }
//        return sum;
//    }
//private:
//    Point* pts;
//    int count;
//};
//
//
////请在此处定义Point类及Polygon类
//
//int main()
//{
//    Polygon poly1(6);
//    poly1.setVertice(0, Point(0, 0));
//    poly1.setVertice(1, Point(33.2, 30));
//    poly1.setVertice(2, Point(61.2, 0));
//    poly1.setVertice(3, Point(61, -29.1));
//    poly1.setVertice(4, Point(20, -57.7));
//    poly1.setVertice(5, Point(0, -33.2));
//    printf("Vertex 3 of poly 1: (%.1f, %.1f)\n", poly1.getVertice(3).x, poly1.getVertice(3).y);
//    printf("Area of polygon 1: %.1f\n", poly1.getArea());
//
//
//    Polygon poly2(4);
//    poly2.setVertice(0, Point(0, 0));
//    poly2.setVertice(1, Point(33.2, 0.7));
//    poly2.setVertice(2, Point(20.3, -22));
//    poly2.setVertice(3, Point(5.1, -19.7));
//    printf("Vertex 2 of poly 2: (%.1f, %.1f)\n", poly2.getVertice(2).x, poly2.getVertice(2).y);
//    printf("Area of polygon 2: %.1f\n", poly2.getArea());
//    return 0;
//}