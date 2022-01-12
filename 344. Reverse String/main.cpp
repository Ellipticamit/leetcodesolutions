class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i = 0, n = s.size(), j = n - 1;

        while (i < j)
        {
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
            i++;
            j--;
        }
    }
};