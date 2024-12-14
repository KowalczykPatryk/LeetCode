class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        // range of int -2,147,483,648 to 2,147,483,647
        // range of unsigned int 0 to 4,294,967,295
        if (x == 0)
        {
            return true;
        }
        else if (x < 0)
        {
            return false;
        }
        else
        {
            unsigned int original = x;
            unsigned int reversed = 0;
            while (x > 0)
            {   
                int digit = x % 10;
                reversed = reversed * 10 + digit;
                x /= 10;
            }
            return original == reversed;
        }

    }
};