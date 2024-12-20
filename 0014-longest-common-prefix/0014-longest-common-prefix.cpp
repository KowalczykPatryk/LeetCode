class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
        {
            return "";
        }
        string current_prefix = strs[0];
        for (unsigned short int i = 1; i < strs.size(); i++)
        {
            while (strs[i].find(current_prefix) != 0)
            {
                current_prefix = current_prefix.substr(0,current_prefix.size() - 1);
                if (current_prefix.empty())
                {
                    return "";
                }
            }
        }
        return current_prefix;
        
    }
};