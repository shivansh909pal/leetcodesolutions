// 3 ms | 95.9 MB
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;

        merge(nums1.begin(), nums1.end(),
              nums2.begin(), nums2.end(),
              back_inserter(nums));

        int n = nums.size();

        if (n % 2)
            return nums[n / 2];

        return (nums[n / 2] + nums[n / 2 - 1]) / 2.0;
    }
};