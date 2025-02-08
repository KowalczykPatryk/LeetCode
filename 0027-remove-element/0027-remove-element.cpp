class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        unsigned short int j = 0;
        for (unsigned short int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
        
    }
};