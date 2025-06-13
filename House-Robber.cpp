class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> last(nums.size() , -1);
        return rec_rob(nums,nums.size()-1,last);
    }

    int rec_rob(vector<int>& nums , int i , vector<int>& last)
    {
        if(i<0) return 0;
        if(last[i] != -1) return last[i];
        last[i] = max(rec_rob(nums,i-2,last) + nums[i] , rec_rob(nums,i-1,last));
        return last[i];
    }
};