class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        unsigned short int j = 0;
        for (unsigned short int i = 1; i < nums.size(); i++)
        {
            //j is droped by till we find different
            if (nums[i] != nums[j])
            {
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};