// 0 ms | 20.7 MB
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // XOR all elements together
        }
        return result;     // Return the remaining single number
    }
};