class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();

        if (n == 1)
        {
            if (digits[0] == 9)
            {
                digits[0] = 1;
                digits.push_back(0);
            }
            else
                digits[0] = digits[0] + 1;
        }
        else
        {
            int j = n - 1;
            while (j >= 0)
            {
                if (digits[j] != 9)
                {
                    digits[j] = digits[j] + 1;
                    break;
                }

                digits[j] = 0;
                j--;
            }
            if (digits[0] == 0)
            {
                digits[0] = 1;
                digits.push_back(0);
            }
        }

        return digits;
    }
};