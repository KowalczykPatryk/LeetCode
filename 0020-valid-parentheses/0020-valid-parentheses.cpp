class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 == 1)
        {
            return false;
        }
        stack<char> stack;
        unordered_map<char,char> par_map = {{')','('},{']','['},{'}','{'}};
        for (char c : s)
        {
            if (par_map.find(c) == par_map.end())
            {
                stack.push(c);
            }
            else if (!stack.empty() && par_map[c] == stack.top())
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }
        return stack.empty();
        
    }
};