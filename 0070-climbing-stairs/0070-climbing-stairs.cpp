class Solution {
public:
    int climbStairs(int n) {
        int ways = 0;
        for (int k = 0; k <= n / 2; k++)
        {
            ways += binomialCoefficient(n-k, k);
        }
        return ways;
        
    }
    long int binomialCoefficient(int n, int k)
    {
        if (k > n - k) {
            k = n - k;  // Use symmetry property
        }
        long int res = 1;
        for (int i = 0; i < k; ++i) {
            res *= (n - i);
            res /= (i + 1);
        }
        return res;
    }
};