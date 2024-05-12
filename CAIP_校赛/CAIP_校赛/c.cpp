//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string s, x;
//    string a = "lamo=";
//    int n = 5;
//    while (getline(cin, s))
//    {
//        map<char, int>flag;
//        getline(cin, x);
//        bool f = false;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == 'l')
//                flag['l'] = 1;
//            if (s[i] == 'a')
//                flag['a'] = 1;
//            if (s[i] == 'm')
//                flag['m'] = 1;
//
//            if (s[i] == 'o')
//                flag['o'] = 1;
//            if (s[i] == '=')
//                flag['='] = 1;
//            for (int j = 0; j < a.size(); j++)
//            {
//                if (!flag[a[j]])
//                {
//                    break;
//                }
//                if (j == a.size() - 1)
//                    f = true;
//            }
//            if (!f)
//                continue;
//            if (isdigit(s[i]))
//            {
//                cout << "'number'" << '\n';
//                break;
//            }
//            else if (s[i] == 't' && s[i + 1] == 'r' && s[i + 2] == 'u' && s[i + 3] == 'e')
//            {
//                cout << "'boolean'" << '\n';
//                break;
//            }
//            else if (s[i] == 'f' && s[i + 1] == 'a' && s[i + 2] == 'l' && s[i + 3] == 's' && s[i + 4] == 'e')
//            {
//                cout << "'boolean'" << '\n';
//                break;
//            }
//            else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
//            {
//                cout << "'number'" << '\n';
//                break;
//            }
//            else if (s[i] == ' ' || s[i] == '=')
//                continue;
//            else if (s[i] == '"' || s[i] == '\'') {
//                cout << "'string'" << '\n';
//                break;
//            }
//            else
//                continue;
//        }
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string s, x;
//    while (getline(cin, s))
//    {
//        if (s[0] == 'l') {
//            if (s.find("\"") != s.npos || s.find("\'") != s.npos)
//            {
//                x = "'string'";
//            }
//            else if (s.find("true") != s.npos || s.find("false") != s.npos)
//            {
//                x = "'boolean'";
//            }
//            else {
//                x = "'number'";
//            }
//        }
//        else
//            cout << x << '\n';
//    }
//    return 0;
//}