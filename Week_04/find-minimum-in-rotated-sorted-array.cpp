//1.二分法
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
    while (left < right) {
        int middle = (left + right) / 2;
        if (nums[middle] < nums[right]) {
            // middle可能是最小值
            right = middle;
        } else {
            // middle肯定不是最小值
            left = middle + 1;
        }
    }
    return nums[left];
    }
};
//2.暴力法
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        return nums[0];
    }
};
