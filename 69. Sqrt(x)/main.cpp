class Solution
{
public:
    int mySqrt(int x)
    {
        if (x <= 1)
            return x;

        if (x == 2)
            return 1;

        for (long long i = 2; i <= x / 2 + 1; i++)
        {
            long long sq = i * i;
            if (sq % x == 0)
                return i;
            if (sq > x)
                return i - 1;
        }

        return 0;
    }
};