class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        result.push_back(nums);
        while(next_permutation(nums.begin(), nums.end())) {// next_permutation()会取得[first,last)所标示之序列的下一个排列组合，如果没有下一个排列组合，便返回false
            result.push_back(nums);
        }
        return result;
    }
};

