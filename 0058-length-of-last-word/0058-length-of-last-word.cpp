class Solution {
public:
    int lengthOfLastWord(string s) {
        unsigned short lenght = 0;
        short i = s.size()-1;
        while (i>=0 && s[i] == ' ')
        {
            i--;
        }
        while (i>=0 && s[i] != ' ')
        {
            lenght++;
            i--;
        }
        return lenght;
    }
};