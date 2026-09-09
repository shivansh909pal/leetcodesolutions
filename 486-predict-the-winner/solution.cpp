// 0 ms | 10 MB
class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        // dp[i] will store the max score difference for subarray starting at i
        vector<int> dp(n);
        
        // Base case: subarrays of length 1
        for (int i = 0; i < n; ++i) {
            dp[i] = nums[i];
        }
        
        // Build up for lengths from 2 to n
        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                // Choose either left (nums[i]) or right (nums[j])
                dp[i] = max(nums[i] - dp[i + 1], nums[j] - dp[i]);
            }
        }
        
        // If Player 1's net score advantage for the whole array (0 to n-1) is >= 0, they win.
        return dp[0] >= 0;
    }
};