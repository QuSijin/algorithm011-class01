2.两数之和之哈希解法(暴力法在Week_01)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int> ma;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (ma.find(complement)!= ma.end()) {
                //find函数主要实现的是在容器内查找指定的元素
                //查找成功返回一个指向指定元素的迭代器，查找失败返回end迭代器。
                //因此此处!=end()意为查找成功
                return { ma[complement], i };
                //ma[complement]为已经加入map的元素的索引，所以小于本轮循环中的i>，放在前面
            }
            ma[nums[i]]= i;//向map中添加元素
        }
       return {};

    }
};

