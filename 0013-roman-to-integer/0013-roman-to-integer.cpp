class Solution {
public:
    int romanToInt(string s) {
        unsigned int number = 0;
        int length = s.length();
        for (int i = 0; i < length; i++)
        {
            unsigned short int current = charToValue(s[i]);
            unsigned short int next = (i + 1 < length) ? charToValue(s[i+1]): 0;
            if (next > current)
            {
                number -= current;
            }
            else
            {
                number += current;
            }
        }
        return number;
        
    }
private:
    unsigned short int charToValue(char c)
    {
        switch(c)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};