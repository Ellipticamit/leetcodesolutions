class Solution
{
public:
    string intToRoman(int num)
    {
        int nums[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string sym[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int i = 12;

        string s = "";
        while (num > 0)
        {
            int div = num / nums[i];
            num = num % nums[i];

            while (div--)
            {
                s += sym[i];
            }
            i--;
        }

        return s;
    }
};