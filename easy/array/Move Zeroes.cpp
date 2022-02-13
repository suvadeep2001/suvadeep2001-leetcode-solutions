class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        
        for(int i = 0;i< nums.size();i++)
        {
            if(nums[i] == 0)
                c++;
            else{
                nums[i - c] = nums[i];
            }
        }
        int ans = nums.size() - c;
        
        for(int j = ans; j < nums.size();j++)
        {
            nums[j] = 0;
        }
    }
};