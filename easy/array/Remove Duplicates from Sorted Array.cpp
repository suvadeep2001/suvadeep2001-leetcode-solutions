class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {

            set<int> a;

            for (int i = 0; i < nums.size(); i++)
            {
                a.insert(nums[i]);
            }

            int ans = a.size();

            int i = 0;

            for (auto x: a)
            {
                nums[i] = x;
                i++;
            }

            return ans;
        }
};