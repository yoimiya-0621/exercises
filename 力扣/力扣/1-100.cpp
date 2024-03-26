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
