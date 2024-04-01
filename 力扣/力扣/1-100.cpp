//1两数之和
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        int n = nums.size();
//        for (int i = 0; i < n; ++i) {
//            for (int j = i + 1; j < n; ++j) {
//                if (nums[i] + nums[j] == target) {
//                    return { i, j };
//                }
//            }
//        }
//        return {};
//    }
//};
//2.两数相加
//3.最长子字符串
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int ans = 0, i = 0, j = 0;
//        for (i = 0; i < s.size(); i++)
//        {
//            map<char, bool>a;
//            for (j = i; j < s.size(); j++)
//            {
//                if (a[s[j]] != true) {
//                    a[s[j]] = true;
//                }
//                else
//                    break;
//            }
//            ans = max(ans, j - i);
//        }
//        return ans;
//    }
//};
//4.寻找两个正序数组的中位数
// class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int a[100000];
//        int n = 0;
//        for (int i = 0; i < nums1.size(); i++)
//            a[n++] = nums1[i];
//        for (int i = 0; i < nums2.size(); i++)
//            a[n++] = nums2[i];
//        sort(a, a + n);
//        if (n % 2 == 1)
//            return (double)a[n / 2];
//        else
//            return (double)(a[n / 2] + a[n / 2 - 1]) / 2;
//    }
//};
//5.最长子回文串
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = 0;
//        string ans;
//        for (int i = 0; i < s.length(); i++)
//        {
//            int l = i, r = i;
//            while (1) {
//                if (l<0 || r>s.length())
//                    break;
//                if (s[l] != s[r])
//                    break;
//                l--;
//                r++;
//            }
//            r--;
//            l++;
//            if (n < r - l + 1 && r < s.length() && l >= 0 && l <= r)
//            {
//                n = r - l;
//                ans = s.substr(l, r - l + 1);
//            }
//            int a = i, b = i + 1;
//            while (1) {
//                if (a<0 || b>s.length())
//                    break;
//                if (s[a] != s[b])
//                    break;
//                a--;
//                b++;
//            }
//            a++;
//            b--;
//            if (n < b - a + 1 && a >= 0 && b < s.length() && a < b)
//            {
//                n = b - a + 1;
//                ans = s.substr(a, b - a + 1);
//            }
//        }
//        return ans;
//    }
//};

//6.Z字形变换
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        string ans;
//        if (numRows == 1)
//            return s;
//        int e = 2 * numRows - 2;
//        int m = (s.length() / e) * (numRows - 1);
//        if (s.length() % e != 0)
//            m += 1;
//        if (s.length() % e > numRows)
//            m += s.length() % e - numRows;
//        for (int i = 1; i <= numRows; i++)
//        {
//            int flag = 0;
//            for (int j = 1; j <= m; j++)
//            {
//                if ((j - 1) % (numRows - 1) == 0) {
//                    flag++;
//                    if (i + (flag - 1) * e - 1 < s.length())
//                        // if(isalpha(s[i+(flag-1)*e-1]))
//                        ans.push_back(s[i + (flag - 1) * e - 1]);
//                }
//                else if ((j - 1) % (numRows - 1) + i == numRows)
//                {
//                    if (e * (flag - 1) + numRows + (j - 1) % (numRows - 1) - 1 < s.length())
//                        //if(isalpha(s[e*(flag-1)+numRows+(j-1)%(numRows-1)-1]))
//                        ans.push_back(s[e * (flag - 1) + numRows + (j - 1) % (numRows - 1) - 1]);
//                }
//            }
//        }
//        return ans;
//    }
//};
//7.整数反转
//class Solution {
//public:
//    int reverse(long long x) {
//        long long f = 0, y = 1;
//        if (x < 0)
//        {
//            y = -1;
//            x = -x;
//        }
//        while (x != 0) {
//            f *= 10;
//            f += x % 10;
//            x /= 10;
//            if (f >= (long long)pow(2, 31) - 1 || f <= -(long long)pow(2, 31))
//                return 0;
//        }
//        return (int)f * y;
//    }
//};
//8.字符串换整数(Atoi)
//class Solution {
//public:
//    int myAtoi(string s) {
//        long long f = 1, x = 0, flag = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (flag == 0)
//            {
//                if (s[i] == '+') {
//                    f = 1;
//                    flag = 1;
//                    continue;
//                }
//                else if (s[i] == '-')
//                {
//                    f = -1;
//                    flag = 1;
//                    continue;
//                }
//                else if (isdigit(s[i])) {
//                    f = 1;
//                    x += s[i] - '0';
//                    flag = 1;
//                    continue;
//                }
//            }
//            if (isdigit(s[i]))
//            {
//                x = x * 10 + s[i] - '0';
//            }
//            else if (s[i] == ' ' && flag < 1)
//                continue;
//            else
//                break;
//            if (f == 1 && x >= (long long)pow(2, 31) - 1)
//                return (long long)pow(2, 31) - 1;
//            else if (f == -1 && x >= pow(2, 31))
//                return -(long long)pow(2, 31);
//        }
//        return f * x;
//    }
//};
//9.回文数
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if (x < 0)
//            return false;
//        if (x >= 0 && x <= 9)
//            return true;
//        string s;
//        while (x != 0)
//        {
//            s.push_back(x % 10 + '0');
//            x /= 10;
//        }
//        string y = s;
//        reverse(y.begin(), y.end());
//        if (y == s)
//            return true;
//        else
//            return false;
//
//    }
//};
//10.正则表达式匹配
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        int n = s.size(), m = p.size();
//        vector<vector<bool>>dp(n + 1, vector<bool>(m + 1));
//        dp[0][0] = true;
//        for (int j = 0; j < m; j++)
//        {
//            if (j >= 1 && p[j - 1] == '*' && (j == 1 || dp[0][j - 2] == true))
//                dp[0][j] = true;
//        }
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                if (s[i - 1] == p[j - 1] || p[j - 1] == '.') {
//                    dp[i][j] = dp[i - 1][j - 1];
//                }
//                else if (p[j - 1] == '*') {
//                    if (s[i - 1] == p[j - 2] || p[j - 2] == '.')
//                        dp[i][j] = dp[i - 1][j] | dp[i][j - 2] | dp[i][j - 1];
//                    else
//                        dp[i][j] = dp[i][j - 2];
//                }
//            }
//        }
//        return dp[n][m];
//    }
//};
//11.盛水最多的容器
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int m = 0;
//        int l = 0, r = height.size() - 1;
//        while (l < r)
//        {
//            m = max(m, (r - l) * min(height[l], height[r]));
//            if (height[l] < height[r])
//                l++;
//            else
//                r--;
//        }
//        return m;
//    }
//};