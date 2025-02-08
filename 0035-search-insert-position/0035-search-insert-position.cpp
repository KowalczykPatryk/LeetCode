class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //binary search
        if (nums[0] > target)
        {
            return 0;
        }
        unsigned short left = 0;
        unsigned short right = nums.size()-1;
        while (left <= right)
        {
            unsigned short mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return right + 1;
    }
};