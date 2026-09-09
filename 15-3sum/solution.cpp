// 50 ms | 29.2 MB
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        // 1. Sort the array
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; ++i) {
            // Skip duplicate elements for the first number
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int j = i + 1;
            int k = n - 1;
            
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[j], nums[k]});
                    
                    // Skip duplicates for the second and third numbers
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    
                    j++;
                    k--;
                } 
                else if (sum < 0) {
                    j++; // We need a larger sum, move the left pointer up
                } 
                else {
                    k--; // We need a smaller sum, move the right pointer down
                }
            }
        }
        
        return result;
    }
};