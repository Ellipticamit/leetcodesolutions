class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        string str = "";
        int j = s.size() - 1;

        while (s[j] == ' ')
            j--;

        for (int i = 0; i <= j; i++)
        {

            if (s[i] != ' ')
            {
                str += s[i];
            }
            else
            {
                str = "";
            }
        }

        return str.size();
    }
};