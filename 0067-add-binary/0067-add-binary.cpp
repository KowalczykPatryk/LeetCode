class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        int carryover = 0;
        string result = "";
        while (i >= 0 || j >= 0 || carryover != 0)
        {
            int sum = carryover;
            if (i >= 0)
            {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0)
            {
                sum += b[j] - '0';
                j--;
            }
            carryover = sum / 2;
            result.push_back((sum % 2) + '0');
        }
        reverse(result.begin(),result.end());
        return result;
    }
};