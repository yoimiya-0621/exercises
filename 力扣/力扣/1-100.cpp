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