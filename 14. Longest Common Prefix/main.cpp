class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        if (n < 2)
            return strs[0];

        int min = 100000000;
        string smallStr = "";

        for (int i = 0; i < n; i++)
        {
            string s = strs[i];
            int len = s.size();
            if (len < min)
            {
                min = len;
                smallStr = s;
            }
        }

        for (int j = 0; j < n; j++)
        {
            string s = strs[j];
            string inner = "";
            for (int i = 0; i < smallStr.size(); i++)
            {
                if (s[i] == smallStr[i])
                {
                    inner += smallStr[i];
                }
                else
                    break;
            }

            if (inner == "")
                return inner;

            if (inner.size() < smallStr.size())
                smallStr = inner;
        }

        return smallStr;
    }
};