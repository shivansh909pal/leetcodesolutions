// 0 ms | 21.8 MB
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int q=0,p=0;
       for(int i=0;i<=n;i++){
        p^=i;
       }
        for(int j=0;j<n;j++){
        q^=nums[j];
        }
        return p^q;
    }
};