class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.empty())
        {
            return false;
        }
        int endrea = nums.size() - 1;
        for(int i = nums.size() - 1;i >= 0;i--)
        {
            if(nums[i]+i>=endrea)
            {
                endrea = i;
            }
        }
        return endrea == 0;
    }
};
