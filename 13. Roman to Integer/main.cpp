class Solution
{
public:
    int val(char c)
    {
        int ans = 0;
        switch (c)
        {
        case 'I':
            ans = 1;
            break;
        case 'V':
            ans = 5;
            break;
        case 'X':
            ans = 10;
            break;
        case 'L':
            ans = 50;
            break;
        case 'C':
            ans = 100;
            break;
        case 'D':
            ans = 500;
            break;
        case 'M':
            ans = 1000;
            break;
        default:
            ans = -1;
        }
        return ans;
    }

    int romanToInt(string s)
    {
        int ans = 0, n = s.size();

        for (int i = 0; i < n; i++)
        {
            int s1 = val(s[i]);

            if (i + 1 < n)
            {
                int s2 = val(s[i + 1]);
                if (s1 >= s2)
                {
                    ans += s1;
                }
                else
                {
                    ans += s2 - s1;
                    i++;
                }
            }
            else
            {
                ans += s1;
            }
        }

        return ans;
    }
};