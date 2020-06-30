1.暴力法--简单易懂
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target && i!=j)
                {
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        return a;
    }
};
2.一次hash--O(n)
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
		//m[complement]为已经加入map的元素的索引，所以小于本轮循环中的i，放在前面
            }
            ma[nums[i]]= i;//向map中添加元素
        }
       return {};

    }
};
