class Solution
{
public:
    bool isValid(string s)
    {
        int n = s.size();
        if (n % 2 != 0)
            return false;

        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
                continue;
            }
            if (st.empty())
                return false;

            switch (c)
            {
            case ')':
                if (st.top() != '(')
                    return false;
                st.pop();
                break;
            case '}':
                if (st.top() != '{')
                    return false;
                st.pop();
                break;
            case ']':
                if (st.top() != '[')
                    return false;
                st.pop();
                break;
            }
        }

        return (st.empty());
    }
};