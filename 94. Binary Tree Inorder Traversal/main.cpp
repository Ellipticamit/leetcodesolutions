class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v1;
        stack<TreeNode *> st;
        TreeNode *curr = root;
        while (curr != NULL || !st.empty())
        {
            while (curr != NULL)
            {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top();
            st.pop();
            v1.push_back(curr->val);
            curr = curr->right;
        }

        return v1;
    }
};