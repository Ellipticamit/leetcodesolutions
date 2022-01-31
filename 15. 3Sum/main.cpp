class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum;
        vector<vector<int>> ans;
        for (int i = 0; i < n - 2; i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                int lo = i + 1, hi = n - 1, sum = 0 - nums[i];

                while (lo < hi)
                {
                    int s = nums[lo] + nums[hi];

                    if (s == sum)
                    {
                        vector<int> t{nums[i], nums[lo], nums[hi]};
                        ans.push_back(t);

                        while (lo < hi && (nums[lo] == nums[lo + 1]))
                            lo++;
                        while (lo < hi && (nums[hi] == nums[hi - 1]))
                            hi--;

                        lo++;
                        hi--;
                    }
                    else if (s < sum)
                        lo++;
                    else
                        hi--;
                }
            }
        }

        return ans;
    }
};