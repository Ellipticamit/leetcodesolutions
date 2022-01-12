class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (mp.find(diff) == mp.end())
                mp[nums[i]] = i;
            else
            {
                ans.push_back(mp[diff]);
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};