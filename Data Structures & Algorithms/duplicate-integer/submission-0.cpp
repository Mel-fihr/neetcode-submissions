#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums)
    {
        std::unordered_set<int> hashset;

        for (int value:nums)
        {
            if (hashset.find(value) != hashset.end())
                return true;
            hashset.insert(value);
        }
        return false;
        
    }
};