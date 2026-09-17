// 0 ms | 88.8 MB
class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        // min_len[i] stores the minimum length of a subarray with sum = target 
        // ending at or before index i. Initialized to infinity.
        vector<int> min_len(n, INT_MAX);
        
        int sum = 0, left = 0;
        int ans = INT_MAX;
        int best_so_far = INT_MAX;

        for (int right = 0; right < n; ++right) {
            sum += arr[right];
            
            // Shrink the window from the left if the sum exceeds the target
            while (sum > target) {
                sum -= arr[left];
                left++;
            }
            
            // If we found a valid subarray summing to target
            if (sum == target) {
                int curr_len = right - left + 1;
                
                // If there is a valid non-overlapping subarray before index `left`
                if (left > 0 && min_len[left - 1] != INT_MAX) {
                    ans = min(ans, curr_len + min_len[left - 1]);
                }
                
                // Update best_so_far length ending at or before `right`
                best_so_far = min(best_so_far, curr_len);
            }
            
            min_len[right] = best_so_far;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};