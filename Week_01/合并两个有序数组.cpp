class Solution {
public:
    vector<int>& merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int len = m + n - 1;
        while (n) {
            if (m == 0||nums2[n-1] > nums1[m-1]) {
                nums1[len--] = nums2[--n];
            } else {
                nums1[len--] = nums1[--m];
            }
        }
        return nums1;
    }
};
