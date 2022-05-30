class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> map;
        unordered_map<char, bool> mapped;

        for (int count = 0; count < s.length(); count++)
        {
            if ((map.count(s[count]) && map[s[count]] != t[count]) || (!map.count(s[count]) && mapped[t[count]]))
                return false;

            map[s[count]] = t[count];
            mapped[t[count]] = true;
        }

        return true;
    }
};