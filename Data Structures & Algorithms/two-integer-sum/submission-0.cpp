class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        std::unordered_map<int, int> hashmap;

        int i = 0;
        int nedded;
        while (i < nums.size())
        {
            nedded = target - nums[i];
            if (hashmap.find(nedded) != hashmap.end())
                return {hashmap[nedded], i};
            else
                hashmap[nums[i]] = i;
            i++;
        }
    }
};
