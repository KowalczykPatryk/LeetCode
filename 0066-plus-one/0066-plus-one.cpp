class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        short last = digits.size()-1;
        while (last >= 0)
        {
            if (digits[last] == 9)
            {
                digits[last] = 0;
            }
            else
            {
                digits[last]++;
                return digits;
            }
            last--;

        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};