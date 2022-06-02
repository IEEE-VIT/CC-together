class Solution
{
public:
    int minimumSwap(string s1, string s2)
    {
        if (s1.length() != s2.length())
            return -1;
        if (s1 == s2)
            return 0;
        int count = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == s2[i])
                continue;
            char temp;
            if (s1[i] == 'x')
                temp = 'y';
            else
                temp = 'x';
            int pos = i;
            for (int j = 0; j < s2.length(); j++)
            {
                if (!(j == i) && s2[j] == temp && s1[j] == s1[i])
                {
                    pos = j;
                    break;
                }
            }
            swap(s1[i], s2[pos]);
            count++;
        }
        if (s1 == s2)
            return count;
        else
            return -1;
    }
};