class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // second part of the nums1 is like new result vector and now we take elements from m and n
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (j >= 0)
        {
            if (i >= 0 && nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }
            else
            {
                nums1[k--] = nums2[j--];
            }
        }
    }
};