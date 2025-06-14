class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int mid = -1;
        int max = -1;
        int ans = -1;

        while(low<=high)
        {
            mid = low + (high - low) / 2;
            if(arr[mid] > max)
            {
                max = arr[mid];
                ans = mid;
            }

            if(mid + 1 < n && arr[mid+1] > arr[mid])
            {
                low = mid+1;
            }
            else if(mid > 0 && arr[mid-1] > arr[mid])
            {
                high = mid-1;
            }
            else
            {
                break;
            }
        }

        return ans;
    }
};