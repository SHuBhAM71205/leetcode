class Solution {

public:
    int divide(int dividend, int divisor) {
        long long a = dividend;
        long long b = divisor;
        if (a == INT_MIN && b == -1)
            return INT_MAX;

        if (b == 0)
            return INT_MAX;  

        if (a == b)
            return 1;

        bool sign = ((a < 0) ^ (b < 0));
        long long n = abs(a);
        long long d = abs(b);
        long long ans = 0;

        while (n >= d) {
            int count = 0;
            while (n >= (d << (count + 1))) {
                count++;
            }
            ans += (1 << count);
            n -= (d << count);
        }

        if (ans > INT_MAX)
            return sign ? INT_MIN : INT_MAX;

        return sign ? -ans : ans;
    }
};