class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int size = nums.size();
        int l = 0;
        int n = BinarySearch(l , size - 1, nums ,target);
        
        if(n==-1) return l;

        return n;
        
    }

    int BinarySearch(int &l , int r , vector<int>& nums , int target)
    {
        while(l<=r) 
        {
            int m = l + ( r - l ) / 2;
            if(target == nums[m])
            {
                return m;
            }
            if(target < nums[m])
            {
                r = m-1;
            }
            if(target > nums[m])
            {
                l = m+1;
            }
        }

        return -1;
    }
};