class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length())
            return false;
        int count[26] = {0};
        
        int i = 0;
        while (i < s.size())
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
            i++;
        }
        i = 0;
        while (i < 26)
        {
            if (count[i] != 0)
                return false;
            i++;
        }
        return true;
        
    }
};
