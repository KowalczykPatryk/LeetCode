class Solution {
public:
    string longestPalindrome(string s) {
        int max_length = 0;
        int start_index = 0;
        int end_index = 0;
        for (int i = 0; i < s.length() - 1; i++){
            if (s.length()-i <= max_length) break; // is it worth continue checking
            for (int j = s.length() - 1; j > i; j--)
            {
                if (j-i+1 <= max_length) break; // is it worth continue checking
                if (s[i] == s[j] && j-i+1 > max_length)
                {
                    //found potential palindorome to be checked
                    int potential_max_length = j-i+1;
                    for (int k = 1; k <= (j - i) / 2; k++)
                    {
                        if (s[i+k] != s[j-k])
                        {
                            potential_max_length = 0;
                            break;
                        }
                    }
                    if (potential_max_length > max_length)
                    {
                        max_length = potential_max_length;
                        start_index = i;
                        end_index = j;
                    }
                }
            }
        }
        string output_string = "";
        for (int i = start_index; i <= end_index; i++)
        {
            output_string += s[i];
        }
        return output_string;
    }
};